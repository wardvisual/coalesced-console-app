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

  /* If user input is char type then lowercase */
  if (compareTypeId(referenceValue, CHAR_TYPE_ID)) {
    lowerCaseCharacter(referenceValue);
  }

  /* Validating input for char and string type */
  if (arrayLength > nonValidArrayLength) {
    std::cin >>
        std::setw(isRestricted ? restrictedInput : maximumInputLength) >>
        referenceValue;

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
  } else {
    /* for integer type */
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
