import numpy as np
import casadi as ca
import matplotlib.pyplot as plt

PI = 3.14

class Dynamics():
    def __init__(self, dt=.1):

        self.dt = dt

        x = ca.SX.sym('x', 3) # State is error [x_ref - x, y_ref - y, theta_ref - theta]
        u = ca.SX.sym('u', 2) # Action conrol is linear and angular velocity [v, omega]

        x1_dot = -u[0] + u[1] * x[1]
        x2_dot = u[1] * x[0]
        x3_dot = -u[1]

        x_dot = ca.veccat(x1_dot, x2_dot, x3_dot)

        
        self._f = ca.Function('f', [x, u], [x_dot])
        self._A = ca.Function('A', [x, u], [ca.jacobian(self._f(x, u), x)])
        self._B = ca.Function('B', [x, u], [ca.jacobian(self._f(x, u), u)])
        

    def f(self, x, u):
        return self._f(x, u)

    def f_prime(self, x, u):
        f_x = self._A(x, u)
        f_u = self._B(x, u)
        return f_x, f_u
    
if __name__ == "__main__":
    dynamics = Dynamics()

    dt = .1

    x_ref = 4
    y_ref = 4
    theta_ref = 0

    x0 = 0
    y0 = 0
    theta0 = PI/4

    e_ref = np.array([x_ref, y_ref, theta_ref])
    e0 = np.array([x0, y0, theta0])

    u = np.array([1.0, .0])

    T = np.array([
        [np.cos(theta0), np.sin(theta0), 0],
        [-np.sin(theta0), np.cos(theta0), 0],
        [0, 0, 1]
    ])

    x = T @ (e_ref - e0)

    x_list = []
    y_list = []
    theta_list = []

    for i in range(15):
        x_list.append(float(x[0]))
        y_list.append(float(x[1]))
        theta_list.append(float(x[2]))

        x_dot = dynamics.f(x, u)
        x += x_dot * dt

        print(x)

    # Gerando o gráfico
    plt.figure(figsize=(8, 6))
    plt.plot(x_list, y_list, marker='o')
    plt.title('Trajetória do Robô')
    plt.xlabel('Posição X')
    plt.ylabel('Posição Y')
    plt.grid(True)
    plt.show()