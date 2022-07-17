/**
 * @file /src/core/apps/secondsem/activityThree/index.cpp
 * @brief Second sem activity three
 *
 * */

/* A preprocessor directive that prevents the file from being included more than
  once. */
#ifndef CPP_ACTIVITY_THREE_INDEX_SECONDSEM
#define CPP_ACTIVITY_THREE_INDEX_SECONDSEM

/* Components */
#include "../../../components/input.cpp"
#include "../../../components/text.cpp"
#include "../../../components/view.cpp"

/* Constants */
#include "../../../../includes/constants/alignment.cpp"
#include "../../../../includes/constants/color.cpp"
#include "../../../../includes/constants/menu.cpp"
#include "../../../../includes/constants/validation.cpp"

/* Helpers */
#include "../../../../includes/helpers/cleanUp.cpp"

/* Activity three helpers */
#include "functions/calculateCircle.cpp"
#include "functions/calculateRectangle.cpp"
#include "functions/calculateSquare.cpp"
#include "functions/calculateTriangle.cpp"

/* It's a function declaration. */
void activityThreeHeading();

/**
 * Activity Three
 *
 * Instruction:
 *    Using C++ create a program that will compute the area of Circle, Triangle,
 * Square, Rectangle
 *
 * @param currentMenu The current menu that the user is in.
 */
void activityThree(std::string currentMenu) {
  /* Declaring variables. */
  int reAlignLabelYCoordinate = ALIGNMENTY31;
  int reAlignErrorMsgYCoordinate = ALIGNMENTY35;

  std::string expectedArrayOfValue[] = {};
  int arrayLength = 0; // none

  std::string label = "Select Shape Type";
  std::string userChoice;

  /* It display the heading */
  activityThreeHeading();

  /* It handles user input and prints an error if there is an error. */
  input<std::string>(label, userChoice, expectedArrayOfValue, arrayLength,
                     RESTRICTED_INPUT, reAlignLabelYCoordinate,
                     reAlignErrorMsgYCoordinate);
  /* Square */
  if (userChoice == MENU_ITEM_1) {
    calculateSquare(currentMenu, activityThreeHeading);
  }
  /* Rectangle */
  if (userChoice == MENU_ITEM_2) {
    calculateRectangle(currentMenu, activityThreeHeading);
  }

  /* Triangle */
  if (userChoice == MENU_ITEM_3) {
    calculateTriangle(currentMenu, activityThreeHeading);
  }

  /* Circle */
  if (userChoice == MENU_ITEM_4) {
    calculateCircle(currentMenu, activityThreeHeading);
  }
}

/**
 * It displays the heading for the first activity.
 */
void activityThreeHeading() {
  /* It's displaying the instruction for the user. */
  text("Instruction: ", TEXT_BLUE, ALIGNMENTX38, ALIGNMENTY10);
  text("Using C++ create a program that will compute the area of Circle, "
       "Triangle, Square, Rectangle.",
       TEXT_WHITE, ALIGNMENTX38, ALIGNMENTY12);

  text("Choices: ", TEXT_BLUE, ALIGNMENTX38, ALIGNMENTY14);
  text("[1]: Area of Square ", TEXT_WHITE, ALIGNMENTX38, ALIGNMENTY16);
  text("[2]: Area of Rectangle ", TEXT_WHITE, ALIGNMENTX38, ALIGNMENTY18);
  text("[3]: Area of Triangle ", TEXT_WHITE, ALIGNMENTX65, ALIGNMENTY16);
  text("[4]: Area of Circle ", TEXT_WHITE, ALIGNMENTX65, ALIGNMENTY18);
}

#endif
