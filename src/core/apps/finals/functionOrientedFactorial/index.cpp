/**
 * @file /src/core/apps/finals/functionOrientedFactorial/index.cpp
 * @brief Final term activity one
 *
 * */

/* A preprocessor directive that prevents the file from being included more than
  once. */
#ifndef CPP_FUNCTION_ORIENTED_FACTORIAL_FINAL_TERM
#define CPP_FUNCTION_ORIENTED_FACTORIAL_FINAL_TERM

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
#include "../../../../includes/helpers/math.cpp"

/* It's a function declaration. */
void functionOrientedFactorialHeading();

/**
 * Activity Three :: functionOrientedFactorial()
 *
 * Instruction:
 *    Create a function-oriented program that computes the factorial n value of
 * N. Display the computed factorial value on the screen.
 *
 *  @param type It's the type of the current menu.
 * @param currentMenu The current menu that the user is in.
 */
void functionOrientedFactorial(std::string type, std::string currentMenu) {
  /* Declaring variables. */
  int reAlignLabelYCoordinate = ALIGNMENTY23;
  int reAlignErrorMsgYCoordinate = ALIGNMENTY29;

  int expectedArrayOfValue[] = {};
  int arrayLength = 0; // none

  int userInput, computedFactorial;
  std::string label = "Enter a number";

  /* It display the heading */
  functionOrientedFactorialHeading();

  /* It handles user input and prints an error if there is an error. */
  input<int>(label, userInput, expectedArrayOfValue, arrayLength,
             !RESTRICTED_INPUT, reAlignLabelYCoordinate,
             reAlignErrorMsgYCoordinate);

  /* A function that review the current screen. */
  reViewMainScreen(type, currentMenu, functionOrientedFactorialHeading);

  /* Calculations */
  computedFactorial = calculateFactorial(userInput);

  /* It's displaying the result of the user input. */
  text("Result: ", TEXT_BLUE, ALIGNMENTX38, ALIGNMENTY15);
  text("Inputted Number: " + std::to_string(userInput), TEXT_WHITE,
       ALIGNMENTX38, ALIGNMENTY17);
  text("Computed Factorial: " + std::to_string(computedFactorial), TEXT_WHITE,
       ALIGNMENTX38, ALIGNMENTY19);
}

/**
 * It's displaying the
 * instruction for the user.
 */
void functionOrientedFactorialHeading() {
  text("Instruction: ", TEXT_BLUE, ALIGNMENTX38, ALIGNMENTY10);
  text("Create a function-oriented program that computes the factorial n"
       "value of N.",
       TEXT_WHITE, ALIGNMENTX38, ALIGNMENTY12);
  text("Display the computed factorial value on the screen.", TEXT_WHITE,
       ALIGNMENTX38, ALIGNMENTY13);
}

#endif
