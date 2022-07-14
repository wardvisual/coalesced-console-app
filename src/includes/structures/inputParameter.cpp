/**
 * @file /src/includes/structures/inputParam.cpp
 * @brief  A structure that is used to createa a structure for input parameter.
 */

#ifndef CPP_INPUT_STRUCT
#define CPP_INPUT_STRUCT

#include "../constants/alignment.cpp"

template <typename T> struct InputParameter {
  std::string &label;
  T &referenceValue;
  bool isInputRestrictedForSingleValue;
  int reAlignLabelYCoordinate = ALIGNMENTY24;
  int reAlignErrorMsgYCoordinate = ALIGNMENTY26;
  std::string errorMessage = "Invalid Input. Please try again!";
}

#endif