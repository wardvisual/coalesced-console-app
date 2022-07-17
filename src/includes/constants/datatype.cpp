/**
 * @file /src/includes/constants/datatype.cpp
 * @brief A macro constant to determine the typeID of a certain variable
 *
 * */

#ifndef CPP_DATA_TYPE_CONSTANT
#define CPP_DATA_TYPE_CONSTANT

#include <typeinfo>

const std::string STRING_TYPE_ID = typeid(std::string).name();
const std::string INTEGER_TYPE_ID = typeid(int).name();
const std::string FLOAT_TYPE_ID = typeid(float).name();
const std::string DOUBLE_TYPE_ID = typeid(double).name();
const std::string CHAR_TYPE_ID = typeid(char).name();

#endif