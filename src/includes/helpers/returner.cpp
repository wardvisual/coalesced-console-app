/**
 * @file /src/includes/helpers/returner.cpp
 * @brief
 */

#ifndef CPP_RETURN_ARRAY_HELPER
#define CPP_RETURN_ARRAY_HELPER

template <typename T> T *returnArray(int maxLength, T arrayValues[]) {
  T *array = new T[maxLength];

  for (int i = 0; i < maxLength; i++) {
    array[i] = arrayValues[i];
  }

  return array;
}

#endif