rows <- 3
cols <- 3
mat <- matrix(0, nrow = rows, ncol = cols)
for (i in 1:rows) {
  for (j in 1:cols) {
    mat[i, j] <- i * 10 + j
  }
}
t_mat <- matrix(0, nrow = cols, ncol = rows)
for (i in 1:rows) {
  for (j in 1:cols) {
    t_mat[j, i] <- mat[i, j]
  }
}
product <- mat %*% t_mat
cat("Generated 2D Matrix:\n")
print(mat)

cat("Transposed Matrix:\n")
print(t_mat)

cat("Matrix Multiplication Result:\n")
print(product)
