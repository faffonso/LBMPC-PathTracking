# Matrix basics


- **Matrix** is a 2D grid of numbers that can be though of as a collection of column or row vectors.

$$\mathbf{A} = \begin{bmatrix}
a_{11} & a_{12} & \cdots a_{1n} \\
a_{21} & a_{22} & \cdots a_{2n} \\
\vdots & \vdots & \ddots & \vdots \\
a_{m1} & a_{m2} & \cdots a_{mn}
\end{bmatrix} \in \mathbb{R}^{m \times n} $$

- Matrix-matrix multiplication

$$\begin{bmatrix} 
\mathbf{a_1^T} \\
\mathbf{a_2^T}  \\
\vdots \\
\mathbf{a_m^T}
\end{bmatrix} \begin{bmatrix}
\mathbf{b_1} & \mathbf{b_2}  & \cdots & \mathbf{b_k} 
\end{bmatrix} = \begin{bmatrix}
\mathbf{a_1^Tb_1} & \mathbf{a_1^Tb_2} & \cdots & \mathbf{a_1^Tb_k} \\
\mathbf{a_2^Tb_1} & \mathbf{a_2^Tb_2} & \cdots & \mathbf{a_2^Tb_k} \\
\cdots & & & \\
\mathbf{a_m^Tb_1} & \mathbf{a_m^Tb_2} & \cdots & \mathbf{a_m^Tb_k} 
\end{bmatrix}$$

- Matrix can be used to represent a **linear system of equations**

$$\mathbf{y = Ax}$$

$$\begin{bmatrix}
y_1 \\
y_2 \\
\vdots \\
y_m
\end{bmatrix} = \begin{bmatrix}
a_{11} & a_{12} & \cdots & a_{1n} \\
a_{21} & a_{22} & \cdots & a_{2n} \\
\vdots & \vdots & \ddots & \vdots \\
a_{m1} & a_{m2} & \cdots & a_{mn}
\end{bmatrix} \begin{bmatrix}
x_1 \\
x_2 \\
\vdots \\
x_n
\end{bmatrix}$$

- **Identity matrix**

$$\mathbf{I_n} = \begin{bmatrix}
1 \\
& 1 \\
& & \ddots \\
& & & 1
\end{bmatrix}$$

- **Inverse matrix**

$$\mathbf{A} \in \mathbb{R}^{n \times n}$$

$$\mathbf{A^{-1}A = AA^{-1} = I_n}$$

- **Solving** a linear system of equations with the inverse (assuming $\mathbf{A}$ is **invertible**)

$$A \in \mathbb{R}^{n \times n}$$
$$\mathbf{y = Ax}$$

$$\mathbf{A^{-1}y = A^{-1}Ax}$$

$$\mathbf{A^{-1}y = x} $$