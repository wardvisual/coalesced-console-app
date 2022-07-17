/**
 * @file /src/core/apps/secondsem/groupActivity/functions/index.cpp
 * @brief A helper function
 *
 * */

/* A preprocessor directive that prevents the file from being included more than
  once. */
#ifndef CPP_GROUP_ACTIVITY_FUNCTION_SECONDSEM
#define CPP_GROUP_ACTIVITY_FUNCTION_SECONDSEM

/* Components */
#include "../../../../components/input.cpp"
#include "../../../../components/text.cpp"
#include "../../../../components/view.cpp"

/* Constants */
#include "../../../../../includes/constants/alignment.cpp"
#include "../../../../../includes/constants/color.cpp"
#include "../../../../../includes/constants/validation.cpp"

/* Helpers */
#include "../../../../../includes/helpers/cleanUp.cpp"

/**
 * It handles user input and prints an error if there is an error.
 *
 * @param currentMenu The current menu.
 * @param type The type of number.
 * @param reViewHeading A function that review the current screen.
 */
template <typename T>
void calculate(std::string currentMenu, std::string type,
               void (&reViewHeading)()) {
  /* Declaring variables. */
  int reAlignLabelYCoordinate = ALIGNMENTY31;
  int reAlignErrorMsgYCoordinate = ALIGNMENTY35;

  T expectedArrayOfValue[] = {};
  int arrayLength = 0; // none

  T firstNumber, secondNumber, sumResult = 0, qoutientResult = 0,
                               productResult = 0, differenceResult = 0;
  std::string firstNumberLabel = "Enter first number";
  std::string secondNumberLabel = "Enter second number";

  /* A function that review the current screen. */
  reViewMainScreen(currentMenu, reViewHeading);

  /* displays type of number */
  text("Number type: " + type, TEXT_WHITE, ALIGNMENTX38, ALIGNMENTY21);

  /* It handles user input and prints an error if there is an error. */
  input<T>(firstNumberLabel, firstNumber, expectedArrayOfValue, arrayLength,
           !RESTRICTED_INPUT, reAlignLabelYCoordinate,
           reAlignErrorMsgYCoordinate);

  /* A function that review the current screen. */
  reViewMainScreen(currentMenu, reViewHeading);

  /* displays type of number */
  text("Number type: " + type, TEXT_WHITE, ALIGNMENTX38, ALIGNMENTY21);
  /* It's displaying the result of the user input. */
  text("Result: ", TEXT_BLUE, ALIGNMENTX38, ALIGNMENTY23);
  text("First number: ", TEXT_WHITE, ALIGNMENTX38, ALIGNMENTY25);
  setDecimalValue(firstNumber, TEXT_WHITE, ALIGNMENTX54, ALIGNMENTY25);

  /* It handles user input and prints an error if there is an error. */
  input<T>(secondNumberLabel, secondNumber, expectedArrayOfValue, arrayLength,
           !RESTRICTED_INPUT, reAlignLabelYCoordinate,
           reAlignErrorMsgYCoordinate);

  /* A function that review the current screen. */
  reViewMainScreen(currentMenu, reViewHeading);

  /* Calculations. */
  sumResult = (firstNumber + secondNumber);
  qoutientResult = (firstNumber / secondNumber);
  productResult = (firstNumber * secondNumber);
  differenceResult = (firstNumber - secondNumber);

  /* displays type of number */
  text("Number type: " + type, TEXT_WHITE, ALIGNMENTX38, ALIGNMENTY21);
  text("Result: ", TEXT_BLUE, ALIGNMENTX38, ALIGNMENTY23);
  /* It's displaying the result of the user input. */
  text("First number: ", TEXT_WHITE, ALIGNMENTX38, ALIGNMENTY25);
  setDecimalValue(firstNumber, TEXT_WHITE, ALIGNMENTX54, ALIGNMENTY25);

  text("Second number: ", TEXT_WHITE, ALIGNMENTX38, ALIGNMENTY27);
  setDecimalValue(secondNumber, TEXT_WHITE, ALIGNMENTX54, ALIGNMENTY27);

  text("Sum: ", TEXT_WHITE, ALIGNMENTX38, ALIGNMENTY29);
  setDecimalValue(secondNumber, TEXT_WHITE, ALIGNMENTX44, ALIGNMENTY29);

  text("Qoutient: ", TEXT_WHITE, ALIGNMENTX38, ALIGNMENTY31);
  setDecimalValue(qoutientResult, TEXT_WHITE, ALIGNMENTX48, ALIGNMENTY31);

  text("Product: ", TEXT_WHITE, ALIGNMENTX55, ALIGNMENTY29);
  setDecimalValue(productResult, TEXT_WHITE, ALIGNMENTX64, ALIGNMENTY29);

  text("Difference: ", TEXT_WHITE, ALIGNMENTX55, ALIGNMENTY31);
  setDecimalValue(differenceResult, TEXT_WHITE, ALIGNMENTX68, ALIGNMENTY31);
}

#endif
