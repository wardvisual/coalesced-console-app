/**
 * @file /src/includes/helpers/error.cpp
 * @brief A helper handling error message
 */

/* A preprocessor directive that prevents the file from being included more than
  once. */
#ifndef CPP_ERROR_HELPER
#define CPP_ERROR_HELPER

#include "../constants/color.cpp"

void newError(std::string &errorMessage, int xCoordinate, int yCoordinate) {
  text(errorMessage, TEXT_LIGHT_RED, xCoordinate, yCoordinate);
}

#endif