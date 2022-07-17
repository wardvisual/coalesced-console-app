/**
 * @file /src/core/apps/secondsem/activityThree/functions/calculateRectangle.cpp
 * @brief A helper function
 *
 * */

/* A preprocessor directive that prevents the file from being included more than
  once. */
#ifndef CPP_CALCULATE_RECTANGLE_ACTIVTY_THREE_SECONDSEM
#define CPP_CALCULATE_RECTANGLE_ACTIVTY_THREE_SECONDSEM

/* Constants */
#include "../../../../../includes/constants/alignment.cpp"
#include "../../../../../includes/constants/color.cpp"
#include "../../../../../includes/constants/validation.cpp"

/* Components */
#include "../../../../components/text.cpp"

/**
 * It's a function that calculates the area of a rectangle
 *
 * @param currentMenu The current menu that the user is in.
 * @param activityThreeHeading A function that displays the heading of the
 * activity.
 */
void calculateRectangle(std::string currentMenu,
                        void (&activityThreeHeading)()) {
  /* variable declarations */
  int reAlignLabelYCoordinate = ALIGNMENTY31;
  int reAlignErrorMsgYCoordinate = ALIGNMENTY35;

  int result = 0;
  std::string labelForHeight = "Enter the height of a rectangle";
  std::string labelForWidth = "Enter the width of a rectangle";
  int userInputtedHeight, userInputtedWidth;

  int expectedArrayOfValue[] = {};
  int arrayLength = 0; // none

  /* It handles user input and prints an error if there is an error. */
  input<int>(labelForHeight, userInputtedHeight, expectedArrayOfValue,
             arrayLength, !RESTRICTED_INPUT, reAlignLabelYCoordinate,
             reAlignErrorMsgYCoordinate);

  /* A function that clears the screen and displays the main menu. */
  reViewMainScreen(currentMenu, activityThreeHeading);

  /* It's displaying the result of the calculation. */
  text("Result", TEXT_BLUE, ALIGNMENTX38, ALIGNMENTY20);
  text("Inputted height: " + std::to_string(userInputtedHeight), TEXT_WHITE,
       ALIGNMENTX38, ALIGNMENTY22);

  /* A function that review the current screen. */
  input<int>(labelForWidth, userInputtedWidth, expectedArrayOfValue,
             arrayLength, !RESTRICTED_INPUT, reAlignLabelYCoordinate,
             reAlignErrorMsgYCoordinate);

  /* A function that clears the screen and displays the main menu. */
  reViewMainScreen(currentMenu, activityThreeHeading);

  /* Calculations */
  result = userInputtedHeight * userInputtedWidth;

  /* It's displaying the result of the calculation. */
  text("Result:", TEXT_BLUE, ALIGNMENTX38, ALIGNMENTY20);
  text("Inputted height: " + std::to_string(userInputtedHeight), TEXT_WHITE,
       ALIGNMENTX38, ALIGNMENTY22);
  text("Inputted width: " + std::to_string(userInputtedWidth), TEXT_WHITE,
       ALIGNMENTX38, ALIGNMENTY24);
  text("Area of a rectangle: " + std::to_string(result), TEXT_WHITE,
       ALIGNMENTX38, ALIGNMENTY26);
}

#endif