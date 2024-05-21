---
layout: default
---

<script type="text/javascript" async
  src="https://cdnjs.cloudflare.com/ajax/libs/mathjax/2.7.5/latest.js?config=TeX-MML-AM_CHTML">
</script>

# Types of Instances

## Type I
This class includes 9 "tai-n-a" unstructured, randomly generated instances from _QAPLIB_. Here, the matrices \(A\) and \(B\) contain uniformly distributed random integers with \(n\) taking values 20, 25, 30, 35, 40, 50, 60, 80, and 100.

## Type II
This class includes 10 "tai-n-b" instances from _QAPLIB_ which are real-life instances obtained from practical applications of the QAP with \(n\) taking values 20, 25, 30, 35, 40, 50, 60, 80, 100, 150 respectively.

## Type III
In this class, the matrix \(B\) is randomly generated and the matrix \(A\) is the incidence matrix of a Hamiltonian cycle in a complete bipartite graph \(K_{n,n}\) with \(n\) taking values 20, 25, 39, 35, 40, 50, 60, 80, 100, 150, 200, 300, 400, 500. More specifically,

\[ 
a_{ij} =
\begin{cases}
1 & \text{if } i = j \text{ or } i = j - 1, j \geq 2 \text{ or } i = 1, j = n \\
0 & \text{otherwise}
\end{cases}
\]

We call these the BTSP instances, since under this structure of the IQAP, we are solving a bipartite traveling salesman problem with cost matrix \(B\).

## Type IV
In this class, we set \(m = n\), \(B\) is randomly generated in \([-50, 150]\) which is uniformly distributed and asymmetric and \(A\) is selected as

\[ 
a_{ij} =
\begin{cases}
1 & \text{if } i \leq n/2 \text{ and } j \leq n/2 \\
0 & \text{otherwise}
\end{cases}
\]

And with \(n\) taking values 20, 25, 39, 35, 40, 50, 60, 80, 100, 150, 200, 300, 400, 500. This class identifies a minimum cost biclique of size \(\lfloor n/2 \rfloor\) in a complete bipartite graph \(K_{n,n}\).

## Type V
In this class, the matrices \(A\) and \(B\) are randomly generated with \(n\) fixed at 200 and selected \(m = 100, 120, 140, 160, 180, 200\). The entries in \(A\) and \(B\) are random integers in the range \([0, 100]\).

## Type VI
Here we consider large instances with \(m = n\) and \(n = 500, 750, 1000, 1250, 1500, 1750, 2000\). The entries in \(A\) are random integers in the range \([-100, 200]\) and entries of \(B\) are from \([1, 50]\).
