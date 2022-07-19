/**
 * @file /src/includes/helpers/dataType.cpp
 * @brief A helper function for modifying certain variable values.
 * .
 */

/* A preprocessor directive that prevents the file from being included more than
  once. */
#ifndef CPP_DATA_TYPE_HELPER
#define CPP_DATA_TYPE_HELPER

/* Constants */
#include "../constants/datatype.cpp"

template <typename T>
/**
 * It compares the variable type to the data type ID
 *
 * @param variableType The type of the variable that is being checked.
 * @param dataTypeID The data type ID of the variable.
 *
 * @return a boolean value.
 */
bool compareTypeId(std::string variableType, std::string dataTypeID) {
  bool isTypeIdValid = false;

  if (variableType == dataTypeID) {
    isTypeIdValid = true;
  }

  return isTypeIdValid;
}

/**
 * It takes a string and converts all of the uppercase letters to lowercase
 * letters
 *
 * @param _string The string to be converted to lowercase.
 */
std::string lowerCaseString(std::string _string) {
  int counter = 0;

  while (counter < _string.length()) {
    if (std::isupper(_string[counter])) {
      _string[counter] = std::tolower(_string[counter]);
    }

    counter++;
  }

  return _string;
}

/**
 * It takes a string and checks if it's a number
 *
 * @param _char The character to be converted to lowercase.
 */
void lowerCaseCharacter(char &_char) {
  _char = std::tolower(_char, std::locale());
}

/**
 * It checks if the string contains only digits
 *
 * @param str The string to be validated.
 */
bool validateString(std::string str, bool isSymbolAccepted) {
  bool isValidated = true;

  if (isSymbolAccepted) {
    for (int i = 0; i < str.length(); i++) {
      if (std::isdigit(str[i]) == false && str[i] == '.')
        isValidated = false;
    }
  } else {
    for (int i = 0; i < str.length(); i++) {
      if (std::isdigit(str[i]) == false)
        isValidated = false;
    }
  }

  return isValidated;
}

#endif