import numpy as np

from cost import *
from dynamics import *

class iLQR():
    def __init__(self, dynamics, cost, dt=0.1, N=10):
        """Constructs an iLQR controller.

        Args:
            dynamics: Dynamics System.
            cost: Cost function.
            dt: Sampling time
            N: Horizon length.
        """
        self.dynamics = dynamics
        self.cost = cost

        self.N = N
        self.alpha = 1.0

        self._k = np.zeros((N, 3))
        self._K = np.zeros((N, 2, 3))


    def fit(self, x0, us, n_iter=15, tol=1e-6):
        """Compute optimal control

        Args:
            x0: Initial state.
            u0: Initial control path.
            n_iter: Max iterations.
            tol: Tolerance. 

        Returns:
            xs: Optimal state path.
            us: Optimal control path.
        """
        alphas = 1.1**(-np.arange(10)**2)

        # Rollout for first J
        xs, J_old = self._rollout(x0, us)

        # Action control compute loop
        for iteration in range(n_iter):
            k, K, _ = self._backward_pass(xs, us)

            for alpha in alphas:
                xs_new, us_new = self._forward_pass(xs, us, k, K, alpha)
                J = self.cost._trajectory_cost(xs_new, us_new)

                # print(f'Trying convergence {J} on {J_old}')
                
                if (abs(J) < abs(J_old)):

                    J_old = J
                    xs = xs_new
                    us = us_new

                    break

        return xs, us

    def _forward_pass(self, xs, us, ks, Ks, alpha, hessian=False):
        """Apply the forward dynamics

        Args:
            xs: Initial state.
            us: Control path.
            ks: Feedforward gains.
            Ks: Feedback gains.
            alpha: Line search coefficient.
            
        Returns:
            Tuple of:
                x_new: New state path.
                u_new: New action control.
        """
        
        u_new = np.empty((self.N, 2))
        x_new = np.empty((self.N, 3))

        x_new[0] = xs[0]

        # Compute new action and state control
        for i in range (self.N - 1):
            u_new[i] = us[i] + Ks[i] @ (x_new[i] - xs[i]) + alpha * ks[i]

            x_new[i+1] = np.array(self.dynamics.f(x_new[i], u_new[i])).T

        return x_new, u_new



    def _backward_pass(self, xs, us):
        """Computes the feedforward and feedback gains k and K.

        Args:
            xs: Initial state.
            us: Control path.

        Returns:
            ks: feedforward gains.
            Ks: feedback gains.
            J: Cost path.
        """
        
        N = us.shape[0]

        ks = np.empty(us.shape)
        Ks = np.empty((us.shape[0], us.shape[1], xs.shape[1]))

        J = 0

        Qf = self.cost.get_Qf()

        s = Qf @ xs[N-1]
        S = Qf


        for n in range(N - 1, 0, -1):

            # Obtain f and l derivatives
            Ak, Bk = self.dynamics.f_prime(xs[n], us[n])
            l_x, l_u, l_xx, l_ux, l_uu  = self.cost.l_prime(xs[n], us[n])

            # Q_terms
            Q_x  = l_x  + np.dot(s, Ak)
            Q_u  = l_u  + np.dot(s, Bk)
            Q_xx = l_xx + np.dot(Ak.T, np.dot(S, Ak))
            Q_uu = l_uu + np.dot(Bk.T, np.dot(S, Bk))
            Q_ux = l_ux + np.dot(Bk.T, np.dot(S, Ak))

            # Feedforward and feedback gains
            k = np.dot(-np.linalg.inv(Q_uu), Q_u)
            K = np.dot(-np.linalg.inv(Q_uu), Q_ux)

            ks[n], Ks[n] = k, K

            # V_terms
            s = Q_x + K.T @ Q_u + Q_ux.T @ k + K.T @ Q_uu @ k
            S = Q_xx + K.T@Q_ux + K.T @ Q_ux + K.T @ Q_uu @ K

            #Sum cost 
            J += 1/2 * np.dot(k.T, np.dot(Q_uu, k)) + np.dot(k, Q_u)

        return ks, Ks, J
        
    def _rollout(self, x0, us):
        """Apply the forward dynamics to have a trajectory from the starting
        state x0 by applying the control path us.

        Args:
            x0: Initial state.
            us: Control path.

        Returns:
            J: Cost path.
        """
        J = 0
        N = us.shape[0]

        xs = np.empty((N, 3))
        xs[0] = x0

        # Calculate path state over a x0 and us
        for n in range(N-1):
            xs[n+1] = np.array(self.dynamics.f(xs[n], us[n])).T

            J += self.cost._l(xs[n], us[n])[0]
            # print(f'Index {n} | cost: {J}')

        J += self.cost._lf(xs[N-1])
        # print(f'Index {N-1} | cost: {J}')

        return xs, J
    
if __name__ == "__main__":
    np.set_printoptions(suppress=True)

    N = 50
    dt = .1

    Qf = np.diag([5, 5, 2])
    Q  = np.diag([3, 3, .5])
    R  = np.diag([1, 1])

    cost = Cost(N, Q, R, Qf)
    dynamics = Dynamics(dt=dt)

    controller = iLQR(dynamics, cost, dt=dt, N=N)

    PI = 3.14

    angle = 0

    x_0 = np.array([10, -4 , 0])
    x_ref = np.array([2, 0, PI])

    us = np.array([[.0, .0] for _ in range(N)])

    x0 = x_ref - x_0

    xs, us = controller.fit(x0, us)

    print(f'Final state {xs}')
    print(f'Final action {us}')

    x = xs[:, 0] + x_0[0]
    y = xs[:, 1] + x_0[1]

    timestamp = np.arange(N)
    # Plotando x e y em função do tempo
    plt.plot(x, y, label='e1') 
    # plt.plot(timestamp, es[:, 1], label='e2') 
    # plt.plot(timestamp, es[:, 2], label='e3') 

    plt.xlabel('Tempo')
    plt.ylabel('Valor')
    plt.legend()  # Mostrar legenda
    plt.grid(True)  # Adicionar grade
    plt.show()  # Mostrar o gráfico