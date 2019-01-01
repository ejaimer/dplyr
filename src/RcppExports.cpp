// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "../inst/include/dplyr.h"
#include "../inst/include/dplyr_types.h"
#include <Rcpp.h>
#include <string>
#include <set>

using namespace Rcpp;

// loc
CharacterVector loc(RObject data);
RcppExport SEXP _dplyr_loc(SEXP dataSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< RObject >::type data(dataSEXP);
    rcpp_result_gen = Rcpp::wrap(loc(data));
    return rcpp_result_gen;
END_RCPP
}
// dfloc
CharacterVector dfloc(List df);
RcppExport SEXP _dplyr_dfloc(SEXP dfSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type df(dfSEXP);
    rcpp_result_gen = Rcpp::wrap(dfloc(df));
    return rcpp_result_gen;
END_RCPP
}
// plfloc
CharacterVector plfloc(Pairlist data);
RcppExport SEXP _dplyr_plfloc(SEXP dataSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Pairlist >::type data(dataSEXP);
    rcpp_result_gen = Rcpp::wrap(plfloc(data));
    return rcpp_result_gen;
END_RCPP
}
// strings_addresses
CharacterVector strings_addresses(CharacterVector s);
RcppExport SEXP _dplyr_strings_addresses(SEXP sSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type s(sSEXP);
    rcpp_result_gen = Rcpp::wrap(strings_addresses(s));
    return rcpp_result_gen;
END_RCPP
}
// init_logging
void init_logging(const std::string& log_level);
RcppExport SEXP _dplyr_init_logging(SEXP log_levelSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::string& >::type log_level(log_levelSEXP);
    init_logging(log_level);
    return R_NilValue;
END_RCPP
}
// is_maybe_shared
bool is_maybe_shared(SEXP env, SEXP name);
RcppExport SEXP _dplyr_is_maybe_shared(SEXP envSEXP, SEXP nameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type env(envSEXP);
    Rcpp::traits::input_parameter< SEXP >::type name(nameSEXP);
    rcpp_result_gen = Rcpp::wrap(is_maybe_shared(env, name));
    return rcpp_result_gen;
END_RCPP
}
// maybe_shared_columns
LogicalVector maybe_shared_columns(SEXP df);
RcppExport SEXP _dplyr_maybe_shared_columns(SEXP dfSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type df(dfSEXP);
    rcpp_result_gen = Rcpp::wrap(maybe_shared_columns(df));
    return rcpp_result_gen;
END_RCPP
}
// arrange_impl
SEXP arrange_impl(DataFrame df, QuosureList quosures, SEXP frame);
RcppExport SEXP _dplyr_arrange_impl(SEXP dfSEXP, SEXP quosuresSEXP, SEXP frameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< DataFrame >::type df(dfSEXP);
    Rcpp::traits::input_parameter< QuosureList >::type quosures(quosuresSEXP);
    Rcpp::traits::input_parameter< SEXP >::type frame(frameSEXP);
    rcpp_result_gen = Rcpp::wrap(arrange_impl(df, quosures, frame));
    return rcpp_result_gen;
END_RCPP
}
// between
LogicalVector between(NumericVector x, double left, double right);
RcppExport SEXP _dplyr_between(SEXP xSEXP, SEXP leftSEXP, SEXP rightSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type left(leftSEXP);
    Rcpp::traits::input_parameter< double >::type right(rightSEXP);
    rcpp_result_gen = Rcpp::wrap(between(x, left, right));
    return rcpp_result_gen;
END_RCPP
}
// flatten_bindable
SEXP flatten_bindable(SEXP x);
RcppExport SEXP _dplyr_flatten_bindable(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(flatten_bindable(x));
    return rcpp_result_gen;
END_RCPP
}
// bind_rows_
List bind_rows_(List dots, SEXP id);
RcppExport SEXP _dplyr_bind_rows_(SEXP dotsSEXP, SEXP idSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type dots(dotsSEXP);
    Rcpp::traits::input_parameter< SEXP >::type id(idSEXP);
    rcpp_result_gen = Rcpp::wrap(bind_rows_(dots, id));
    return rcpp_result_gen;
END_RCPP
}
// cbind_all
List cbind_all(List dots);
RcppExport SEXP _dplyr_cbind_all(SEXP dotsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type dots(dotsSEXP);
    rcpp_result_gen = Rcpp::wrap(cbind_all(dots));
    return rcpp_result_gen;
END_RCPP
}
// combine_all
SEXP combine_all(List data);
RcppExport SEXP _dplyr_combine_all(SEXP dataSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type data(dataSEXP);
    rcpp_result_gen = Rcpp::wrap(combine_all(data));
    return rcpp_result_gen;
END_RCPP
}
// distinct_impl
SEXP distinct_impl(DataFrame df, const IntegerVector& vars, const IntegerVector& keep, SEXP frame);
RcppExport SEXP _dplyr_distinct_impl(SEXP dfSEXP, SEXP varsSEXP, SEXP keepSEXP, SEXP frameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< DataFrame >::type df(dfSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type vars(varsSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type keep(keepSEXP);
    Rcpp::traits::input_parameter< SEXP >::type frame(frameSEXP);
    rcpp_result_gen = Rcpp::wrap(distinct_impl(df, vars, keep, frame));
    return rcpp_result_gen;
END_RCPP
}
// n_distinct_multi
int n_distinct_multi(List variables, bool na_rm);
RcppExport SEXP _dplyr_n_distinct_multi(SEXP variablesSEXP, SEXP na_rmSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type variables(variablesSEXP);
    Rcpp::traits::input_parameter< bool >::type na_rm(na_rmSEXP);
    rcpp_result_gen = Rcpp::wrap(n_distinct_multi(variables, na_rm));
    return rcpp_result_gen;
END_RCPP
}
// filter_impl
SEXP filter_impl(DataFrame df, Quosure quo);
RcppExport SEXP _dplyr_filter_impl(SEXP dfSEXP, SEXP quoSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< DataFrame >::type df(dfSEXP);
    Rcpp::traits::input_parameter< Quosure >::type quo(quoSEXP);
    rcpp_result_gen = Rcpp::wrap(filter_impl(df, quo));
    return rcpp_result_gen;
END_RCPP
}
// slice_impl
SEXP slice_impl(DataFrame df, Quosure quosure);
RcppExport SEXP _dplyr_slice_impl(SEXP dfSEXP, SEXP quosureSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< DataFrame >::type df(dfSEXP);
    Rcpp::traits::input_parameter< Quosure >::type quosure(quosureSEXP);
    rcpp_result_gen = Rcpp::wrap(slice_impl(df, quosure));
    return rcpp_result_gen;
END_RCPP
}
// grouped_indices_grouped_df_impl
IntegerVector grouped_indices_grouped_df_impl(GroupedDataFrame gdf);
RcppExport SEXP _dplyr_grouped_indices_grouped_df_impl(SEXP gdfSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< GroupedDataFrame >::type gdf(gdfSEXP);
    rcpp_result_gen = Rcpp::wrap(grouped_indices_grouped_df_impl(gdf));
    return rcpp_result_gen;
END_RCPP
}
// group_size_grouped_cpp
IntegerVector group_size_grouped_cpp(GroupedDataFrame gdf);
RcppExport SEXP _dplyr_group_size_grouped_cpp(SEXP gdfSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< GroupedDataFrame >::type gdf(gdfSEXP);
    rcpp_result_gen = Rcpp::wrap(group_size_grouped_cpp(gdf));
    return rcpp_result_gen;
END_RCPP
}
// regroup
SEXP regroup(DataFrame grouping_data, SEXP frame);
RcppExport SEXP _dplyr_regroup(SEXP grouping_dataSEXP, SEXP frameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< DataFrame >::type grouping_data(grouping_dataSEXP);
    Rcpp::traits::input_parameter< SEXP >::type frame(frameSEXP);
    rcpp_result_gen = Rcpp::wrap(regroup(grouping_data, frame));
    return rcpp_result_gen;
END_RCPP
}
// grouped_df_impl
DataFrame grouped_df_impl(DataFrame data, SymbolVector symbols);
RcppExport SEXP _dplyr_grouped_df_impl(SEXP dataSEXP, SEXP symbolsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< DataFrame >::type data(dataSEXP);
    Rcpp::traits::input_parameter< SymbolVector >::type symbols(symbolsSEXP);
    rcpp_result_gen = Rcpp::wrap(grouped_df_impl(data, symbols));
    return rcpp_result_gen;
END_RCPP
}
// group_data_grouped_df
DataFrame group_data_grouped_df(DataFrame data);
RcppExport SEXP _dplyr_group_data_grouped_df(SEXP dataSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< DataFrame >::type data(dataSEXP);
    rcpp_result_gen = Rcpp::wrap(group_data_grouped_df(data));
    return rcpp_result_gen;
END_RCPP
}
// ungroup_grouped_df
DataFrame ungroup_grouped_df(DataFrame df);
RcppExport SEXP _dplyr_ungroup_grouped_df(SEXP dfSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< DataFrame >::type df(dfSEXP);
    rcpp_result_gen = Rcpp::wrap(ungroup_grouped_df(df));
    return rcpp_result_gen;
END_RCPP
}
// group_split_impl
List group_split_impl(GroupedDataFrame gdf, bool keep, SEXP frame, bool ptype);
RcppExport SEXP _dplyr_group_split_impl(SEXP gdfSEXP, SEXP keepSEXP, SEXP frameSEXP, SEXP ptypeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< GroupedDataFrame >::type gdf(gdfSEXP);
    Rcpp::traits::input_parameter< bool >::type keep(keepSEXP);
    Rcpp::traits::input_parameter< SEXP >::type frame(frameSEXP);
    Rcpp::traits::input_parameter< bool >::type ptype(ptypeSEXP);
    rcpp_result_gen = Rcpp::wrap(group_split_impl(gdf, keep, frame, ptype));
    return rcpp_result_gen;
END_RCPP
}
// hybrids
List hybrids();
RcppExport SEXP _dplyr_hybrids() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(hybrids());
    return rcpp_result_gen;
END_RCPP
}
// get_date_classes
SEXP get_date_classes();
static SEXP _dplyr_get_date_classes_try() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    rcpp_result_gen = Rcpp::wrap(get_date_classes());
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _dplyr_get_date_classes() {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_dplyr_get_date_classes_try());
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// get_time_classes
SEXP get_time_classes();
static SEXP _dplyr_get_time_classes_try() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    rcpp_result_gen = Rcpp::wrap(get_time_classes());
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _dplyr_get_time_classes() {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_dplyr_get_time_classes_try());
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// semi_join_impl
DataFrame semi_join_impl(DataFrame x, DataFrame y, CharacterVector by_x, CharacterVector by_y, bool na_match, SEXP frame);
RcppExport SEXP _dplyr_semi_join_impl(SEXP xSEXP, SEXP ySEXP, SEXP by_xSEXP, SEXP by_ySEXP, SEXP na_matchSEXP, SEXP frameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< DataFrame >::type x(xSEXP);
    Rcpp::traits::input_parameter< DataFrame >::type y(ySEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type by_x(by_xSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type by_y(by_ySEXP);
    Rcpp::traits::input_parameter< bool >::type na_match(na_matchSEXP);
    Rcpp::traits::input_parameter< SEXP >::type frame(frameSEXP);
    rcpp_result_gen = Rcpp::wrap(semi_join_impl(x, y, by_x, by_y, na_match, frame));
    return rcpp_result_gen;
END_RCPP
}
// anti_join_impl
DataFrame anti_join_impl(DataFrame x, DataFrame y, CharacterVector by_x, CharacterVector by_y, bool na_match, SEXP frame);
RcppExport SEXP _dplyr_anti_join_impl(SEXP xSEXP, SEXP ySEXP, SEXP by_xSEXP, SEXP by_ySEXP, SEXP na_matchSEXP, SEXP frameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< DataFrame >::type x(xSEXP);
    Rcpp::traits::input_parameter< DataFrame >::type y(ySEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type by_x(by_xSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type by_y(by_ySEXP);
    Rcpp::traits::input_parameter< bool >::type na_match(na_matchSEXP);
    Rcpp::traits::input_parameter< SEXP >::type frame(frameSEXP);
    rcpp_result_gen = Rcpp::wrap(anti_join_impl(x, y, by_x, by_y, na_match, frame));
    return rcpp_result_gen;
END_RCPP
}
// inner_join_impl
DataFrame inner_join_impl(DataFrame x, DataFrame y, IntegerVector by_x, IntegerVector by_y, IntegerVector aux_x, IntegerVector aux_y, bool na_match, SEXP frame);
RcppExport SEXP _dplyr_inner_join_impl(SEXP xSEXP, SEXP ySEXP, SEXP by_xSEXP, SEXP by_ySEXP, SEXP aux_xSEXP, SEXP aux_ySEXP, SEXP na_matchSEXP, SEXP frameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< DataFrame >::type x(xSEXP);
    Rcpp::traits::input_parameter< DataFrame >::type y(ySEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type by_x(by_xSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type by_y(by_ySEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type aux_x(aux_xSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type aux_y(aux_ySEXP);
    Rcpp::traits::input_parameter< bool >::type na_match(na_matchSEXP);
    Rcpp::traits::input_parameter< SEXP >::type frame(frameSEXP);
    rcpp_result_gen = Rcpp::wrap(inner_join_impl(x, y, by_x, by_y, aux_x, aux_y, na_match, frame));
    return rcpp_result_gen;
END_RCPP
}
// nest_join_impl
List nest_join_impl(DataFrame x, DataFrame y, IntegerVector by_x, IntegerVector by_y, IntegerVector aux_y, String yname, SEXP frame);
RcppExport SEXP _dplyr_nest_join_impl(SEXP xSEXP, SEXP ySEXP, SEXP by_xSEXP, SEXP by_ySEXP, SEXP aux_ySEXP, SEXP ynameSEXP, SEXP frameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< DataFrame >::type x(xSEXP);
    Rcpp::traits::input_parameter< DataFrame >::type y(ySEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type by_x(by_xSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type by_y(by_ySEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type aux_y(aux_ySEXP);
    Rcpp::traits::input_parameter< String >::type yname(ynameSEXP);
    Rcpp::traits::input_parameter< SEXP >::type frame(frameSEXP);
    rcpp_result_gen = Rcpp::wrap(nest_join_impl(x, y, by_x, by_y, aux_y, yname, frame));
    return rcpp_result_gen;
END_RCPP
}
// left_join_impl
DataFrame left_join_impl(DataFrame x, DataFrame y, IntegerVector by_x, IntegerVector by_y, IntegerVector aux_x, IntegerVector aux_y, bool na_match, SEXP frame);
RcppExport SEXP _dplyr_left_join_impl(SEXP xSEXP, SEXP ySEXP, SEXP by_xSEXP, SEXP by_ySEXP, SEXP aux_xSEXP, SEXP aux_ySEXP, SEXP na_matchSEXP, SEXP frameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< DataFrame >::type x(xSEXP);
    Rcpp::traits::input_parameter< DataFrame >::type y(ySEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type by_x(by_xSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type by_y(by_ySEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type aux_x(aux_xSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type aux_y(aux_ySEXP);
    Rcpp::traits::input_parameter< bool >::type na_match(na_matchSEXP);
    Rcpp::traits::input_parameter< SEXP >::type frame(frameSEXP);
    rcpp_result_gen = Rcpp::wrap(left_join_impl(x, y, by_x, by_y, aux_x, aux_y, na_match, frame));
    return rcpp_result_gen;
END_RCPP
}
// right_join_impl
DataFrame right_join_impl(DataFrame x, DataFrame y, IntegerVector by_x, IntegerVector by_y, IntegerVector aux_x, IntegerVector aux_y, bool na_match, SEXP frame);
RcppExport SEXP _dplyr_right_join_impl(SEXP xSEXP, SEXP ySEXP, SEXP by_xSEXP, SEXP by_ySEXP, SEXP aux_xSEXP, SEXP aux_ySEXP, SEXP na_matchSEXP, SEXP frameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< DataFrame >::type x(xSEXP);
    Rcpp::traits::input_parameter< DataFrame >::type y(ySEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type by_x(by_xSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type by_y(by_ySEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type aux_x(aux_xSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type aux_y(aux_ySEXP);
    Rcpp::traits::input_parameter< bool >::type na_match(na_matchSEXP);
    Rcpp::traits::input_parameter< SEXP >::type frame(frameSEXP);
    rcpp_result_gen = Rcpp::wrap(right_join_impl(x, y, by_x, by_y, aux_x, aux_y, na_match, frame));
    return rcpp_result_gen;
END_RCPP
}
// full_join_impl
DataFrame full_join_impl(DataFrame x, DataFrame y, IntegerVector by_x, IntegerVector by_y, IntegerVector aux_x, IntegerVector aux_y, bool na_match, SEXP frame);
RcppExport SEXP _dplyr_full_join_impl(SEXP xSEXP, SEXP ySEXP, SEXP by_xSEXP, SEXP by_ySEXP, SEXP aux_xSEXP, SEXP aux_ySEXP, SEXP na_matchSEXP, SEXP frameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< DataFrame >::type x(xSEXP);
    Rcpp::traits::input_parameter< DataFrame >::type y(ySEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type by_x(by_xSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type by_y(by_ySEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type aux_x(aux_xSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type aux_y(aux_ySEXP);
    Rcpp::traits::input_parameter< bool >::type na_match(na_matchSEXP);
    Rcpp::traits::input_parameter< SEXP >::type frame(frameSEXP);
    rcpp_result_gen = Rcpp::wrap(full_join_impl(x, y, by_x, by_y, aux_x, aux_y, na_match, frame));
    return rcpp_result_gen;
END_RCPP
}
// mutate_impl
SEXP mutate_impl(DataFrame df, QuosureList dots);
RcppExport SEXP _dplyr_mutate_impl(SEXP dfSEXP, SEXP dotsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< DataFrame >::type df(dfSEXP);
    Rcpp::traits::input_parameter< QuosureList >::type dots(dotsSEXP);
    rcpp_result_gen = Rcpp::wrap(mutate_impl(df, dots));
    return rcpp_result_gen;
END_RCPP
}
// select_impl
DataFrame select_impl(DataFrame df, CharacterVector vars);
RcppExport SEXP _dplyr_select_impl(SEXP dfSEXP, SEXP varsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< DataFrame >::type df(dfSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type vars(varsSEXP);
    rcpp_result_gen = Rcpp::wrap(select_impl(df, vars));
    return rcpp_result_gen;
END_RCPP
}
// compatible_data_frame_nonames
dplyr::BoolResult compatible_data_frame_nonames(DataFrame x, DataFrame y, bool convert);
RcppExport SEXP _dplyr_compatible_data_frame_nonames(SEXP xSEXP, SEXP ySEXP, SEXP convertSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< DataFrame >::type x(xSEXP);
    Rcpp::traits::input_parameter< DataFrame >::type y(ySEXP);
    Rcpp::traits::input_parameter< bool >::type convert(convertSEXP);
    rcpp_result_gen = Rcpp::wrap(compatible_data_frame_nonames(x, y, convert));
    return rcpp_result_gen;
END_RCPP
}
// compatible_data_frame
dplyr::BoolResult compatible_data_frame(DataFrame x, DataFrame y, bool ignore_col_order, bool convert);
RcppExport SEXP _dplyr_compatible_data_frame(SEXP xSEXP, SEXP ySEXP, SEXP ignore_col_orderSEXP, SEXP convertSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< DataFrame >::type x(xSEXP);
    Rcpp::traits::input_parameter< DataFrame >::type y(ySEXP);
    Rcpp::traits::input_parameter< bool >::type ignore_col_order(ignore_col_orderSEXP);
    Rcpp::traits::input_parameter< bool >::type convert(convertSEXP);
    rcpp_result_gen = Rcpp::wrap(compatible_data_frame(x, y, ignore_col_order, convert));
    return rcpp_result_gen;
END_RCPP
}
// equal_data_frame
dplyr::BoolResult equal_data_frame(DataFrame x, DataFrame y, bool ignore_col_order, bool ignore_row_order, bool convert);
RcppExport SEXP _dplyr_equal_data_frame(SEXP xSEXP, SEXP ySEXP, SEXP ignore_col_orderSEXP, SEXP ignore_row_orderSEXP, SEXP convertSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< DataFrame >::type x(xSEXP);
    Rcpp::traits::input_parameter< DataFrame >::type y(ySEXP);
    Rcpp::traits::input_parameter< bool >::type ignore_col_order(ignore_col_orderSEXP);
    Rcpp::traits::input_parameter< bool >::type ignore_row_order(ignore_row_orderSEXP);
    Rcpp::traits::input_parameter< bool >::type convert(convertSEXP);
    rcpp_result_gen = Rcpp::wrap(equal_data_frame(x, y, ignore_col_order, ignore_row_order, convert));
    return rcpp_result_gen;
END_RCPP
}
// union_data_frame
DataFrame union_data_frame(DataFrame x, DataFrame y);
RcppExport SEXP _dplyr_union_data_frame(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< DataFrame >::type x(xSEXP);
    Rcpp::traits::input_parameter< DataFrame >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(union_data_frame(x, y));
    return rcpp_result_gen;
END_RCPP
}
// intersect_data_frame
DataFrame intersect_data_frame(DataFrame x, DataFrame y);
RcppExport SEXP _dplyr_intersect_data_frame(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< DataFrame >::type x(xSEXP);
    Rcpp::traits::input_parameter< DataFrame >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(intersect_data_frame(x, y));
    return rcpp_result_gen;
END_RCPP
}
// setdiff_data_frame
DataFrame setdiff_data_frame(DataFrame x, DataFrame y);
RcppExport SEXP _dplyr_setdiff_data_frame(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< DataFrame >::type x(xSEXP);
    Rcpp::traits::input_parameter< DataFrame >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(setdiff_data_frame(x, y));
    return rcpp_result_gen;
END_RCPP
}
// summarise_impl
SEXP summarise_impl(DataFrame df, QuosureList dots);
RcppExport SEXP _dplyr_summarise_impl(SEXP dfSEXP, SEXP dotsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< DataFrame >::type df(dfSEXP);
    Rcpp::traits::input_parameter< QuosureList >::type dots(dotsSEXP);
    rcpp_result_gen = Rcpp::wrap(summarise_impl(df, dots));
    return rcpp_result_gen;
END_RCPP
}
// hybrid_impl
SEXP hybrid_impl(DataFrame df, Quosure quosure);
RcppExport SEXP _dplyr_hybrid_impl(SEXP dfSEXP, SEXP quosureSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< DataFrame >::type df(dfSEXP);
    Rcpp::traits::input_parameter< Quosure >::type quosure(quosureSEXP);
    rcpp_result_gen = Rcpp::wrap(hybrid_impl(df, quosure));
    return rcpp_result_gen;
END_RCPP
}
// test_comparisons
LogicalVector test_comparisons();
RcppExport SEXP _dplyr_test_comparisons() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(test_comparisons());
    return rcpp_result_gen;
END_RCPP
}
// test_matches
List test_matches();
RcppExport SEXP _dplyr_test_matches() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(test_matches());
    return rcpp_result_gen;
END_RCPP
}
// test_length_wrap
LogicalVector test_length_wrap();
RcppExport SEXP _dplyr_test_length_wrap() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(test_length_wrap());
    return rcpp_result_gen;
END_RCPP
}
// materialize_binding
SEXP materialize_binding(int idx, XPtr<DataMaskWeakProxyBase> mask_proxy_xp);
RcppExport SEXP _dplyr_materialize_binding(SEXP idxSEXP, SEXP mask_proxy_xpSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type idx(idxSEXP);
    Rcpp::traits::input_parameter< XPtr<DataMaskWeakProxyBase> >::type mask_proxy_xp(mask_proxy_xpSEXP);
    rcpp_result_gen = Rcpp::wrap(materialize_binding(idx, mask_proxy_xp));
    return rcpp_result_gen;
END_RCPP
}
// check_valid_names
void check_valid_names(const CharacterVector& names, bool warn_only);
RcppExport SEXP _dplyr_check_valid_names(SEXP namesSEXP, SEXP warn_onlySEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const CharacterVector& >::type names(namesSEXP);
    Rcpp::traits::input_parameter< bool >::type warn_only(warn_onlySEXP);
    check_valid_names(names, warn_only);
    return R_NilValue;
END_RCPP
}
// assert_all_allow_list
void assert_all_allow_list(const DataFrame& data);
RcppExport SEXP _dplyr_assert_all_allow_list(SEXP dataSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const DataFrame& >::type data(dataSEXP);
    assert_all_allow_list(data);
    return R_NilValue;
END_RCPP
}
// is_data_pronoun
bool is_data_pronoun(SEXP expr);
RcppExport SEXP _dplyr_is_data_pronoun(SEXP exprSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type expr(exprSEXP);
    rcpp_result_gen = Rcpp::wrap(is_data_pronoun(expr));
    return rcpp_result_gen;
END_RCPP
}
// is_variable_reference
bool is_variable_reference(SEXP expr);
RcppExport SEXP _dplyr_is_variable_reference(SEXP exprSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type expr(exprSEXP);
    rcpp_result_gen = Rcpp::wrap(is_variable_reference(expr));
    return rcpp_result_gen;
END_RCPP
}
// quo_is_variable_reference
bool quo_is_variable_reference(SEXP quo);
RcppExport SEXP _dplyr_quo_is_variable_reference(SEXP quoSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type quo(quoSEXP);
    rcpp_result_gen = Rcpp::wrap(quo_is_variable_reference(quo));
    return rcpp_result_gen;
END_RCPP
}
// quo_is_data_pronoun
bool quo_is_data_pronoun(SEXP quo);
RcppExport SEXP _dplyr_quo_is_data_pronoun(SEXP quoSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type quo(quoSEXP);
    rcpp_result_gen = Rcpp::wrap(quo_is_data_pronoun(quo));
    return rcpp_result_gen;
END_RCPP
}
// cumall
LogicalVector cumall(LogicalVector x);
RcppExport SEXP _dplyr_cumall(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< LogicalVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(cumall(x));
    return rcpp_result_gen;
END_RCPP
}
// cumany
LogicalVector cumany(LogicalVector x);
RcppExport SEXP _dplyr_cumany(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< LogicalVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(cumany(x));
    return rcpp_result_gen;
END_RCPP
}
// cummean
NumericVector cummean(NumericVector x);
RcppExport SEXP _dplyr_cummean(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(cummean(x));
    return rcpp_result_gen;
END_RCPP
}

// validate (ensure exported C++ functions exist before calling them)
static int _dplyr_RcppExport_validate(const char* sig) { 
    static std::set<std::string> signatures;
    if (signatures.empty()) {
        signatures.insert("SEXP(*get_date_classes)()");
        signatures.insert("SEXP(*get_time_classes)()");
    }
    return signatures.find(sig) != signatures.end();
}

// registerCCallable (register entry points for exported C++ functions)
RcppExport SEXP _dplyr_RcppExport_registerCCallable() { 
    R_RegisterCCallable("dplyr", "_dplyr_get_date_classes", (DL_FUNC)_dplyr_get_date_classes_try);
    R_RegisterCCallable("dplyr", "_dplyr_get_time_classes", (DL_FUNC)_dplyr_get_time_classes_try);
    R_RegisterCCallable("dplyr", "_dplyr_RcppExport_validate", (DL_FUNC)_dplyr_RcppExport_validate);
    return R_NilValue;
}

static const R_CallMethodDef CallEntries[] = {
    {"_dplyr_loc", (DL_FUNC) &_dplyr_loc, 1},
    {"_dplyr_dfloc", (DL_FUNC) &_dplyr_dfloc, 1},
    {"_dplyr_plfloc", (DL_FUNC) &_dplyr_plfloc, 1},
    {"_dplyr_strings_addresses", (DL_FUNC) &_dplyr_strings_addresses, 1},
    {"_dplyr_init_logging", (DL_FUNC) &_dplyr_init_logging, 1},
    {"_dplyr_is_maybe_shared", (DL_FUNC) &_dplyr_is_maybe_shared, 2},
    {"_dplyr_maybe_shared_columns", (DL_FUNC) &_dplyr_maybe_shared_columns, 1},
    {"_dplyr_arrange_impl", (DL_FUNC) &_dplyr_arrange_impl, 3},
    {"_dplyr_between", (DL_FUNC) &_dplyr_between, 3},
    {"_dplyr_flatten_bindable", (DL_FUNC) &_dplyr_flatten_bindable, 1},
    {"_dplyr_bind_rows_", (DL_FUNC) &_dplyr_bind_rows_, 2},
    {"_dplyr_cbind_all", (DL_FUNC) &_dplyr_cbind_all, 1},
    {"_dplyr_combine_all", (DL_FUNC) &_dplyr_combine_all, 1},
    {"_dplyr_distinct_impl", (DL_FUNC) &_dplyr_distinct_impl, 4},
    {"_dplyr_n_distinct_multi", (DL_FUNC) &_dplyr_n_distinct_multi, 2},
    {"_dplyr_filter_impl", (DL_FUNC) &_dplyr_filter_impl, 2},
    {"_dplyr_slice_impl", (DL_FUNC) &_dplyr_slice_impl, 2},
    {"_dplyr_grouped_indices_grouped_df_impl", (DL_FUNC) &_dplyr_grouped_indices_grouped_df_impl, 1},
    {"_dplyr_group_size_grouped_cpp", (DL_FUNC) &_dplyr_group_size_grouped_cpp, 1},
    {"_dplyr_regroup", (DL_FUNC) &_dplyr_regroup, 2},
    {"_dplyr_grouped_df_impl", (DL_FUNC) &_dplyr_grouped_df_impl, 2},
    {"_dplyr_group_data_grouped_df", (DL_FUNC) &_dplyr_group_data_grouped_df, 1},
    {"_dplyr_ungroup_grouped_df", (DL_FUNC) &_dplyr_ungroup_grouped_df, 1},
    {"_dplyr_group_split_impl", (DL_FUNC) &_dplyr_group_split_impl, 4},
    {"_dplyr_hybrids", (DL_FUNC) &_dplyr_hybrids, 0},
    {"_dplyr_get_date_classes", (DL_FUNC) &_dplyr_get_date_classes, 0},
    {"_dplyr_get_time_classes", (DL_FUNC) &_dplyr_get_time_classes, 0},
    {"_dplyr_semi_join_impl", (DL_FUNC) &_dplyr_semi_join_impl, 6},
    {"_dplyr_anti_join_impl", (DL_FUNC) &_dplyr_anti_join_impl, 6},
    {"_dplyr_inner_join_impl", (DL_FUNC) &_dplyr_inner_join_impl, 8},
    {"_dplyr_nest_join_impl", (DL_FUNC) &_dplyr_nest_join_impl, 7},
    {"_dplyr_left_join_impl", (DL_FUNC) &_dplyr_left_join_impl, 8},
    {"_dplyr_right_join_impl", (DL_FUNC) &_dplyr_right_join_impl, 8},
    {"_dplyr_full_join_impl", (DL_FUNC) &_dplyr_full_join_impl, 8},
    {"_dplyr_mutate_impl", (DL_FUNC) &_dplyr_mutate_impl, 2},
    {"_dplyr_select_impl", (DL_FUNC) &_dplyr_select_impl, 2},
    {"_dplyr_compatible_data_frame_nonames", (DL_FUNC) &_dplyr_compatible_data_frame_nonames, 3},
    {"_dplyr_compatible_data_frame", (DL_FUNC) &_dplyr_compatible_data_frame, 4},
    {"_dplyr_equal_data_frame", (DL_FUNC) &_dplyr_equal_data_frame, 5},
    {"_dplyr_union_data_frame", (DL_FUNC) &_dplyr_union_data_frame, 2},
    {"_dplyr_intersect_data_frame", (DL_FUNC) &_dplyr_intersect_data_frame, 2},
    {"_dplyr_setdiff_data_frame", (DL_FUNC) &_dplyr_setdiff_data_frame, 2},
    {"_dplyr_summarise_impl", (DL_FUNC) &_dplyr_summarise_impl, 2},
    {"_dplyr_hybrid_impl", (DL_FUNC) &_dplyr_hybrid_impl, 2},
    {"_dplyr_test_comparisons", (DL_FUNC) &_dplyr_test_comparisons, 0},
    {"_dplyr_test_matches", (DL_FUNC) &_dplyr_test_matches, 0},
    {"_dplyr_test_length_wrap", (DL_FUNC) &_dplyr_test_length_wrap, 0},
    {"_dplyr_materialize_binding", (DL_FUNC) &_dplyr_materialize_binding, 2},
    {"_dplyr_check_valid_names", (DL_FUNC) &_dplyr_check_valid_names, 2},
    {"_dplyr_assert_all_allow_list", (DL_FUNC) &_dplyr_assert_all_allow_list, 1},
    {"_dplyr_is_data_pronoun", (DL_FUNC) &_dplyr_is_data_pronoun, 1},
    {"_dplyr_is_variable_reference", (DL_FUNC) &_dplyr_is_variable_reference, 1},
    {"_dplyr_quo_is_variable_reference", (DL_FUNC) &_dplyr_quo_is_variable_reference, 1},
    {"_dplyr_quo_is_data_pronoun", (DL_FUNC) &_dplyr_quo_is_data_pronoun, 1},
    {"_dplyr_cumall", (DL_FUNC) &_dplyr_cumall, 1},
    {"_dplyr_cumany", (DL_FUNC) &_dplyr_cumany, 1},
    {"_dplyr_cummean", (DL_FUNC) &_dplyr_cummean, 1},
    {"_dplyr_RcppExport_registerCCallable", (DL_FUNC) &_dplyr_RcppExport_registerCCallable, 0},
    {NULL, NULL, 0}
};

void init_hybrid_inline_map(DllInfo* /*dll*/);
RcppExport void R_init_dplyr(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
    init_hybrid_inline_map(dll);
}
