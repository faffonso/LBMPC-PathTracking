from nmpc_controller import *

import matplotlib.pyplot as plt
import numpy as np

class Draw():
    def __init__(self, xref, N=10, MAX=100, dt=0.1):
        self.dt = dt
        self.N = N
        self.k = 0

        self.x_ref      = xref[0]
        self.y_ref      = xref[1]
        self.theta_ref  = xref[2]

        self.x = np.empty((MAX, 3))
        self.u = np.empty((MAX, 2))

    def new_data(self, xs, us):
        k = self.k
        N = self.N

        self.x[k:k + N + 1] = xs
        self.u[k:k + N] = us

        # self.x = np.insert(x, k, xs, axis=0)
        # self.u = np.insert(u, k, us, axis=0)

        # print(self.u.shape)

        self.k += 1

    def plot_trajectory(self):
        k = self.k
        N = self.N
        
        x = self.x[:k+N]

        print(x)

        xp = x[:, 0]
        yp = x[:, 1]

        plt.figure(figsize=(8, 6))  # Define o tamanho da figura (opcional)
        plt.plot(xp, yp, linestyle='-')  # Plota o gráfico de linha com marcadores circulares

        # Adicionando rótulos e título
        plt.xlabel('Eixo X')  # Rótulo do eixo x
        plt.ylabel('Eixo Y')  # Rótulo do eixo y
        plt.title('Gráfico de X e Y')  # Título do gráfico

        # Mostrando o gráfico
        plt.grid(True)  # Adiciona grades ao gráfico (opcional)
        plt.show()  # Exibe o gráfico

    def plot(self):
        dt = self.dt

        k = self.k 
        nx = self.N + self.k - 1
        nu = nx - 1
        tx = np.arange(0, nx)
        tu = np.arange(0, nu)

        x1 = self.x[:nx, 0] - self.x_ref
        x2 = self.x[:nx, 1] - self.y_ref
        x3 = self.x[:nx, 2] - self.theta_ref

        u1 = self.u[:nu, 0]
        u2 = self.u[:nu, 1]

        fig, axs = plt.subplots(4, 1, figsize=(16, 9))  # Criar subplots

        # Plotando x_ref
        axs[0].axhline(y=0, color='black', linestyle='-', linewidth=2)
        axs[0].plot(tx, x1, '--bo', color='r')
        axs[0].plot(tx[:k], x1[:k], '-bo', label='$(x - x_{ref})$', color='r')
        axs[0].set_xlim((0, tx[nx-1]))
        axs[0].grid()
        axs[0].legend()

        # Plotando y_ref
        axs[1].axhline(y=0, color='black', linestyle='-', linewidth=2)
        axs[1].plot(tx, x2, '--bo', color='r')
        axs[1].plot(tx[:k], x2[:k], '-bo', label='$(y - y_{ref})$', color='r')
        axs[1].set_xlim((0, tx[nx-1]))
        axs[1].grid()
        axs[1].legend()

        # Plotando theta_ref
        axs[2].axhline(y=0, color='black', linestyle='-', linewidth=2)
        axs[2].plot(tx, x3, '--bo', color='r')
        axs[2].plot(tx[:k], x3[:k], '-bo', label=r'$(\theta - \theta_{ref})$', color='r')
        axs[2].set_xlim((0, tx[nx-1]))
        axs[2].grid()
        axs[2].legend()

        # Plotando u
        axs[3].step(tu, u1, '--', color='b')
        axs[3].step(tu, u2, '--', color='orange')
        axs[3].step(tu[:k], u1[:k], label='$v$', color='b')
        axs[3].step(tu[:k], u2[:k], label='$\omega$', color='orange')
        axs[3].set_xlim((0, tu[nu-1]))
        axs[3].grid()
        axs[3].legend()

        plt.tight_layout()
        plt.show()


