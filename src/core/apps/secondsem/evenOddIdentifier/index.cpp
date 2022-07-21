/**
 * @file /src/core/apps/secondsem/evenOddIdentifier/index.cpp
 * @brief Second sem activity five
 *
 * */

/* A preprocessor directive that prevents the file from being included more than
 once. */
#ifndef CPP_ACTIVTY_FIVE_INDEX_SECONDSEM
#define CPP_ACTIVTY_FIVE_INDEX_SECONDSEM

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

/* Activity four constants */
#include "constants.cpp"

/* Activity four helpers */
#include "functions/calculateSum.cpp"
#include "functions/getFactorial.cpp"

/* It's a function declaration. */
void evenOddIdentifierHeading();

/**
 * Activity Five :: evenOddIdentifier()
 *
 * Instruction:
 *   Using C++ create a program that if the given number is even, compute the
 * factorial of N, if the given number is odd compute the sum of the squared of
 * N. The program will stop if the user type N/n and continue if the user type
 * Y/y.
 *
 *  @param type It's the type of the current menu.
 * @param currentMenu The current menu that the user is in.
 */
void evenOddIdentifier(std::string type, std::string currentMenu) {
  /* Declaring variables. */
  int reAlignLabelYCoordinate = ALIGNMENTY31;
  int reAlignErrorMsgYCoordinate = ALIGNMENTY35;

  int expectedArrayOfValueForInt[] = {};
  char expectedArrayOfValueForChar[] = {};
  int arrayLength = 0; // none

  int userEnteredInteger;
  char isUserWantsToContinue;
  std::string calculationLabel = "Enter a number";
  std::string defaultLabel = "Do you want to continue?";

  /* It display the heading */
  evenOddIdentifierHeading();

  do {
    /* A function that review the current screen. */
    reViewMainScreen(type, currentMenu, evenOddIdentifierHeading);

    /* It handles user input and prints an error if there is an error. */
    input<int>(calculationLabel, userEnteredInteger, expectedArrayOfValueForInt,
               arrayLength, !RESTRICTED_INPUT, reAlignLabelYCoordinate,
               reAlignErrorMsgYCoordinate);

    /* It's checking if the user entered number is even or odd. */
    if (userEnteredInteger % TWO_EVEN_NUMBER == STARTING_EVEN_NUMBER) {
      getFactorial(userEnteredInteger);
    } else {
      calculateSum(currentMenu, userEnteredInteger, evenOddIdentifierHeading);
    }

    /* It handles user input and prints an error if there is an error. */
    input<char>(defaultLabel, isUserWantsToContinue,
                expectedArrayOfValueForChar, arrayLength, RESTRICTED_INPUT,
                reAlignLabelYCoordinate, reAlignErrorMsgYCoordinate);
  } while (std::tolower(isUserWantsToContinue) == DEFAULT_YES);

  /* A function that review the current screen. */
  reViewMainScreen(type, currentMenu, evenOddIdentifierHeading);
}

/**
 * It displays the heading for the first activity.
 */
void evenOddIdentifierHeading() {
  /* It's displaying the instruction for the user. */
  text("Instruction: ", TEXT_BLUE, ALIGNMENTX38, ALIGNMENTY10);
  text("Using C++ create a program that if the given number is even, compute "
       "the factorial of N,",
       TEXT_WHITE, ALIGNMENTX38, ALIGNMENTY12);
  text("if the given number is odd compute the sum of the squared of N. The "
       "program will stop if the ",
       TEXT_WHITE, ALIGNMENTX38, ALIGNMENTY13);
  text("user type N/n and continue if the user type Y/y.", TEXT_WHITE,
       ALIGNMENTX38, ALIGNMENTY14);
}

#endif
