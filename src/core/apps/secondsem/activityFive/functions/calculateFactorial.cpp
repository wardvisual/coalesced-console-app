/**
 * @file /src/core/apps/calculations.cpp
 * @brief
 *
 * */

#ifndef CPP_CALCULATE_FACTORIAL_ACTIVITY_FIVE_SECONDSEM
#define CPP_CALCULATE_FACTORIAL_ACTIVITY_FIVE_SECONDSEM

#include "../../../../../includes/constants/alignment.cpp"
#include "../../../../../includes/constants/color.cpp"
#include "../../../../components/text.cpp"

#include "../../../../components/view.cpp"

void calculateFactorial(std::string currentMenu, int userInput,
                        void (&heading)()) {
  int startingNumber = 1;
  int calculationResult = 1;

  for (int i = userInput; i >= startingNumber; i--) {
    calculationResult = calculationResult * i;
  }

  text("Result", TEXT_BLUE, ALIGNMENTX38, ALIGNMENTY16);
  text("Number Type: Even", TEXT_WHITE, ALIGNMENTX38, ALIGNMENTY18);
  text("Inputted Number: " + std::to_string(userInput), TEXT_WHITE,
       ALIGNMENTX38, ALIGNMENTY20);
  text("Factorial: " + std::to_string(calculationResult), TEXT_WHITE,
       ALIGNMENTX38, ALIGNMENTY22);
}

#endif