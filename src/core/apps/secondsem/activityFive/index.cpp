/**
 * @file /src/core/apps/secondsem/activityFive/index.cpp
 * @brief
 *
 * */

#ifndef CPP_ACTIVTY_FIVE_INDEX_SECONDSEM
#define CPP_ACTIVTY_FIVE_INDEX_SECONDSEM

#include "../../../components/input.cpp"
#include "../../../components/text.cpp"
#include "../../../components/view.cpp"

#include "../../../../includes/constants/alignment.cpp"
#include "../../../../includes/constants/color.cpp"
#include "../../../../includes/constants/menu.cpp"
#include "../../../../includes/constants/validation.cpp"

#include "../../../../includes/helpers/cleanUp.cpp"

#include "constants.cpp"
#include "functions/calculateFactorial.cpp"
#include "functions/calculateSum.cpp"

void activityFiveHeading();

void activityFive(std::string currentMenu) {
  int reAlignLabelYCoordinate = ALIGNMENTY31;
  int reAlignErrorMsgYCoordinate = ALIGNMENTY35;

  int expectedArrayOfValueForInt[] = {};
  char expectedArrayOfValueForChar[] = {};
  int arrayLength = 0; // none

  int userEnteredInteger;
  char isUserWantsToContinue;
  std::string calculationLabel = "Enter a number";
  std::string defaultLabel = "Do you want to continue?";

  activityFiveHeading();

  do {
    reViewMainScreen(currentMenu, activityFiveHeading);

    input<int>(calculationLabel, userEnteredInteger, expectedArrayOfValueForInt,
               arrayLength, !RESTRICTED_INPUT, reAlignLabelYCoordinate,
               reAlignErrorMsgYCoordinate);

    if (userEnteredInteger % TWO_EVEN_NUMBER == STARTING_EVEN_NUMBER) {
      calculateFactorial(currentMenu, userEnteredInteger, activityFiveHeading);
    } else {
      calculateSum(currentMenu, userEnteredInteger, activityFiveHeading);
    }

    input<char>(defaultLabel, isUserWantsToContinue,
                expectedArrayOfValueForChar, arrayLength, RESTRICTED_INPUT,
                reAlignLabelYCoordinate, reAlignErrorMsgYCoordinate);
  } while (std::tolower(isUserWantsToContinue) == DEFAULT_YES);

  reViewMainScreen(currentMenu, activityFiveHeading);
}

void activityFiveHeading() {
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
