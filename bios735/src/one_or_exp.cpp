#include <RcppArmadillo.h>
using namespace Rcpp;

// [[Rcpp::export]]
NumericVector one_or_exp(NumericVector x){
  int n = x.size();
  NumericVector y(x);

  NumericVector z(x);
  z = exp(x);

  for(int i = 0; i < n; ++i){
    y[i] = (x[i] < 0) ? 1 : z[i % z.size()];
  }

  return y;
}
