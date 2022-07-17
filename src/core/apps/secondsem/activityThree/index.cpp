/**
 * @file /src/core/apps/secondsem/activityThree/index.cpp
 * @brief
 *
 * */

#ifndef CPP_ACTIVITY_THREE_INDEX_SECONDSEM
#define CPP_ACTIVITY_THREE_INDEX_SECONDSEM

#define DEFAULT_SELECTION '-'
#define SQUARE_SELECTION 'a'
#define RECTANGLE_SELECTION 'b'
#define TRIANGLE_SELECTION 'c'
#define CIRCLE_SELECTION 'd'

#include "../../../components/input.cpp"
#include "../../../components/text.cpp"
#include "../../../components/view.cpp"

#include "../../../../includes/constants/alignment.cpp"
#include "../../../../includes/constants/color.cpp"
#include "../../../../includes/constants/validation.cpp"

#include "../../../../includes/helpers/cleanUp.cpp"

#include "calculateCircle.cpp"
#include "calculateRectangle.cpp"
#include "calculateSquare.cpp"
#include "calculateTriangle.cpp"

void activityThreeHeading();

void activityThree(std::string currentMenu) {
  int reAlignLabelYCoordinate = ALIGNMENTY31;
  int reAlignErrorMsgYCoordinate = ALIGNMENTY35;

  char expectedArrayOfValue[] = {};
  int arrayLength = 0; // none

  std::string label = "Select Shape Type";
  char userChoice;

  activityThreeHeading();

  input<char>(label, userChoice, expectedArrayOfValue, arrayLength,
              RESTRICTED_INPUT, reAlignLabelYCoordinate,
              reAlignErrorMsgYCoordinate);

  if (userChoice == SQUARE_SELECTION) {
    calculateSquare(currentMenu, activityThreeHeading);
  }

  if (userChoice == RECTANGLE_SELECTION) {
    calculateRectangle(currentMenu, activityThreeHeading);
  }

  if (userChoice == TRIANGLE_SELECTION) {
    calculateTriangle(currentMenu, activityThreeHeading);
  }

  if (userChoice == CIRCLE_SELECTION) {
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
