#' Calculate t-statistic
#'
#' Computes the two-sample t-tests (equal variance) between two groups.
#'
#' @param x The data matrix containing values from the two groups
#' @param f A vector with "1" and "2" that tells you which columns in 'x'
#' corresponds to which group.
#'
#' @return t-statistic
#'
#' @examples
#' m <- 400
#' n <- 50
#' little.n <- n/2
#' set.seed(1)
#' x <- matrix(rnorm(m*n),nrow=m,ncol=n)
#' f <- gl(2,little.n)
#' getT(x, f)
#'
#'
#'
#' @export
getT <- function(x, f){

  #separate into the two groups
  group_1 <- x[,f == "1"]
  group_2 <- x[,f == "2"]

  #get the size for the two groups
  n_1 <- dim(group_1)[2]
  n_2 <- dim(group_2)[2]

  #mean of the the two groups
  mean_1 <- rowSums(group_1)/n_1
  mean_2 <- rowSums(group_2)/n_2

  #sample standard deviation
  std_1 <- sqrt(rowSums((group_1 - mean_1) ^ 2)/(n_1 - 1))
  std_2 <- sqrt(rowSums((group_2 - mean_2) ^ 2)/(n_2 - 1))

  #pooled standard error
  std_error_sqrd <- ((n_1-1)*std_1^2 + (n_2-1)*std_2^2)/(n_1+n_2-2)

  #numerator: t-statistic
  num <- mean_1-mean_2

  #denominator: t-statistic
  denom <- sqrt(std_error_sqrd*((1/n_1)+(1/n_2)))

  #calculate the t-statistic
  t_stat <- num/denom

  #return the t-statistic
  t_stat
}
