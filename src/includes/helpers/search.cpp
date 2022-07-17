/**
 * @file /src/includes/helpers/search.cpp
 * @brief A helper function for searching for content in the array
 * .
 */

#ifndef CPP_SEARCH_HELPER
#define CPP_SEARCH_HELPER

/* Built-in library */
#include <iostream>

/* Constants */
#include "../../includes/constants/dataType.cpp"

/* A function that takes in an array, the size of the array, and a value. It
then checks if the value is in the array. */
template <typename T> bool isInArray(T array[], int size, T value) {
  bool isFound = false;

  for (int i = 0; i < size; i++) {
    if (array[i] == value) {
      isFound = true;
    }
  }
  return isFound;
}

/* A function that takes in an array, the size of the array, and a value. It
then checks if the value is in the array. */
template <typename T> T findElement(T array[], int size, T value) {
  T foundValue;

  int count = 0;

  if (array[count] == value) {
    foundValue = value;
  } else {
    while (array[count] != value) {
      for (int i = 0; i < size; i++) {
        if (array[i] == value) {
          foundValue = value;
        }
      }

      count++;
    }
  }

  return foundValue;
}

#endif
