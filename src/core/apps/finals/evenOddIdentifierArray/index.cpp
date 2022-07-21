/**
 * @file /src/core/apps/finals/evenOddIdentifierArray/index.cpp
 * @brief Final term activity four
 *
 * */

/* A preprocessor directive that prevents the file from being included more than
  once. */
#ifndef CPP_ARRAY_EVEN_ODD_IDENTIFIER_FINAL_TERM
#define CPP_ARRAY_EVEN_ODD_IDENTIFIER_FINAL_TERM

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
void evenOddIdentifierArrayHeading();

/**
 * Activity Four :: evenOddIdentifierArray()
 *
 * Instruction:
 *    Using One-Dimensional Array create a program that will determine the odd
 * and even numbers from 1 to N. N is a user input value.
 *
 *  @param type It's the type of the current menu.
 * @param currentMenu The current menu that the user is in.
 */
void evenOddIdentifierArray(std::string type, std::string currentMenu) {
  /* Declaring variables. */
  int reAlignLabelYCoordinate = ALIGNMENTY23;
  int reAlignErrorMsgYCoordinate = ALIGNMENTY25;

  int expectedArrayOfValue[] = {};
  int arrayLength = 0; // none

  int userInput, singleCount = 1;
  std::string label = "Enter max array length";

  /* It display the heading */
  evenOddIdentifierArrayHeading();

  /* It handles user input and prints an error if there is an error. */
  input<int>(label, userInput, expectedArrayOfValue, arrayLength,
             !RESTRICTED_INPUT, reAlignLabelYCoordinate,
             reAlignErrorMsgYCoordinate);

  /* A function that review the current screen. */
  reViewMainScreen(type, currentMenu, evenOddIdentifierArrayHeading);

  int arrayOfInputtedMaxArrayLength[userInput];

  for (int i = 1; i <= userInput; i++) {
    arrayOfInputtedMaxArrayLength[i] = i;
  }

  for (int i = 1; i <= userInput; i++) {
    if (isEven(arrayOfInputtedMaxArrayLength[i])) {
      text(std::to_string(arrayOfInputtedMaxArrayLength[i]), TEXT_WHITE,
           ALIGNMENTX39, ALIGNMENTY17 + i);
    } else {
      text(std::to_string(arrayOfInputtedMaxArrayLength[i]), TEXT_WHITE,
           ALIGNMENTX60, ALIGNMENTY17 + i + singleCount);
    }
  }

  /* It's displaying the result of the user input. */
  text("Result: ", TEXT_BLUE, ALIGNMENTX38, ALIGNMENTY15);
  text("Even Number(s): ", TEXT_WHITE, ALIGNMENTX38, ALIGNMENTY17);
  text("Odd Number(s): ", TEXT_WHITE, ALIGNMENTX60, ALIGNMENTY17);
}

/**
 * It's displaying the
 * instruction for the user.
 */
void evenOddIdentifierArrayHeading() {
  text("Instruction: ", TEXT_BLUE, ALIGNMENTX38, ALIGNMENTY10);
  text("Using One-Dimensional Array create a program that will determine"
       "the odd and even numbers",
       TEXT_WHITE, ALIGNMENTX38, ALIGNMENTY12);
  text("from 1 to N. N is a user input value.", TEXT_WHITE, ALIGNMENTX38,
       ALIGNMENTY13);
}

#endif
