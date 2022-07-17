/**
 * @file /src/core/apps/secondsem/activityThree/functions/calculateSquare.cpp
 * @brief  A helper function
 *
 * */

/* A preprocessor directive that prevents the file from being included more than
  once. */
#ifndef CPP_CALCULATE_SQUARE_ACTIVTY_THREE_SECONDSEM
#define CPP_CALCULATE_SQUARE_ACTIVTY_THREE_SECONDSEM

/* Constants */
#include "../../../../../includes/constants/alignment.cpp"
#include "../../../../../includes/constants/color.cpp"
#include "../../../../../includes/constants/validation.cpp"

/* Components */
#include "../../../../components/text.cpp"

/**
 * It takes in a string and a function as parameters and then calls the function
 *
 * @param currentMenu The current menu that the user is in.
 * @param activityThreeHeading A function that displays the heading of the
 * activity.
 */
void calculateSquare(std::string currentMenu, void (&activityThreeHeading)()) {
  /* variable declaration */
  int reAlignLabelYCoordinate = ALIGNMENTY31;
  int reAlignErrorMsgYCoordinate = ALIGNMENTY35;

  int result = 0;
  std::string label = "Enter the length of a square";
  int userInput;

  int expectedArrayOfValue[] = {};
  int arrayLength = 0; // none

  /* It handles user input and prints an error if there is an error. */
  input<int>(label, userInput, expectedArrayOfValue, arrayLength,
             !RESTRICTED_INPUT, reAlignLabelYCoordinate,
             reAlignErrorMsgYCoordinate);

  /* A function that clears the screen and displays the main menu. */
  reViewMainScreen(currentMenu, activityThreeHeading);

  /* It's calculating the area of a square. */
  result = userInput * userInput;

  /* It's displaying the result of the calculation. */
  text("Result:", TEXT_BLUE, ALIGNMENTX38, ALIGNMENTY20);
  text("Inputted number: " + std::to_string(userInput), TEXT_WHITE,
       ALIGNMENTX38, ALIGNMENTY22);
  text("Area of a square:" + std::to_string(result), TEXT_WHITE, ALIGNMENTX38,
       ALIGNMENTY24);
}

#endif