#include <RcppArmadillo.h>
using namespace Rcpp;

// [[Rcpp::export]]
NumericVector one_or_exp(NumericVector x){
  int n = x.size();
  NumericVector y(x); //Initialize y with the same size as x

  NumericVector z = exp(x); //Get the exponent of all elements of x

  for(int i = 0; i < n; ++i){
    y[i] = (x[i] < 0) ? 1 : z[i]; //If x is negative, 1, else exp(x)
  }

  return y;
}
