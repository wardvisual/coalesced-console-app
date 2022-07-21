/**
 * @file /src/includes/helpers/math.cpp
 * @brief A helper function for performingm math calculations
 */

/* A preprocessor directive that prevents the file from being included more than
  once. */
#ifndef CPP_MATH_CALCULATIONS_HELPER
#define CPP_MATH_CALCULATIONS_HELPER

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

#endif