/**
 * @file /src/core/components/input.cpp
 * @brief A component that is used to create a complete input style with generic
 * datatype.
 *
 * */

#ifndef CPP_INPUT_COMPONENT
#define CPP_INPUT_COMPONENT

#include "../../includes/constants/alignment.cpp"
#include "../../includes/helpers/cleanUp.cpp"
#include "../../includes/helpers/gotoxy.cpp"

#include "../../includes/structures/inputParameter.cpp"

#include "./header.cpp"
#include "./menu.cpp"
#include "./text.cpp"

#include <iomanip>
#include <limits>

template <typename T>

void inputStyle() {
  int symbolLength = 31;
  std::string generatedSymbol31 = generateSymbol("-", symbolLength);

  text(generatedSymbol31, TEXT_WHITE, ALIGNMENTX2,
       reAlignLabelYCoordinate - ALIGNMENTY1);
  text(generatedSymbol31, TEXT_WHITE, ALIGNMENTX2,
       reAlignLabelYCoordinate + ALIGNMENTY1);
}

void input(InputParameter param) {
  inputStyle(); // append input style (border)

  int restrictedInput = 1;
  int maximumInputLength = 10;

  text(param.label + ": ", TEXT_WHITE, ALIGNMENTX2,
       param.reAlignLabelYCoordinate);

  while (!(std::cin >> std::setw(param.isInputRestrictedForSingleValue
                                     ? restrictedInput
                                     : maximumInputLength) >>
           referenceValue) &&
         !(std::cin.good())) {

    text(param.errorMessage, TEXT_LIGHT_RED, ALIGNMENTX2,
         param.reAlignErrorMsgYCoordinate);

    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  }

  std::cin.clear();
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

#endif
