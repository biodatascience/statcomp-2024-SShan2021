#include <RcppArmadillo.h>
using namespace Rcpp;

// [[Rcpp::export]]
arma::mat col_ridge_2(arma::mat Y, arma::mat X, arma::vec lambda){

  //Create the Identity matrix
  int p = X.n_cols;
  arma::mat I = arma::eye<arma::mat>(p, p);

  //Get the transform of X
  arma::mat X_t = X.t();

  //Get the dimensions of Y
  int n = Y.n_cols;

  //Create an output matrix
  arma::mat Z(p,n);

  //Apply the ridge formula
  for(int i = 0; i < n; ++i) {
    Z.col(i) = arma::inv((X_t * X) + (lambda[i] * I)) * X_t * Y.col(i);
  }

  return Z;

}
