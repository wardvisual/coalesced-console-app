/**
 * @file
 * /src/core/apps/secondsem/activityFive/functions/getFactorial.cpp
 * @brief A helper function
 *
 * */

/* A preprocessor directive that prevents the file from being included more than
  once. */
#ifndef CPP_CALCULATE_FACTORIAL_ACTIVITY_FIVE_SECONDSEM
#define CPP_CALCULATE_FACTORIAL_ACTIVITY_FIVE_SECONDSEM

/* Constants */
#include "../../../../../includes/constants/alignment.cpp"
#include "../../../../../includes/constants/color.cpp"

/* Helpers */
#include "../../../../../includes/helpers/math.cpp"

/* Components */
#include "../../../../components/text.cpp"
#include "../../../../components/view.cpp"

/**
 * It's displaying the result of the calculation
 *
 * @param userInput The number that the user inputted.
 */
void getFactorial(int userInput) {
  int result = calculateFactorial(userInput);

  /* It's displaying the result of the calculation. */
  text("Result", TEXT_BLUE, ALIGNMENTX38, ALIGNMENTY16);
  text("Number Type: Even", TEXT_WHITE, ALIGNMENTX38, ALIGNMENTY18);
  text("Inputted Number: " + std::to_string(userInput), TEXT_WHITE,
       ALIGNMENTX38, ALIGNMENTY20);
  text("Factorial: " + std::to_string(result), TEXT_WHITE, ALIGNMENTX38,
       ALIGNMENTY22);
}

#endif