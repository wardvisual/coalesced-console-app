/**
 * @file /src/core/apps/secondsem/activityThree/index.cpp
 * @brief
 *
 * */

#ifndef CPP_ACTIVITY_THREE_INDEX_SECONDSEM
#define CPP_ACTIVITY_THREE_INDEX_SECONDSEM

#include "../../../components/input.cpp"
#include "../../../components/text.cpp"
#include "../../../components/view.cpp"

#include "../../../../includes/constants/alignment.cpp"
#include "../../../../includes/constants/color.cpp"
#include "../../../../includes/constants/menu.cpp"
#include "../../../../includes/constants/validation.cpp"

#include "../../../../includes/helpers/cleanUp.cpp"

#include "functions/calculateCircle.cpp"
#include "functions/calculateRectangle.cpp"
#include "functions/calculateSquare.cpp"
#include "functions/calculateTriangle.cpp"

void activityThreeHeading();

void activityThree(std::string currentMenu) {
  int reAlignLabelYCoordinate = ALIGNMENTY31;
  int reAlignErrorMsgYCoordinate = ALIGNMENTY35;

  std::string expectedArrayOfValue[] = {};
  int arrayLength = 0; // none

  std::string label = "Select Shape Type";
  std::string userChoice;

  activityThreeHeading();

  input<std::string>(label, userChoice, expectedArrayOfValue, arrayLength,
                     RESTRICTED_INPUT, reAlignLabelYCoordinate,
                     reAlignErrorMsgYCoordinate);
  // SQUARE
  if (userChoice == MENU_ITEM_A) {
    calculateSquare(currentMenu, activityThreeHeading);
  }
  // RECTANGLE
  if (userChoice == MENU_ITEM_B) {
    calculateRectangle(currentMenu, activityThreeHeading);
  }

  // TRIANGLE
  if (userChoice == MENU_ITEM_C) {
    calculateTriangle(currentMenu, activityThreeHeading);
  }

  // CIRCLE
  if (userChoice == MENU_ITEM_D) {
    calculateCircle(currentMenu, activityThreeHeading);
  }
}

void activityThreeHeading() {
  text("Instruction: ", TEXT_BLUE, ALIGNMENTX38, ALIGNMENTY10);
  text("Using C++ create a program that will compute the area of Circle, "
       "Triangle, Square, Rectangle.",
       TEXT_WHITE, ALIGNMENTX38, ALIGNMENTY12);

  text("Choices: ", TEXT_BLUE, ALIGNMENTX38, ALIGNMENTY14);
  text("[A]: Area of Square ", TEXT_WHITE, ALIGNMENTX38, ALIGNMENTY16);
  text("[B]: Area of Rectangle ", TEXT_WHITE, ALIGNMENTX38, ALIGNMENTY18);
  text("[C]: Area of Triangle ", TEXT_WHITE, ALIGNMENTX65, ALIGNMENTY16);
  text("[D]: Area of Circle ", TEXT_WHITE, ALIGNMENTX65, ALIGNMENTY18);
}

#endif
