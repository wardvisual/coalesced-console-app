/**
 * @file /src/includes/helpers/dataType.cpp
 * @brief  A helper that is used to identify the datatype ID of a certian
 * variable
 * .
 */

#ifndef CPP_DATA_TYPE_HELPER
#define CPP_DATA_TYPE_HELPER

#include "../constants/datatype.cpp"

template <typename T> bool validateTypeId(T variable, string dataTypeID) {
  bool isTypeIdValid = false;

  if (typeid(variable).name() == dataTypeID) {
    isTypeIdValid = true;
  }

  return isTypeIdValid;
}

#endif