/**
 * @file /src/includes/helpers/dataType.cpp
 * @brief
 * .
 */

#ifndef CPP_DATA_TYPE_HELPER
#define CPP_DATA_TYPE_HELPER

#include "../constants/datatype.cpp"

// template <typename T> bool compareTypeId(T variable, std::string dataTypeID)
// {
//   bool isTypeIdValid = false;

//   if (typeid(variable).name() == dataTypeID) {
//     isTypeIdValid = true;
//   }

//   return isTypeIdValid;
// }

template <typename T>
bool compareTypeId(std::string variableType, std::string dataTypeID) {
  bool isTypeIdValid = false;

  if (variableType == dataTypeID) {
    isTypeIdValid = true;
  }

  return isTypeIdValid;
}

void lowerCaseString(std::string &_string) {
  int counter = 0;

  while (counter < _string.length()) {
    if (isupper(_string[counter])) {
      _string[counter] = tolower(_string[counter]);
    }

    counter++;
  }
}

void lowerCaseCharacter(char &_char) {
  _char = std::tolower(_char, std::locale());
}

bool validateString(std::string str) {
  bool isValidated = false;

  for (int i = 0; i < str.length(); i++) {
    if (std::isdigit(str[i]) == false)
      isValidated = false;
  }

  isValidated = true;
}

#endif