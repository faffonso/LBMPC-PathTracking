from ilqr import *

def f(x, u, dt):
    x1 = x[0] + u[0] * np.cos(x[2]) * dt
    x2 = x[1] + u[0] * np.sin(x[2]) * dt
    x3 = x[2] + u[1] * dt
    return np.array([x1, x2, x3])

def get_T(angle):
    T = np.array([
        [np.cos(angle), np.sin(angle), 0],
        [-np.sin(angle), np.cos(angle), 0],
        [0, 0, 1]
    ])

    return T

if __name__ == "__main__":
    N = 15
    dt = .1

    Qf = np.diag([5, 5, 2])
    Q  = np.diag([3, 3, 1])
    R  = np.diag([.1, .5])

    cost = Cost(N, Q, R, Qf)
    dynamics = Dynamics(dt = dt)

    controller = iLQR(dynamics, cost, dt=dt, N=N)

    x0 = np.array([0, 0, PI/2])
    x_ref = np.array([4, 4, 0])

    # max_iter = 50

    # xs = np.empty((max_iter, 3))
    # xs[0] = x0

    # for n in range(max_iter-1):
    #     # Calculate state
    #     T = get_T(xs[n][2])
    #     e = T @ (x_ref - xs[n])

    #     # Apply controller
    #     us = np.array([[.5, .0] for _ in range(N)])
    #     es, us = controller.fit(e, us) 
 
    #     print(f'Final error {n} | {es[N-1]}')

    #     # Generate trajecrory
    #     xs[n+1] = f(xs[n], -us[0], dt)


    # timestamp = np.arange(max_iter)
    
    # plt.plot(xs[:, 0], xs[:, 1])
    # plt.grid()
    # plt.show()
