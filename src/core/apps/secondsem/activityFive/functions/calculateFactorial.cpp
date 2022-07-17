/**
 * @file
 * /src/core/apps/secondsem/activityFive/functions/calculateFactorial.cpp
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
#include "../../../../components/text.cpp"

/* Components */
#include "../../../../components/view.cpp"

/**
 * It calculates the factorial of a number
 *
 * @param currentMenu The current menu the user is on.
 * @param userInput The number the user inputs.
 * @param heading This is a function that is called to display the heading of
 * the menu.
 */
void calculateFactorial(std::string currentMenu, int userInput,
                        void (&heading)()) {
  /* variable declaration */
  int startingNumber = 1;
  int calculationResult = 1;

  /* Calculating the factorial of the number. */
  for (int i = userInput; i >= startingNumber; i--) {
    calculationResult = calculationResult * i;
  }

  /* It's displaying the result of the calculation. */
  text("Result", TEXT_BLUE, ALIGNMENTX38, ALIGNMENTY16);
  text("Number Type: Even", TEXT_WHITE, ALIGNMENTX38, ALIGNMENTY18);
  text("Inputted Number: " + std::to_string(userInput), TEXT_WHITE,
       ALIGNMENTX38, ALIGNMENTY20);
  text("Factorial: " + std::to_string(calculationResult), TEXT_WHITE,
       ALIGNMENTX38, ALIGNMENTY22);
}

#endif