/* clang-format on */

/**
 * @file /src/core/components/input.cpp
 * @brief A component for handling user inputs
 *
 * */

/* A preprocessor directive that prevents the file from being included more than
  once. */
#ifndef CPP_INPUT_COMPONENT
#define CPP_INPUT_COMPONENT

/* Built-in library */
#include <iomanip>
#include <limits>

/* Constants */
#include "../../includes/constants/alignment.cpp"
#include "../../includes/constants/dataType.cpp"

/* Helpers Functions */
#include "../../includes/helpers/cleanUp.cpp"
#include "../../includes/helpers/dataType.cpp"
#include "../../includes/helpers/gotoxy.cpp"
#include "../../includes/helpers/search.cpp"

/* Component */
#include "./header.cpp"
#include "./menu.cpp"
#include "./text.cpp"

/* A function prototype. */
void inputBorder(int labelYCoordinate);

/**
 * It takes a label, a reference value, an array of values, the length of the
 * array, a boolean value to determine if the input is restricted, the y
 * coordinate of the label, and the y coordinate of the error message
 *
 * @param label The label of the input.
 * @param referenceValue The variable that will be assigned the value of the
 * input.
 * @param arrayValues The array of values that the user can input.
 * @param arrayLength The length of the array.
 * @param isRestricted If true, the input will be restricted to 1 character.
 * @param labelYCoordinate The y coordinate of the label.
 * @param errorMsgYCoordinate The Y coordinate of the error message.
 */
template <typename T>
void input(std::string &label, T &referenceValue, T arrayValues[],
           int arrayLength, bool isRestricted, int labelYCoordinate,
           int errorMsgYCoordinate,
           std::string errorMessage = "Invalid Input. Please try again!") {

  /* Variables */
  int restrictedInput = 1;
  int maximumInputLength = 20;
  int nonValidArrayLength = 0;
  int firstIndex = 0;
  std::string stringHasSpecialCharacterErrorMessage =
      "Input shouldn't have any special characters.";

  /* Applying border style */
  inputBorder(labelYCoordinate);

  /* Setting up input label properties */
  text(label + ": ", TEXT_WHITE, ALIGNMENTX2, labelYCoordinate);

  /* Validating input */
  if (arrayLength > nonValidArrayLength) {
    std::cin >>
        std::setw(isRestricted ? restrictedInput : maximumInputLength) >>
        referenceValue;

    /* Checking if the input is in the array. */
    while (!isInArray<T>(arrayValues, arrayLength, referenceValue)) {
      /* Displaying error message */
      text(errorMessage, TEXT_LIGHT_RED, ALIGNMENTX2, errorMsgYCoordinate);

      /* Clean Up */
      std::cin.clear();
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

      /* Label */
      text(label + ": ", TEXT_WHITE, ALIGNMENTX2, labelYCoordinate);

      /* Asking the user to reinput a value */
      std::cin >>
          std::setw(isRestricted ? restrictedInput : maximumInputLength) >>
          referenceValue;
    }
  } else {
    /* without array */
    /* Checking if the input is valid. */
    while (!(std::cin >>
             std::setw(isRestricted ? restrictedInput : maximumInputLength) >>
             referenceValue) &&
           std::cin.fail()) {

      /* Displaying error message */
      text(errorMessage, TEXT_LIGHT_RED, ALIGNMENTX2, errorMsgYCoordinate);

      /* Clean Up */
      std::cin.clear();
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

      /* Label */
      text(label + ": ", TEXT_WHITE, ALIGNMENTX2, labelYCoordinate);

      /* Asking the user to reinput a value */
      std::cin >>
          std::setw(isRestricted ? restrictedInput : maximumInputLength) >>
          referenceValue;
    }
  }

  /* Clean Up */
  std::cin.clear();
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

/**
 * This function generates a string of 31 hyphens and then displays it twice,
 * once above and once below the label.
 *
 * @param labelYCoordinate The y coordinate of the label.
 */
void inputBorder(int labelYCoordinate) {
  int symbolCount = 31;
  std::string generatedSymbol31 = generateSymbol("-", symbolCount);

  text(generatedSymbol31, TEXT_WHITE, ALIGNMENTX2,
       labelYCoordinate - ALIGNMENTY1);
  text(generatedSymbol31, TEXT_WHITE, ALIGNMENTX2,
       labelYCoordinate + ALIGNMENTY1);
}

#endif
