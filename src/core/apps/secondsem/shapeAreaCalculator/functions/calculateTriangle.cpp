/**
 * @file /src/core/apps/secondsem/activityThree/functions/calculateTriangle.cpp
 * @brief
 *
 * */

/* A preprocessor directive that prevents the file from being included more than
  once. */
#ifndef CPP_CALCULATE_TRIANGLE_ACTIVTY_THREE_SECONDSEM
#define CPP_CALCULATE_TRIANGLE_ACTIVTY_THREE_SECONDSEM
#define TWO_SIDES 2

/* Constants */
#include "../../../../../includes/constants/alignment.cpp"
#include "../../../../../includes/constants/color.cpp"
#include "../../../../../includes/constants/validation.cpp"

/* Components */
#include "../../../../components/text.cpp"

/* Function decleration */
void resultHandler(float userInputtedBase, float userInputtedLeftSide,
                   float userInputtedRightSide, float result);

/**
 * It calculates the area of a triangle
 *
 * @param type It's the type of the current menu.
 * @param currentMenu It's the current menu that the user is in.
 * @param activityThreeHeading It's a function that displays the heading of the
 * activity.
 */
void calculateTriangle(std::string type, std::string currentMenu,
                       void (&activityThreeHeading)()) {
  /* Declaring variables. */
  int reAlignLabelYCoordinate = ALIGNMENTY31;
  int reAlignErrorMsgYCoordinate = ALIGNMENTY35;

  std::string labelForBase = "Base of a triangle";
  std::string labelForLeftSide = "Height of a triangle [Left Side]";
  std::string labelForRightSide = "Height of a triangle [Right Side]";
  float userInputtedBase, userInputtedLeftSide, userInputtedRightSide;
  float result = 0;

  float expectedArrayOfValue[] = {};
  int arrayLength = 0; // none

  /* It handles user input and prints an error if there is an error. */
  input<float>(labelForBase, userInputtedBase, expectedArrayOfValue,
               arrayLength, !RESTRICTED_INPUT, reAlignLabelYCoordinate,
               reAlignErrorMsgYCoordinate);

  /* A function that clears the screen and displays the main menu. */
  reViewMainScreen(type, currentMenu, activityThreeHeading);

  /* It's displaying the result of the user input. */
  text("Result", TEXT_BLUE, ALIGNMENTX38, ALIGNMENTY20);
  text("Inputted base: " + std::to_string(userInputtedBase), TEXT_WHITE,
       ALIGNMENTX38, ALIGNMENTY22);

  /* It handles user input and prints an error if there is an error. */
  input<float>(labelForLeftSide, userInputtedLeftSide, expectedArrayOfValue,
               arrayLength, !RESTRICTED_INPUT, reAlignLabelYCoordinate,
               reAlignErrorMsgYCoordinate);

  /* A function that clears the screen and displays the main menu. */
  reViewMainScreen(type, currentMenu, activityThreeHeading);

  /* It's displaying the result of the user input. */
  text("Result:", TEXT_BLUE, ALIGNMENTX38, ALIGNMENTY20);
  text("Inputted base: " + std::to_string(userInputtedBase), TEXT_WHITE,
       ALIGNMENTX38, ALIGNMENTY22);
  text("Inputted height [Left Side]: " + std::to_string(userInputtedLeftSide),
       TEXT_WHITE, ALIGNMENTX38, ALIGNMENTY24);

  /* It handles user input and prints an error if there is an error. */
  input<float>(labelForRightSide, userInputtedRightSide, expectedArrayOfValue,
               arrayLength, !RESTRICTED_INPUT, reAlignLabelYCoordinate,
               reAlignErrorMsgYCoordinate);

  /* Calculations */
  result = (userInputtedBase + userInputtedLeftSide + userInputtedRightSide) /
           TWO_SIDES;

  /* It's displaying the result of the calculation. */
  resultHandler(userInputtedBase, userInputtedLeftSide, userInputtedRightSide,
                result);

  /* A function that review the current screen. */
  reViewMainScreen(type, currentMenu, activityThreeHeading);

  /* It's displaying the result of the calculation. */
  resultHandler(userInputtedBase, userInputtedLeftSide, userInputtedRightSide,
                result);
}

/**
 * It displays the heading for the first activity.
 */
void resultHandler(float userInputtedBase, float userInputtedLeftSide,
                   float userInputtedRightSide, float result) {
  /* It's displaying the instruction for the user. */
  text("Result", TEXT_BLUE, ALIGNMENTX38, ALIGNMENTY20);
  text("Inputted base: " + std::to_string(userInputtedBase), TEXT_WHITE,
       ALIGNMENTX38, ALIGNMENTY22);
  text("Inputted height [Left Side]: " + std::to_string(userInputtedLeftSide),
       TEXT_WHITE, ALIGNMENTX38, ALIGNMENTY24);
  text("Inputted height [Right Side]: " + std::to_string(userInputtedRightSide),
       TEXT_WHITE, ALIGNMENTX38, ALIGNMENTY26);
  text("The area of a circle is " + std::to_string(result), TEXT_WHITE,
       ALIGNMENTX38, ALIGNMENTY28);
}

#endif