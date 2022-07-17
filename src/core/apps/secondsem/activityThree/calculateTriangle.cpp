/**
 * @file /src/core/apps/secondsem/activityThree/calculateTriangle.cpp
 * @brief
 *
 * */

#ifndef CPP_CALCULATE_TRIANGLE_ACTIVTY_THREE_SECONDSEM
#define CPP_CALCULATE_TRIANGLE_ACTIVTY_THREE_SECONDSEM
#define TWO_SIDES 2

#include "../../../../includes/constants/alignment.cpp"
#include "../../../../includes/constants/validation.cpp"
#include "../../../components/text.cpp"

void resultHandler(float userInputtedBase, float userInputtedLeftSide,
                   float userInputtedRightSide, float result);

void calculateTriangle(std::string currentMenu,
                       void (&activityThreeHeading)()) {
  int reAlignLabelYCoordinate = ALIGNMENTY31;
  int reAlignErrorMsgYCoordinate = ALIGNMENTY35;

  float result = 0;
  std::string labelForBase = "Base of a triangle";
  std::string labelForLeftSide = "Height of a triangle [Left Side]";
  std::string labelForRightSide = "Height of a triangle [Right Side]";
  float userInputtedBase, userInputtedLeftSide, userInputtedRightSide;

  float expectedArrayOfValue[] = {};
  int arrayLength = 0; // none

  input<float>(labelForBase, userInputtedBase, expectedArrayOfValue,
               arrayLength, !RESTRICTED_INPUT, reAlignLabelYCoordinate,
               reAlignErrorMsgYCoordinate);

  /* A function that clears the screen and displays the main menu. */
  reViewMainScreen(currentMenu, activityThreeHeading);

  text("Result", TEXT_BLUE, ALIGNMENTX38, ALIGNMENTY20);
  text("Inputted base: " + std::to_string(userInputtedBase), TEXT_WHITE,
       ALIGNMENTX38, ALIGNMENTY22);

  input<float>(labelForLeftSide, userInputtedLeftSide, expectedArrayOfValue,
               arrayLength, !RESTRICTED_INPUT, reAlignLabelYCoordinate,
               reAlignErrorMsgYCoordinate);

  /* A function that clears the screen and displays the main menu. */
  reViewMainScreen(currentMenu, activityThreeHeading);

  text("Result", TEXT_BLUE, ALIGNMENTX38, ALIGNMENTY20);
  text("Inputted base: " + std::to_string(userInputtedBase), TEXT_WHITE,
       ALIGNMENTX38, ALIGNMENTY22);
  text("Inputted height [Left Side]: " + std::to_string(userInputtedLeftSide),
       TEXT_WHITE, ALIGNMENTX38, ALIGNMENTY24);

  input<float>(labelForRightSide, userInputtedRightSide, expectedArrayOfValue,
               arrayLength, !RESTRICTED_INPUT, reAlignLabelYCoordinate,
               reAlignErrorMsgYCoordinate);

  result = (userInputtedBase + userInputtedLeftSide + userInputtedRightSide) /
           TWO_SIDES;

  resultHandler(userInputtedBase, userInputtedLeftSide, userInputtedRightSide,
                result);

  reViewMainScreen(currentMenu, activityThreeHeading);

  resultHandler(userInputtedBase, userInputtedLeftSide, userInputtedRightSide,
                result);
}

void resultHandler(float userInputtedBase, float userInputtedLeftSide,
                   float userInputtedRightSide, float result) {
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