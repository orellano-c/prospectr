// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// bitAND
int bitAND(int aa, int bb);
RcppExport SEXP _prospectr_bitAND(SEXP aaSEXP, SEXP bbSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type aa(aaSEXP);
    Rcpp::traits::input_parameter< int >::type bb(bbSEXP);
    rcpp_result_gen = Rcpp::wrap(bitAND(aa, bb));
    return rcpp_result_gen;
END_RCPP
}
// bitSR
int bitSR(int a, int b);
RcppExport SEXP _prospectr_bitSR(SEXP aSEXP, SEXP bSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type a(aSEXP);
    Rcpp::traits::input_parameter< int >::type b(bSEXP);
    rcpp_result_gen = Rcpp::wrap(bitSR(a, b));
    return rcpp_result_gen;
END_RCPP
}
// convCppM
NumericMatrix convCppM(NumericMatrix X, NumericVector f);
RcppExport SEXP _prospectr_convCppM(SEXP XSEXP, SEXP fSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type X(XSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type f(fSEXP);
    rcpp_result_gen = Rcpp::wrap(convCppM(X, f));
    return rcpp_result_gen;
END_RCPP
}
// convCppV
NumericVector convCppV(NumericVector X, NumericVector f);
RcppExport SEXP _prospectr_convCppV(SEXP XSEXP, SEXP fSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type X(XSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type f(fSEXP);
    rcpp_result_gen = Rcpp::wrap(convCppV(X, f));
    return rcpp_result_gen;
END_RCPP
}
// fastDist
arma::mat fastDist(NumericMatrix X, NumericMatrix Y, String method);
RcppExport SEXP _prospectr_fastDist(SEXP XSEXP, SEXP YSEXP, SEXP methodSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type X(XSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type Y(YSEXP);
    Rcpp::traits::input_parameter< String >::type method(methodSEXP);
    rcpp_result_gen = Rcpp::wrap(fastDist(X, Y, method));
    return rcpp_result_gen;
END_RCPP
}
// fastDistV
NumericVector fastDistV(NumericMatrix X, NumericVector Y, String method);
RcppExport SEXP _prospectr_fastDistV(SEXP XSEXP, SEXP YSEXP, SEXP methodSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type X(XSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type Y(YSEXP);
    Rcpp::traits::input_parameter< String >::type method(methodSEXP);
    rcpp_result_gen = Rcpp::wrap(fastDistV(X, Y, method));
    return rcpp_result_gen;
END_RCPP
}
// get_msc_coeff
NumericMatrix get_msc_coeff(arma::mat X, arma::vec reference_spc);
RcppExport SEXP _prospectr_get_msc_coeff(SEXP XSEXP, SEXP reference_spcSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type reference_spc(reference_spcSEXP);
    rcpp_result_gen = Rcpp::wrap(get_msc_coeff(X, reference_spc));
    return rcpp_result_gen;
END_RCPP
}
// resample_fwhm
NumericMatrix resample_fwhm(NumericMatrix X, NumericVector wav, NumericVector new_wav, NumericVector fwhm);
RcppExport SEXP _prospectr_resample_fwhm(SEXP XSEXP, SEXP wavSEXP, SEXP new_wavSEXP, SEXP fwhmSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type X(XSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type wav(wavSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type new_wav(new_wavSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type fwhm(fwhmSEXP);
    rcpp_result_gen = Rcpp::wrap(resample_fwhm(X, wav, new_wav, fwhm));
    return rcpp_result_gen;
END_RCPP
}
// resample_fwhm_vec
NumericVector resample_fwhm_vec(NumericVector X, NumericVector wav, NumericVector new_wav, NumericVector fwhm);
RcppExport SEXP _prospectr_resample_fwhm_vec(SEXP XSEXP, SEXP wavSEXP, SEXP new_wavSEXP, SEXP fwhmSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type X(XSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type wav(wavSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type new_wav(new_wavSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type fwhm(fwhmSEXP);
    rcpp_result_gen = Rcpp::wrap(resample_fwhm_vec(X, wav, new_wav, fwhm));
    return rcpp_result_gen;
END_RCPP
}
// residLm
NumericMatrix residLm(NumericMatrix Yr, NumericMatrix Xr);
RcppExport SEXP _prospectr_residLm(SEXP YrSEXP, SEXP XrSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type Yr(YrSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type Xr(XrSEXP);
    rcpp_result_gen = Rcpp::wrap(residLm(Yr, Xr));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_prospectr_bitAND", (DL_FUNC) &_prospectr_bitAND, 2},
    {"_prospectr_bitSR", (DL_FUNC) &_prospectr_bitSR, 2},
    {"_prospectr_convCppM", (DL_FUNC) &_prospectr_convCppM, 2},
    {"_prospectr_convCppV", (DL_FUNC) &_prospectr_convCppV, 2},
    {"_prospectr_fastDist", (DL_FUNC) &_prospectr_fastDist, 3},
    {"_prospectr_fastDistV", (DL_FUNC) &_prospectr_fastDistV, 3},
    {"_prospectr_get_msc_coeff", (DL_FUNC) &_prospectr_get_msc_coeff, 2},
    {"_prospectr_resample_fwhm", (DL_FUNC) &_prospectr_resample_fwhm, 4},
    {"_prospectr_resample_fwhm_vec", (DL_FUNC) &_prospectr_resample_fwhm_vec, 4},
    {"_prospectr_residLm", (DL_FUNC) &_prospectr_residLm, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_prospectr(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
