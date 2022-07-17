/**
 * @file /src/core/apps/secondsem/groupActivity/index.cpp
 * @brief Second sem group activity
 *
 * */

/* A preprocessor directive that prevents the file from being included more than
  once. */
#ifndef CPP_GROUP_ACTIVITY_SECONDSEM
#define CPP_GROUP_ACTIVITY_SECONDSEM

/* Components */
#include "../../../components/input.cpp"
#include "../../../components/text.cpp"
#include "../../../components/view.cpp"

/* Constants */
#include "../../../../includes/constants/alignment.cpp"
#include "../../../../includes/constants/color.cpp"
#include "../../../../includes/constants/validation.cpp"

/* Helpers */
#include "../../../../includes/helpers/cleanUp.cpp"

/* Group activity helpers */
#include "./functions/calculate.cpp"

/* It's a function declaration. */
void groupActivityHeading();

/**
 * Group Activity
 *
 * Instruction:
 *   Using C++ create a program that will compute the sum, difference,
 *   product and quotient of two numbers.
 *    Using integer data type
 *    Using float data type
 *
 * @param currentMenu The current menu that the user is in.
 */
void groupActivity(std::string currentMenu) {
  /* Declaring variables. */
  int reAlignLabelYCoordinate = ALIGNMENTY31;
  int reAlignErrorMsgYCoordinate = ALIGNMENTY35;

  std::string expectedArrayOfValue[] = {};
  int arrayLength = 0; // none

  std::string defaultLabel = "Type of number";
  std::string userChoice;

  /* It display the heading */
  groupActivityHeading();

  /* It handles user input and prints an error if there is an error. */
  input<std::string>(defaultLabel, userChoice, expectedArrayOfValue,
                     arrayLength, RESTRICTED_INPUT, reAlignLabelYCoordinate,
                     reAlignErrorMsgYCoordinate);

  /* A function that review the current screen. */
  reViewMainScreen(currentMenu, groupActivityHeading);

  /* It's checking if the user choice is equal to 1 or 2. If it is, it will call
     the calculate function. */
  if (userChoice == MENU_ITEM_1) {
    calculate<int>(currentMenu, "Integer", groupActivityHeading);
  }
  if (userChoice == MENU_ITEM_2) {
    calculate<float>(currentMenu, "Float", groupActivityHeading);
  }
}

/**
 * It displays the heading for the group activity.
 */
void groupActivityHeading() {
  /* It's displaying the instruction for the user. */
  text("Instruction: ", TEXT_BLUE, ALIGNMENTX38, ALIGNMENTY10);
  text("Using C++ create a program that will compute the sum, difference, "
       "product and quotient ",
       TEXT_WHITE, ALIGNMENTX38, ALIGNMENTY12);
  text("of two numbers", TEXT_WHITE, ALIGNMENTX38, ALIGNMENTY13);
  text("Type of number: ", TEXT_BLUE, ALIGNMENTX38, ALIGNMENTY15);
  text("[1]: Using integer data type", TEXT_WHITE, ALIGNMENTX38, ALIGNMENTY17);
  text("[2]: Using float data type", TEXT_WHITE, ALIGNMENTX38, ALIGNMENTY19);
}

#endif
