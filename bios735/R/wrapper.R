#' @useDynLib foo
#' @export
rcpp.hello.world <- function() {
  rcpp_hello_world()
}

one.or.exp <- function(x) {
  one_or_exp(x)
}
