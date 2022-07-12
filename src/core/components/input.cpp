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

template <typename T> void input(std::string label, T &referenceValue) {
  std::string generatedSymbol31 = generateSymbol("-", 31);

  int maxInputLength = 1;
  std::string errorMessage = "Invalid Input. Please try again!";

  text(generatedSymbol31, TEXT_WHITE, ALIGNMENTX2, ALIGNMENTY23);
  text(generatedSymbol31, TEXT_WHITE, ALIGNMENTX2, ALIGNMENTY25);

  text(label + ": ", TEXT_WHITE, ALIGNMENTX2, ALIGNMENTY24);
  std::cin >> std::setw(maxInputLength) >> referenceValue;

  while (!std::cin.good()) {
    text(errorMessage, TEXT_LIGHT_RED, ALIGNMENTX2, ALIGNMENTY26);

    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    text(label + ": ", TEXT_WHITE, ALIGNMENTX2, ALIGNMENTY24);
    std::cin >> std::setw(maxInputLength) >> referenceValue;
  }

  std::cin.clear();
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

#endif
