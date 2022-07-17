/**
 * @file /src/core/apps/secondsem/activityFour/calculateTwoInstallement.cpp
 * @brief
 *
 * */

#ifndef CPP_CALCULATE_TWO_INSTALLEMENT_ACTIVTY_FOUR_SECONDSEM
#define CPP_CALCULATE_TWO_INSTALLEMENT_ACTIVTY_FOUR_SECONDSEM

#include "../../../../includes/constants/alignment.cpp"
#include "../../../../includes/constants/validation.cpp"
#include "../../../components/text.cpp"

void calculateTwoInstallement(std::string currentMenu,
                              void (&activityThreeHeading)()) {
  int reAlignLabelYCoordinate = ALIGNMENTY31;
  int reAlignErrorMsgYCoordinate = ALIGNMENTY35;

  int result = 0;
  std::string labelForHeight = "Enter the height of a rectangle";
  std::string labelForWidth = "Enter the width of a rectangle";
  int userInputtedHeight, userInputtedWidth;

  int expectedArrayOfValue[] = {};
  int arrayLength = 0; // none

  input<int>(labelForHeight, userInputtedHeight, expectedArrayOfValue,
             arrayLength, !RESTRICTED_INPUT, reAlignLabelYCoordinate,
             reAlignErrorMsgYCoordinate);

  /* A function that clears the screen and displays the main menu. */
  reViewMainScreen(currentMenu, activityThreeHeading);
  text("Result", TEXT_BLUE, ALIGNMENTX38, ALIGNMENTY20);

  text("Result", TEXT_BLUE, ALIGNMENTX38, ALIGNMENTY20);
  text("Inputted height: " + std::to_string(userInputtedHeight), TEXT_WHITE,
       ALIGNMENTX38, ALIGNMENTY22);
}

#endif