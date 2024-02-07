#' @useDynLib foo
#' @export
one.or.exp <- function(x) {
  one_or_exp(x)
}

randomWalk2 <- function(niter,lambda){
  randomWalk_2(niter,lambda)
}

armadilloSolve <- function(niter,lambda){
  armadillo_solve(niter,lambda)
}

colRidge2 <- function(Y, X, lambda){
  col_ridge_2(Y, X, lambda)
}
