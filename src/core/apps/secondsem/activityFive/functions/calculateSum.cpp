/**
 * @file
 * /src/core/apps/secondsem/activityFive/functions/calculateSum.cpp
 * @brief A helper function
 *
 * */

/* A preprocessor directive that prevents the file from being included more than
  once. */
#ifndef CPP_CALCULATE_SUM_ACTIVITY_FIVE_SECONDSEM
#define CPP_CALCULATE_SUM_ACTIVITY_FIVE_SECONDSEM

/* Constants */
#include "../../../../../includes/constants/alignment.cpp"
#include "../../../../../includes/constants/color.cpp"

/* Components */
#include "../../../../components/text.cpp"
#include "../../../../components/view.cpp"

/**
 * It calculates the sum of the squares of the odd numbers from 1 to the user
 * inputted number
 *
 * @param currentMenu The current menu the user is on.
 * @param userInput The number the user inputs
 * @param heading This is a function that is called to display the heading of
 * the program.
 */
void calculateSum(std::string currentMenu, int userInput, void (&heading)()) {
  /* variable declaration */
  int startingNumber = 1;
  int calculationResult = 0;
  int squareRoot;

  /* Calculating the sum of the squares of the odd numbers from 1 to the user
    inputted number. */
  for (int i = 1; i <= userInput; i++) {
    squareRoot = i * i;
    calculationResult += squareRoot;
  }

  /* It's displaying the result of the calculation. */
  text("Result", TEXT_BLUE, ALIGNMENTX38, ALIGNMENTY16);
  text("Number Type: Odd", TEXT_WHITE, ALIGNMENTX38, ALIGNMENTY18);
  text("Inputted Number: " + std::to_string(userInput), TEXT_WHITE,
       ALIGNMENTX38, ALIGNMENTY20);
  text("Sum: " + std::to_string(calculationResult), TEXT_WHITE, ALIGNMENTX38,
       ALIGNMENTY22);
}

#endif