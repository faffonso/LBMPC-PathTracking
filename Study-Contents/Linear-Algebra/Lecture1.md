# Introduction

First, we will learn some basic concepts to apply latter using Python libraries.

- **Scalar** is a single number.

$$\alpha, \text{ } \alpha \in \mathbb{R}$$

- **Vector** is an ordered sequence of numbers, that represents a line or a direction.

$$\mathbf{x} = \begin{bmatrix}
x_1 \\ 
x_2 \\ 
\vdots \\
x_n
\end{bmatrix},
\text{ } \mathbf{x} \in \mathbb{R}^n$$
    
- **Transpose** Can change a column vector as row vectors or inverse

$$\begin{bmatrix}
x_1 \\ 
x_2 \\ 
\vdots \\
x_n
\end{bmatrix}^T
=
\begin{bmatrix}
x_1 & x_2 & \cdots & x_n
\end{bmatrix}$$

Now, we can show some concepts about Linear Algebra that uses this basics definitions.

1. Scalar-Vector Multiplication

$$\alpha v = \alpha \begin{bmatrix}
v_1 \\ 
v_2 \\ 
\vdots \\
v_n
\end{bmatrix} = \begin{bmatrix}
\alpha v_1 \\ 
\alpha v_2 \\ 
\vdots \\
\alpha v_n
\end{bmatrix}$$

2. Vector Addition

$$\begin{bmatrix}
x_1 \\ 
x_2 \\ 
\vdots \\
x_n
\end{bmatrix}
+
\begin{bmatrix}
y_1 \\ 
y_2 \\ 
\vdots \\
y_n
\end{bmatrix}
=
\begin{bmatrix}
x_1 + y_1\\ 
x_2 + y_2\\ 
\vdots \\
x_n + y_n
\end{bmatrix}$$

3. Element-wise Multiplication

$$x \circ y
=
\begin{bmatrix}
x_1 \\ 
x_2 \\ 
\vdots \\
x_n
\end{bmatrix}
\circ
\begin{bmatrix}
y_1 \\ 
y_2 \\ 
\vdots \\
y_n
\end{bmatrix}
=
\begin{bmatrix}
x_1y_1 \\ 
x_2y_2 \\ 
\vdots \\
x_ny_n
\end{bmatrix}$$

4. Dot product or inner product

$$x \cdot y
=
\begin{bmatrix}
x_1 \\ 
x_2 \\ 
\vdots \\
x_n
\end{bmatrix}
\cdot
\begin{bmatrix}
y_1 \\ 
y_2 \\ 
\vdots \\
y_n
\end{bmatrix}
=
x_1y_1 + x_2+y_2 + \cdots + x_ny_n$$

5. Vector norm
    
    The norm of a vector is its length

$$
\| x \| = \sqrt{ x_1^2 + x_2^2 + \cdots + x_n^2 }
$$

6. Angle
    
    Formula for the angle between two vectors (between 0 and 180 degrees)

$$
\theta = \cos^{-1} \mathbf{ \frac{x^T y}{\| x \| \| y \|} }
$$

$$
\mathbf{ x^T y = \| x \| \| y \| } \cos{\theta}
$$

To finish the the concepts of this lecture we will show some knowledge about the relationship of the vectors.

1. Subspaces

    A subspace is a set $S \subset \mathbb{R}^n$ that satisfies these two constraints:
    - $x + y \in S, \text{ } \forall x, y \in S$
    - $\alpha x \in S,  \text{ } \forall \alpha \in \mathbb{r}$ and $x \in S$ 

2. Span

    The span of a set of vectors is the set of all linear combinations of those vectors

    $$ \text{span}(v_1, v_2, \cdots, v_k) = {\alpha_1 v_1 + \cdots + \alpha_k v_k | \alpha_i \in \mathbb{R}}$$

3. Linear Independence 

    - A set of vectors $(v_1, v_2, \cdots v_k)$ is linearly independent (or just independent) if none of the vectors in the set can be expressed as a linear combination of the other vectors. 
    - Equivalent condition:

    $$\alpha_1 v_1 + \alpha_2 v_2 + \cdots + \alpha_k v_k = 0 \Rightarrow \alpha_1 = \alpha_2 = \cdots = 0$$

4. Basis and Dimension

    - A set of vectors ${v_1, v_2, \cdots v_k}$ is a basis for a subspace $S$ if these two constraints are satisfied:
        - $S = \text{span} (v_1, v_2, \cdots v_k)$
        - $(v_1, v_2, \cdots v_k)$ is independent

    - The number of vectors in any basis of a given subspace $S$ is always the same. This number is called the dimension of $S$.