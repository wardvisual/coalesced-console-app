/**
 * @file /src/core/apps/secondsem/activityThree/functions/calculateCircle.cpp
 * @brief A helper function
 *
 * */

/* A preprocessor directive that prevents the file from being included more than
  once. */
#ifndef CPP_CALCULATE_CIRCLE_ACTIVTY_THREE_SECONDSEM
#define CPP_CALCULATE_CIRCLE_ACTIVTY_THREE_SECONDSEM
#define PI 3.14

/* Constants */
#include "../../../../../includes/constants/alignment.cpp"
#include "../../../../../includes/constants/validation.cpp"

/* Components */
#include "../../../../components/text.cpp"
#include "../../../../components/view.cpp"

/**
 * It's a function that calculates the area of a circle
 *
 * @param type It's the type of the current menu.
 * @param currentMenu The current menu that the user is in.
 * @param activityThreeHeading A function that displays the heading of the
 * activity.
 */
void calculateCircle(std::string type, std::string currentMenu,
                     void (&activityThreeHeading)()) {
  /* variable declaration */
  int reAlignLabelYCoordinate = ALIGNMENTY31;
  int reAlignErrorMsgYCoordinate = ALIGNMENTY35;

  float result = 0;
  std::string labelForCircle = "Enter the radius of a circle";
  float userInputtedRadius;

  float expectedArrayOfValue[] = {};
  int arrayLength = 0; // none

  /* It handles user input and prints an error if there is an error. */
  input<float>(labelForCircle, userInputtedRadius, expectedArrayOfValue,
               arrayLength, !RESTRICTED_INPUT, reAlignLabelYCoordinate,
               reAlignErrorMsgYCoordinate);

  /* A function that clears the screen and displays the main menu. */
  reViewMainScreen(type, currentMenu, activityThreeHeading);

  /* It's calculating the area of a circle. */
  result = (userInputtedRadius * userInputtedRadius) * PI;

  /* It's displaying the result of the calculation. */
  text("Result:", TEXT_BLUE, ALIGNMENTX38, ALIGNMENTY20);
  text("Inputted radius: ", TEXT_WHITE, ALIGNMENTX38, ALIGNMENTY22);
  setDecimalValue(userInputtedRadius, TEXT_WHITE, ALIGNMENTX38, ALIGNMENTX48);

  text("Area of a circle: ", TEXT_WHITE, ALIGNMENTX38, ALIGNMENTY24);
  setDecimalValue(result, TEXT_WHITE, ALIGNMENTX56, ALIGNMENTY24);
}

#endif