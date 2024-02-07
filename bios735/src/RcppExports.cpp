// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// armadillo_solve
arma::mat armadillo_solve(arma::mat A, arma::vec b);
RcppExport SEXP _bios735_armadillo_solve(SEXP ASEXP, SEXP bSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type A(ASEXP);
    Rcpp::traits::input_parameter< arma::vec >::type b(bSEXP);
    rcpp_result_gen = Rcpp::wrap(armadillo_solve(A, b));
    return rcpp_result_gen;
END_RCPP
}
// col_ridge_2
arma::mat col_ridge_2(arma::mat Y, arma::mat X, arma::vec lambda);
RcppExport SEXP _bios735_col_ridge_2(SEXP YSEXP, SEXP XSEXP, SEXP lambdaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type Y(YSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type lambda(lambdaSEXP);
    rcpp_result_gen = Rcpp::wrap(col_ridge_2(Y, X, lambda));
    return rcpp_result_gen;
END_RCPP
}
// one_or_exp
NumericVector one_or_exp(NumericVector x);
RcppExport SEXP _bios735_one_or_exp(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(one_or_exp(x));
    return rcpp_result_gen;
END_RCPP
}
// randomWalk_2
List randomWalk_2(int niter, double lambda);
RcppExport SEXP _bios735_randomWalk_2(SEXP niterSEXP, SEXP lambdaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type niter(niterSEXP);
    Rcpp::traits::input_parameter< double >::type lambda(lambdaSEXP);
    rcpp_result_gen = Rcpp::wrap(randomWalk_2(niter, lambda));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_bios735_armadillo_solve", (DL_FUNC) &_bios735_armadillo_solve, 2},
    {"_bios735_col_ridge_2", (DL_FUNC) &_bios735_col_ridge_2, 3},
    {"_bios735_one_or_exp", (DL_FUNC) &_bios735_one_or_exp, 1},
    {"_bios735_randomWalk_2", (DL_FUNC) &_bios735_randomWalk_2, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_bios735(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
