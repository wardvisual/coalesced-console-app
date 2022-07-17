/**
 * @file /src/includes/helpers/search.cpp
 * @brief
 * .
 */

#ifndef CPP_SEARCH_HELPER
#define CPP_SEARCH_HELPER

#include <iostream>

#include "../../includes/constants/dataType.cpp"

template <typename T> bool isInArray(T array[], int size, T value) {
  bool isFound = false;

  for (int i = 0; i < size; i++) {
    if (array[i] == value) {
      isFound = true;
    }
  }
  return isFound;
}

// todo lowercase character value
template <typename T> T findElement(T array[], int size, T value) {
  int singleValue = 1;
  int first = 0,                 // First array element
      last = size - singleValue, // Last array element
      middle,                    // Mid point of search
      foundedValue = 0;          // Position of search value
  bool found = false;            // Flag
  int itSelf = 2;

  while (!found && first <= last) {
    middle = (first + last) / itSelf; // Calculate mid point
                                      // If value is found at mid
    if (array[middle] == value) {
      found = true;
      foundedValue = array[middle];
    } else if (array[middle] > value) // If value is in lower half
      last = middle - singleValue;
    else
      first = middle + singleValue; // If value is in upper half
  }

  return foundedValue;
}

#endif

// template <typename T> bool isInArray(T array[], int size, T value) {
//   int singleValue = 1;
//   int first = 0,                 // First array element
//       last = size - singleValue, // Last array element
//       middle;                    // Mid point of search
//   bool isFound = false;          // Flag
//   int itSelf = 2;

//   while (!isFound && first <= last) {
//     middle = (first + last) / itSelf; // Calculate mid point

//     // If value is isFound at mid
//     if (array[middle] == std::tolower(value, std::locale())) {
//       isFound = true;

//     } else if (array[middle] > value) // If value is in lower half
//       last = middle - singleValue;
//     else
//       first = middle + singleValue; // If value is in upper half
//   }

//   return isFound;
// }