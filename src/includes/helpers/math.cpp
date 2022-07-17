/**
 * @file /src/includes/helpers/math.cpp
 * @brief
 */

#ifndef CPP_MATH_HELPER
#define CPP_MATH_HELPER

#include <cmath>

float roundOff(float value, unsigned char precision = 2) {
  float powerOf10 = 10.0f;

  float calculatedFLoat = pow(powerOf10, (float)precision);

  float floatedValue = round(value * calculatedFLoat) / calculatedFLoat;

  return floatedValue;
}

#endif
