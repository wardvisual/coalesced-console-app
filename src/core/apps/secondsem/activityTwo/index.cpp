/**
 * @file /src/core/apps/secondsem/activityTwo/index.cpp
 * @brief Second sem activity two
 *
 * */

/* A preprocessor directive that prevents the file from being included more than
  once. */
#ifndef CPP_ACTIVTY_TWO_SECONDSEM
#define CPP_ACTIVTY_TWO_SECONDSEM

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
void activityTwoHeading();

/**
 * Activity Two
 *
 * Instruction:
 *    Using C++ create a program that add two integers then display the result.
 *
 * @param currentMenu The current menu that the user is in.
 */
void activityTwo(std::string currentMenu) {
  /* Declaring variables. */
  int reAlignLabelYCoordinate = ALIGNMENTY31;
  int reAlignErrorMsgYCoordinate = ALIGNMENTY35;

  int expectedArrayOfValue[] = {};
  int arrayLength = 0; // none

  int firstNumber, secondNumber, sumResult = 0;
  std::string firstNumberLabel = "Enter first number";
  std::string secondNumberLabel = "Enter second number";

  /* It display the heading */
  activityTwoHeading();

  /* It handles user input and prints an error if there is an error. */
  input<int>(firstNumberLabel, firstNumber, expectedArrayOfValue, arrayLength,
             !RESTRICTED_INPUT, reAlignLabelYCoordinate,
             reAlignErrorMsgYCoordinate);

  /* A function that review the current screen. */
  reViewMainScreen(currentMenu, activityTwoHeading);

  /* It's displaying the result of the user input. */
  text("Result: ", TEXT_BLUE, ALIGNMENTX38, ALIGNMENTY14);
  text("First number: " + std::to_string(firstNumber), TEXT_WHITE, ALIGNMENTX38,
       ALIGNMENTY16);

  /* It handles user input and prints an error if there is an error. */
  input<int>(secondNumberLabel, secondNumber, expectedArrayOfValue, arrayLength,
             !RESTRICTED_INPUT, reAlignLabelYCoordinate,
             reAlignErrorMsgYCoordinate);

  /* A function that review the current screen. */
  reViewMainScreen(currentMenu, activityTwoHeading);

  /* Calculations. */
  sumResult = firstNumber + secondNumber;

  /* It's displaying the result of the user input. */
  text("Result: ", TEXT_BLUE, ALIGNMENTX38, ALIGNMENTY14);
  text("First number: " + std::to_string(firstNumber), TEXT_WHITE, ALIGNMENTX38,
       ALIGNMENTY16);
  text("Second number: " + std::to_string(secondNumber), TEXT_WHITE,
       ALIGNMENTX38, ALIGNMENTY18);
  text("Sum result: " + std::to_string(sumResult), TEXT_WHITE, ALIGNMENTX38,
       ALIGNMENTY20);
}

/**
 * It displays the heading for the first activity.
 */
void activityTwoHeading() {
  /* It's displaying the instruction for the user. */
  text("Instruction: ", TEXT_BLUE, ALIGNMENTX38, ALIGNMENTY10);
  text("Using C++ create a program that add two integers then display the "
       "result.",
       TEXT_WHITE, ALIGNMENTX38, ALIGNMENTY12);
}

#endif
