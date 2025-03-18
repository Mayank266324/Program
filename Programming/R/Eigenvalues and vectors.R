A <- matrix(c(2, -1, 0,
              -1, 2, -1,
              0, -1, 2), nrow=3, byrow=TRUE)

eigen_result <- eigen(A)

cat("Eigenvalues:\n")
print(eigen_result$values)

cat("Eigenvectors:\n")
print(eigen_result$vectors)

