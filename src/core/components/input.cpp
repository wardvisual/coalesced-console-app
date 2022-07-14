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
#include "../../includes/helpers/string.cpp"

#include "../../includes/constants/dataType.cpp"

#include "./header.cpp"
#include "./menu.cpp"
#include "./text.cpp"

#include <iomanip>
#include <limits>

// void inputStyle(int labelYCoordinate) {
//   int symbolCount = 31;
//   std::string generatedSymbol31 = generateSymbol("-", symbolCount);

//   text(generatedSymbol31, TEXT_WHITE, ALIGNMENTX2,
//        labelYCoordinate - ALIGNMENTY1);
//   text(generatedSymbol31, TEXT_WHITE, ALIGNMENTX2,
//        labelYCoordinate + ALIGNMENTY1);
// }

template <typename T>
void input(std::string &label, T &referenceValue, bool isRestricted,
           int labelYCoordinate, int errorMsgYCoordinate) {

  /* Variables */
  int restrictedInput = 1;
  int maximumInputLength = 20;
  int symbolCount = 31;
  std::string errorMessage = "Invalid Input. Please try again!";
  std::string generatedSymbol31 = generateSymbol("-", symbolCount);

  /* Applying input border */
  text(generatedSymbol31, TEXT_WHITE, ALIGNMENTX2,
       labelYCoordinate - ALIGNMENTY1);
  text(generatedSymbol31, TEXT_WHITE, ALIGNMENTX2,
       labelYCoordinate + ALIGNMENTY1);

  /* Setting up input label properties */
  text(label + ": ", TEXT_WHITE, ALIGNMENTX2, labelYCoordinate);

  /* Lowercase user input if type id is equal to char type id */
  (!compareTypeId(referenceValue, CHAR_TYPE_ID)) ?: tolower(referenceValue);

  /* Validating input */
  while (!(std::cin >>
           std::setw(isRestricted ? restrictedInput : maximumInputLength) >>
           referenceValue) &&
         !(std::cin.good())) {

    /* Displaying error message */
    text(errorMessage, TEXT_LIGHT_RED, ALIGNMENTX2, errorMsgYCoordinate);

    /* Cleaning Up */
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  }

  /* Cleaning Up */
  std::cin.clear();
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

#endif
