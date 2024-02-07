#include <RcppArmadillo.h>
using namespace Rcpp;

// [[Rcpp::export]]
arma::mat armadillo_solve(arma::mat A, arma::vec b) {

  //Invert the matrix A (pseudo-inverse)
  arma::mat X = arma::pinv(A);

  //Multiply the inverse to b
  arma::mat Y = X * b;

  return Y;

}
