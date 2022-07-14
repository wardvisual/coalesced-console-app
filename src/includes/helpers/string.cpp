/**
 * @file /src/includes/helpers/string.cpp
 * @brief  A helper that is used to lowercase a string.
 */

#ifndef CPP_STRING_HELPER
#define CPP_STRING_HELPER

std::string lowerCaseString(string _string) {
  int counter = 0;

  while (counter < _string.length()) {
    if (isupper(_string[counter])) {
      _string[counter] = tolower(_string[counter]);
    }

    counter++;
  }
  return _string;
}

#endif