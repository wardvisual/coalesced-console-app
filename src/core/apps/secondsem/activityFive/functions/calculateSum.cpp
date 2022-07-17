/**
 * @file /src/core/apps/calculations.cpp
 * @brief
 *
 * */

#ifndef CPP_CALCULATE_SUM_ACTIVITY_FIVE_SECONDSEM
#define CPP_CALCULATE_SUM_ACTIVITY_FIVE_SECONDSEM

#include "../../../../../includes/constants/alignment.cpp"
#include "../../../../../includes/constants/color.cpp"
#include "../../../../components/text.cpp"

#include "../../../../components/view.cpp"

void calculateSum(std::string currentMenu, int userInput, void (&heading)()) {
  int startingNumber = 1;
  int calculationResult = 0;
  int squareRoot;

  for (int i = 1; i <= userInput; i++) {
    squareRoot = i * i;
    calculationResult += squareRoot;
  }

  text("Result", TEXT_BLUE, ALIGNMENTX38, ALIGNMENTY16);
  text("Number Type: Odd", TEXT_WHITE, ALIGNMENTX38, ALIGNMENTY18);
  text("Inputted Number: " + std::to_string(userInput), TEXT_WHITE,
       ALIGNMENTX38, ALIGNMENTY20);
  text("Sum: " + std::to_string(calculationResult), TEXT_WHITE, ALIGNMENTX38,
       ALIGNMENTY22);
}

#endif