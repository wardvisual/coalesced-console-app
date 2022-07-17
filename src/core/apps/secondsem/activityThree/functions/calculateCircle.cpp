/**
 * @file /src/core/apps/secondsem/activityThree/functions/calculateCircle.cpp
 * @brief
 *
 * */

#ifndef CPP_CALCULATE_CIRCLE_ACTIVTY_THREE_SECONDSEM
#define CPP_CALCULATE_CIRCLE_ACTIVTY_THREE_SECONDSEM
#define PI 3.14

#include "../../../../../includes/constants/alignment.cpp"
#include "../../../../../includes/constants/validation.cpp"
#include "../../../../components/text.cpp"

#include "../../../../components/view.cpp"

void calculateCircle(std::string currentMenu, void (&activityThreeHeading)()) {
  int reAlignLabelYCoordinate = ALIGNMENTY31;
  int reAlignErrorMsgYCoordinate = ALIGNMENTY35;

  float result = 0;
  std::string labelForCircle = "Enter the radius of a circle";
  float userInputtedRadius;

  float expectedArrayOfValue[] = {};
  int arrayLength = 0; // none

  input<float>(labelForCircle, userInputtedRadius, expectedArrayOfValue,
               arrayLength, !RESTRICTED_INPUT, reAlignLabelYCoordinate,
               reAlignErrorMsgYCoordinate);

  /* A function that clears the screen and displays the main menu. */
  reViewMainScreen(currentMenu, activityThreeHeading);

  result = (userInputtedRadius * userInputtedRadius) * PI;

  text("Result:", TEXT_BLUE, ALIGNMENTX38, ALIGNMENTY20);
  text("Inputted radius: ", TEXT_WHITE, ALIGNMENTX38, ALIGNMENTY22);
  setDecimalValue(userInputtedRadius, TEXT_WHITE, ALIGNMENTX38, ALIGNMENTX48);

  text("Area of a circle: ", TEXT_WHITE, ALIGNMENTX38, ALIGNMENTY24);
  setDecimalValue(result, TEXT_WHITE, ALIGNMENTX56, ALIGNMENTY24);
}

#endif