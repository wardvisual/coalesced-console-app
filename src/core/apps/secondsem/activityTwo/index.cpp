/**
 * @file /src/core/apps/secondsem/activityOne/index.cpp
 * @brief
 *
 * */

#ifndef CPP_ACTIVTY_TWO_SECONDSEM
#define CPP_ACTIVTY_TWO_SECONDSEM

#include "../../../components/input.cpp"
#include "../../../components/text.cpp"
#include "../../../components/view.cpp"

#include "../../../../includes/constants/alignment.cpp"
#include "../../../../includes/constants/color.cpp"
#include "../../../../includes/constants/validation.cpp"

#include "../../../../includes/helpers/cleanUp.cpp"

void activityTwoHeading();

void activityTwo(std::string currentMenu) {
  int reAlignLabelYCoordinate = ALIGNMENTY31;
  int reAlignErrorMsgYCoordinate = ALIGNMENTY35;

  int expectedArrayOfValue[] = {};
  int arrayLength = 0; // none

  int firstNumber, secondNumber, sumResult = 0;
  std::string firstNumberLabel = "Enter first number";
  std::string secondNumberLabel = "Enter second number";

  activityTwoHeading();

  input<int>(firstNumberLabel, firstNumber, expectedArrayOfValue, arrayLength,
             !RESTRICTED_INPUT, reAlignLabelYCoordinate,
             reAlignErrorMsgYCoordinate);

  reViewMainScreen(currentMenu, activityTwoHeading);

  text("Result: ", TEXT_BLUE, ALIGNMENTX38, ALIGNMENTY14);
  text("First number: " + std::to_string(firstNumber), TEXT_WHITE, ALIGNMENTX38,
       ALIGNMENTY16);

  input<int>(secondNumberLabel, secondNumber, expectedArrayOfValue, arrayLength,
             !RESTRICTED_INPUT, reAlignLabelYCoordinate,
             reAlignErrorMsgYCoordinate);

  reViewMainScreen(currentMenu, activityTwoHeading);

  sumResult = firstNumber + secondNumber;

  text("Result: ", TEXT_BLUE, ALIGNMENTX38, ALIGNMENTY14);
  text("First number: " + std::to_string(firstNumber), TEXT_WHITE, ALIGNMENTX38,
       ALIGNMENTY16);
  text("Second number: " + std::to_string(secondNumber), TEXT_WHITE,
       ALIGNMENTX38, ALIGNMENTY18);
  text("Sum result: " + std::to_string(sumResult), TEXT_WHITE, ALIGNMENTX38,
       ALIGNMENTY20);
}

void activityTwoHeading() {
  text("Instruction: ", TEXT_BLUE, ALIGNMENTX38, ALIGNMENTY10);
  text("Using C++ create a program that add two integers then display the "
       "result.",
       TEXT_WHITE, ALIGNMENTX38, ALIGNMENTY12);
}

#endif
