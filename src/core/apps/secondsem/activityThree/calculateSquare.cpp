/**
 * @file /src/core/apps/secondsem/activityThree/calculateSquare.cpp
 * @brief
 *
 * */

#ifndef CPP_CALCULATE_SQUARE_ACTIVTY_THREE_SECONDSEM
#define CPP_CALCULATE_SQUARE_ACTIVTY_THREE_SECONDSEM

#include "../../../../includes/constants/alignment.cpp"
#include "../../../../includes/constants/validation.cpp"
#include "../../../components/text.cpp"

void calculateSquare(int currentMenu, void (&activityThreeHeading)()) {
  int reAlignLabelYCoordinate = ALIGNMENTY31;
  int reAlignErrorMsgYCoordinate = ALIGNMENTY35;

  int result = 0;
  std::string label = "Enter the length of a square";
  int userInput;

  int expectedArrayOfValue[] = {};
  int arrayLength = 0; // none

  input<int>(label, userInput, expectedArrayOfValue, arrayLength,
             !RESTRICTED_INPUT, reAlignLabelYCoordinate,
             reAlignErrorMsgYCoordinate);

  /* A function that clears the screen and displays the main menu. */
  reViewMainScreen(currentMenu, activityThreeHeading);

  result = userInput * userInput;

  text("Result", TEXT_BLUE, ALIGNMENTX38, ALIGNMENTY20);
  text("Inputted number: " + std::to_string(userInput), TEXT_WHITE,
       ALIGNMENTX38, ALIGNMENTY22);
  text("Area of a square:" + std::to_string(result), TEXT_WHITE, ALIGNMENTX38,
       ALIGNMENTY24);
}

#endif