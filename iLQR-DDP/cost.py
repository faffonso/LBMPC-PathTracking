import casadi as ca
import numpy as np

class Cost():
    def __init__(self, N, Q, R, Qf):

        self.Qf = Qf
        self.Q = Q
        self.R = R
        
        self.N = N

        x = ca.SX.sym('e', 3)
        u = ca.SX.sym('u', 2)

        l = 1/2 * (x.T @ Q @ x + u.T @ R @ u) 
        lf = 1/2 * (x.T @ Qf @ x)

        lx = ca.jacobian(l, x)
        lu = ca.jacobian(l, u)
        lxx = ca.jacobian(lx, x)
        luu = ca.jacobian(lu, u)

        self._l = ca.Function('l', [x, u], [l])
        self._lf = ca.Function('lf', [x], [lf])  
        
        self._lx = ca.Function('lx', [x], [lx])
        self._lu = ca.Function('lu', [u], [lu])
        self._lxx = ca.Function('lxx', [x], [lxx])
        self._luu = ca.Function('luu', [u], [luu])
        
    
    def _trajectory_cost(self, xs, us):
        J = 0
        for x, u in zip(xs, us):
            J += self._l(x, u)[0]

        return J

    def l_prime(self, x, u):
        l_x = self.Q @ x
        l_u = self.R @ u

        l_xx = self.Q
        l_uu = self.R
        l_xu = 0

        return l_x, l_u, l_xx, l_xu, l_uu
    
    def get_Qf(self):
        return self.Qf