/**
 * @file /src/core/apps/secondsem/fourOperationsCalculator/index.cpp
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
void fourOperationsCalculatorHeading();

/**
 * Group Activity :: fourOperationsCalculator()
 *
 * Instruction:
 *   Using C++ create a program that will compute the sum, difference,
 *   product and quotient of two numbers.
 *    Using integer data type
 *    Using float data type
 *
 * @param type It's the type of the current menu.
 * @param currentMenu The current menu that the user is in.
 */
void fourOperationsCalculator(std::string type, std::string currentMenu) {
  /* Declaring variables. */
  int reAlignLabelYCoordinate = ALIGNMENTY31;
  int reAlignErrorMsgYCoordinate = ALIGNMENTY35;

  int arrayLength = 2;
  std::string expectedArrayOfValue[arrayLength] = {MENU_ITEM_1, MENU_ITEM_2};

  std::string defaultLabel = "Type of number";
  std::string userChoice;
  std::string errorMessage = "\n  Please enter a number from \n  1 to 2 only.";

  /* It display the heading */
  fourOperationsCalculatorHeading();

  /* It handles user input and prints an error if there is an error. */
  input<std::string>(defaultLabel, userChoice, expectedArrayOfValue,
                     arrayLength, RESTRICTED_INPUT, reAlignLabelYCoordinate,
                     reAlignErrorMsgYCoordinate, errorMessage);

  /* A function that review the current screen. */
  reViewMainScreen(type, currentMenu, fourOperationsCalculatorHeading);

  /* It's checking if the user choice is equal to 1 or 2. If it is, it will call
     the calculate function. */
  if (userChoice == MENU_ITEM_1) {
    calculate<int>(type, currentMenu, "Integer",
                   fourOperationsCalculatorHeading);
  }
  if (userChoice == MENU_ITEM_2) {
    calculate<float>(type, currentMenu, "Float",
                     fourOperationsCalculatorHeading);
  }
}

/**
 * It displays the heading for the group activity.
 */
void fourOperationsCalculatorHeading() {
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
