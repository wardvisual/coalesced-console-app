/**
 * @file /src/includes/constants/datatype.cpp
 * @brief A macro constant that is used provide the certain variable type ID
 *
 * */

#ifndef CPP_DATA_TYPE_CONSTANT
#define CPP_DATA_TYPE_CONSTANT

#define STRING_ID typeid(std::string).name()
#define INTEGER_ID typeid(int).name()
#define FLOAT_ID typeid(float).name()
#define DOUBLE_ID typeid(double).name()
#define CHAR_ID typeid(char).name()

#endif