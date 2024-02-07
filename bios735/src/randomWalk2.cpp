#include <RcppArmadillo.h>
using namespace Rcpp;

// [[Rcpp::export]]
List randomWalk_2(int niter, double lambda){

  NumericVector x(niter); //Initialize x with the same size niter
  NumericVector y(niter); //Initialize y with the same size niter

  for(int i = 1; i < niter; ++i) {
    x[i] = x[i-1] + lambda * ((2.0 * Rf_rbinom(1, 0.5)) - 1.0);
  }

  for(int i = 1; i < niter; ++i) {
    y[i] = y[i-1] + lambda * ((2.0 * Rf_rbinom(1, 0.5)) - 1.0);
  }

  List z = List::create(Named("x") = x, Named("y") = y);
  return z ;
}
