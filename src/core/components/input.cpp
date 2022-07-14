/**
 * @file /src/core/components/input.cpp
 * @brief A component that is used to create a complete input style with generic
 * datatype.
 *
 * */

#ifndef CPP_INPUT_COMPONENT
#define CPP_INPUT_COMPONENT

#include "../../includes/constants/alignment.cpp"
#include "../../includes/helpers/gotoxy.cpp"
#include "./text.cpp"

#include <iomanip>
#include <limits>

template <typename T>

// void restrictInput() {}
// bool isInputRestrictedForSingleValue;

void input(std::string label, T &referenceValue) {
  int restrictedInput = 1;
  int generatedSymbolLength = 31;

  std::string generatedSymbol31 = generateSymbol("-", generatedSymbolLength);
  std::string errorMessage = "Invalid Input. Please try again!";

  /* Input Border */
  text(generatedSymbol31, TEXT_WHITE, ALIGNMENTX2, ALIGNMENTY23);
  text(generatedSymbol31, TEXT_WHITE, ALIGNMENTX2, ALIGNMENTY25);
  /* Input Border End */

  text(label + ": ", TEXT_WHITE, ALIGNMENTX2, ALIGNMENTY24);
  while (!(std::cin >> std::setw(restrictedInput) >> referenceValue) &&
         !(std::cin.good())) {

    text(errorMessage, TEXT_LIGHT_RED, ALIGNMENTX2, ALIGNMENTY26);

    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    text(label + ": ", TEXT_WHITE, ALIGNMENTX2, ALIGNMENTY24);
    std::cin >> std::setw(restrictedInput) >> referenceValue;
  }

  std::cin.clear();
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

#endif
