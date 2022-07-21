/**
 * @file /src/core/apps/finals/squareRootCalculator/index.cpp
 * @brief Final term activity one
 *
 * */

/* A preprocessor directive that prevents the file from being included more than
  once. */
#ifndef CPP_SQUARE_ROOT_CALCULATOR_FINAL_TERM
#define CPP_SQUARE_ROOT_CALCULATOR_FINAL_TERM

/* Built-in library  */
#include <cmath>

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

/* It's a function declaration. */
void squareRootCalculatorHeading();

/**
 * Activity One :: squareRootCalculator()
 *
 * Instruction:
 *    Using C++ create a program that will display the square root of a given
 * integer using sqrt() function.
 *
 *  @param type It's the type of the current menu.
 * @param currentMenu The current menu that the user is in.
 */
void squareRootCalculator(std::string type, std::string currentMenu) {
  /* Declaring variables. */
  int reAlignLabelYCoordinate = ALIGNMENTY23;
  int reAlignErrorMsgYCoordinate = ALIGNMENTY29;

  int expectedArrayOfValue[] = {};
  int arrayLength = 0; // none

  int userInput, squareRootResult = 0;
  std::string label = "Enter a number";

  /* It display the heading */
  squareRootCalculatorHeading();

  /* It handles user input and prints an error if there is an error. */
  input<int>(label, userInput, expectedArrayOfValue, arrayLength,
             !RESTRICTED_INPUT, reAlignLabelYCoordinate,
             reAlignErrorMsgYCoordinate);

  /* A function that review the current screen. */
  reViewMainScreen(type, currentMenu, squareRootCalculatorHeading);

  /* Calculations. */
  squareRootResult = sqrt(userInput);

  /* It's displaying the result of the user input. */
  text("Result: ", TEXT_BLUE, ALIGNMENTX38, ALIGNMENTY15);
  text("Inputted Number: " + std::to_string(userInput), TEXT_WHITE,
       ALIGNMENTX38, ALIGNMENTY17);
  text("Square Root: " + std::to_string(squareRootResult), TEXT_WHITE,
       ALIGNMENTX38, ALIGNMENTY19);
}

/**
 * It's displaying the
 * instruction for the user.
 */
void squareRootCalculatorHeading() {
  text("Instruction: ", TEXT_BLUE, ALIGNMENTX38, ALIGNMENTY10);
  text("Using C++ create a program that will display the square root of "
       "a given integer using",
       TEXT_WHITE, ALIGNMENTX38, ALIGNMENTY12);
  text("sqrt() function.", TEXT_WHITE, ALIGNMENTX38, ALIGNMENTY13);
}

#endif
