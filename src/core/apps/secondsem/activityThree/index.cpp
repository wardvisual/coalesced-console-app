/**
 * @file /src/core/apps/secondsem/activityOne/index.cpp
 * @brief
 *
 * */

#ifndef CPP_ACTIVTY_THREE_SECONDSEM
#define CPP_ACTIVTY_THREE_SECONDSEM

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

typedef struct Selection {
  char item;
};

void activityThreeHeading();

void activityThree(char currentMenu) {
  Selection selection;
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
    selection = userChoice;
    calculateSquare(currentMenu, activityThreeHeading);
  }

  if (userChoice == RECTANGLE_SELECTION) {
    selection = userChoice;
    calculateRectangle(currentMenu, activityThreeHeading);
  }

  if (userChoice == TRIANGLE_SELECTION) {
    selection = userChoice;
    calculateTriangle(currentMenu, activityThreeHeading);
  }

  if (userChoice == CIRCLE_SELECTION) {
    selection = userChoice;
    calculateCircle(currentMenu, activityThreeHeading);
  }
}

void activityThreeHeading() {
  Selection selection;

  text("Instruction: ", TEXT_BLUE, ALIGNMENTX38, ALIGNMENTY10);
  text("Using C++ create a program that will compute the area of Circle, "
       "Triangle, Square, Rectangle.",
       TEXT_WHITE, ALIGNMENTX38, ALIGNMENTY12);

  text("Choices: ", TEXT_BLUE, ALIGNMENTX38, ALIGNMENTY14);
  text("[A]: Area of Square ",
       selection == SQUARE_SELECTION ? TEXT_BLUE : TEXT_WHITE, ALIGNMENTX38,
       ALIGNMENTY16);
  text("[B]: Area of Rectangle ",
       selection == RECTANGLE_SELECTION ? TEXT_BLUE : TEXT_WHITE, ALIGNMENTX38,
       ALIGNMENTY18);
  text("[C]: Area of Triangle ",
       selection == TRIANGLE_SELECTION ? TEXT_BLUE : TEXT_WHITE, ALIGNMENTX65,
       ALIGNMENTY16);
  text("[D]: Area of Circle ",
       selection == CIRCLE_SELECTION ? TEXT_BLUE : TEXT_WHITE, ALIGNMENTX65,
       ALIGNMENTY18);
}

#endif
