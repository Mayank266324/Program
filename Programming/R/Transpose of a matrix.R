# Define matrix dimensions
rows <- 3
cols <- 3
mat <- matrix(0, nrow = rows, ncol = cols)
for (i in 1:rows) {
  for (j in 1:cols) {
    mat[i, j] <- i * 10 + j
  }
}
t_mat <- matrix(0, nrow = rows, ncol = cols)
for (j in 1:cols) {
  for (i in 1:rows) {
    t_mat[i, j] <- i * 10 + j
  }
}
cat("Generated 2D Matrix:\n")
print(mat)
cat("Transposed matrix is: ")
print(t_mat)
