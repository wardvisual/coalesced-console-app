/* clang-format on */

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
#include "../../includes/helpers/dataType.cpp"
#include "../../includes/helpers/gotoxy.cpp"
#include "../../includes/helpers/search.cpp"

#include "../../includes/constants/dataType.cpp"

#include "./header.cpp"
#include "./menu.cpp"
#include "./text.cpp"

#include <iomanip>
#include <limits>

void inputBorder(int labelYCoordinate);

template <typename T>
void input(std::string &label, T &referenceValue, T arrayValues[],
           int arrayLength, bool isRestricted, int labelYCoordinate,
           int errorMsgYCoordinate) {

  /* Variables */
  int restrictedInput = 1;
  int maximumInputLength = 20;
  int nonValidArrayLength = 0;
  int firstIndex = 0;
  std::string errorMessage = "Invalid Input. Please try again!";

  /* Applying border style */
  inputBorder(labelYCoordinate);

  /* Setting up input label properties */
  text(label + ": ", TEXT_WHITE, ALIGNMENTX2, labelYCoordinate);

  /* Validating input */
  // String
  if (compareTypeId(referenceValue, STRING_TYPE_ID)) {
    std::cin >>
        std::setw(isRestricted ? restrictedInput : maximumInputLength) >>
        referenceValue;
  }

  // Char
  if (compareTypeId(referenceValue, CHAR_TYPE_ID)) {
    /* If user input is char type then lowercase */

    std::cin >>
        std::setw(isRestricted ? restrictedInput : maximumInputLength) >>
        referenceValue;

    // std::tolower(referenceValue);

    while (!isInArray<T>(arrayValues, arrayLength, referenceValue)) {
      /* Displaying error message */
      text(errorMessage, TEXT_LIGHT_RED, ALIGNMENTX2, errorMsgYCoordinate);

      /* Clean Up */
      std::cin.clear();
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

      text(label + ": ", TEXT_WHITE, ALIGNMENTX2, labelYCoordinate);
      std::cin >>
          std::setw(isRestricted ? restrictedInput : maximumInputLength) >>
          referenceValue;
    }
  }

  // Integer
  if (compareTypeId(referenceValue, INTEGER_TYPE_ID)) {
    while (std::cin >>
               std::setw(isRestricted ? restrictedInput : maximumInputLength) >>
               referenceValue &&
           !std::cin.good()) {

      /* Displaying error message */
      text(errorMessage, TEXT_LIGHT_RED, ALIGNMENTX2, errorMsgYCoordinate);

      /* Clean Up */
      std::cin.clear();
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
  }

  /* Clean Up */
  std::cin.clear();
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

void inputBorder(int labelYCoordinate) {
  int symbolCount = 31;
  std::string generatedSymbol31 = generateSymbol("-", symbolCount);

  text(generatedSymbol31, TEXT_WHITE, ALIGNMENTX2,
       labelYCoordinate - ALIGNMENTY1);
  text(generatedSymbol31, TEXT_WHITE, ALIGNMENTX2,
       labelYCoordinate + ALIGNMENTY1);
}

#endif
