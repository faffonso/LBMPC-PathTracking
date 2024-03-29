from nmpc_controller import *
from draw import *

# Set print options
np.set_printoptions(precision=4, suppress=True)

def main():
    # Parameters
    PI = 3.14
    N =  15
    draw_data = True
    dt = 0.15

    x_ref = 10.0
    y_ref = -4.0
    theta_ref = PI/2

    x0 = np.array([0.0, 0.0, 0.0])
    xref = np.array([x_ref, y_ref, theta_ref])

    xs = np.zeros((N+1, 3))
    u0 = np.zeros((N, 2))

    # Objects
    controller = NMPC(N=N, Qx = 5.0, Qy = 5.0, Rv = .5, Romega = 0.1, dt=dt)
    draw = Draw(xref, N=N, dt=dt)

    for i in range(30):
        x, u = controller.fit(xs, xref, x0, u0)
        x0 = x[1]
        draw.new_data(x, u)
        
        if (draw_data == True):
            draw.plot()

    draw.plot_trajectory()

if __name__ == '__main__':
    main()