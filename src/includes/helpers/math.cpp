/**
 * @file /src/includes/helpers/math.cpp
 * @brief A helper function for performingm math calculations
 */

/* A preprocessor directive that prevents the file from being included more than
  once. */
#ifndef CPP_MATH_CALCULATIONS_HELPER
#define CPP_MATH_CALCULATIONS_HELPER

/* Defining constants. */
#define TWO_EVEN_NUMBER 2
#define STARTING_EVEN_NUMBER 0

/**
 * The function takes an integer as an argument and returns the factorial of
 * that integer
 *
 * @param nToFactorial The number to calculate the factorial of.
 *
 * @return The factorial of the number.
 */
int calculateFactorial(int nToFactorial) {
  /* variable declaration */
  int startingNumber = 1;
  int calculationResult = 1;

  /* Calculating the factorial of the number. */
  for (int i = nToFactorial; i >= startingNumber; i--) {
    calculationResult = calculationResult * i;
  }

  return calculationResult;
}

/**
 * It determines if an integer is even or not.
 *
 * @param integer The integer to be checked if it's even or not.
 *
 * @return The function isEven is returning a boolean value.
 */
bool isEven(int integer) {
  bool isEvenInteger = false;

  if (integer % TWO_EVEN_NUMBER == STARTING_EVEN_NUMBER)
    isEvenInteger = true;

  return isEvenInteger;
}

#endif