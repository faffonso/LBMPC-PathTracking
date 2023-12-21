import numpy as np
import casadi as ca
import matplotlib.pyplot as plt

PI = 3.14

class Dynamics():
    def __init__(self, dt=.1, dynamic="standard"):

        self.dynamics = dynamic
        self.dt = dt

        # Tracking-error state space
        x = ca.SX.sym('x', 3)
            ## Standard
            # x_1 = x
            # x_2 = y
            # x_3 = theta 
            ## Tracking-error
            # e_1 = longitudinal error
            # e_2 = lateral error
            # e_3 = rotational error
        
        u = ca.SX.sym('u', 2) 
            # u_1 = linear velocity
            # u_2 = angular velocity

        x1_dot = u[0] * np.cos(x[2])
        x2_dot = u[0] * np.sin(x[2])
        x3_dot = u[1]

        e1_dot =  u[1] * x[1] - u[0]
        e2_dot = -u[1] * x[0]
        e3_dot = -u[1]

        x_dot = ca.veccat(x1_dot, x2_dot, x3_dot)
        e_dot = ca.veccat(e1_dot, e2_dot, e3_dot)
        

        if (dynamic == "standard"):
            f = x + x_dot * dt
        elif (dynamic == "error-tracking"):
            f = x + e_dot * dt

        Ak = ca.jacobian(f, x)
        Bk = ca.jacobian(f, u)

        self._f = ca.Function('f', [x, u], [f])
        self._A = ca.Function('A_k', [x, u], [Ak])
        self._B = ca.Function('B_k', [x, u], [Bk])

    def f(self, x, u):
        return self._f(x, u)

    def f_prime(self, x, u):
        A_k = self._A(x, u)
        B_k = self._B(x, u)
        return A_k, B_k