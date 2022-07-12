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
  int maxInputLength = 1;

  text(label + ": ", TEXT_WHITE, ALIGNMENTX2, ALIGNMENTY22);
  std::cin >> std::setw(maxInputLength) >> referenceValue;

  while (!std::cin.good()) {
    text("\nInvalid Input. Please try again!", TEXT_LIGHT_RED, ALIGNMENTX2,
         ALIGNMENTY23);

    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    text(label + ": ", TEXT_WHITE, ALIGNMENTX2, ALIGNMENTY22);
    std::cin >> std::setw(maxInputLength) >> referenceValue;
  }

  std::cin.clear();
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

#endif
