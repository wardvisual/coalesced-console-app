/**
 * @file /src/core/apps/secondsem/unitConverter/index.cpp
 * @brief Second sem quiz one
 *
 * */

/* A preprocessor directive that prevents the file from being included more than
  once. */
#ifndef CPP_QUIZ_ONE_INDEX_SECONDSEM
#define CPP_QUIZ_ONE_INDEX_SECONDSEM

/* Components */
#include "../../../components/input.cpp"
#include "../../../components/text.cpp"
#include "../../../components/view.cpp"

/* Constants */
#include "../../../../includes/constants/alignment.cpp"
#include "../../../../includes/constants/color.cpp"
#include "../../../../includes/constants/menu.cpp"
#include "../../../../includes/constants/validation.cpp"

/* Helpers */
#include "../../../../includes/helpers/cleanUp.cpp"

/* Activity three constants */
#include "constants.cpp"

/* It's a function declaration. */
void unitConverterHeading();

/**
 * Quiz One :: unitConverter()
 *
 * Instruction:
 *     Using C++ create a program that will convert mm to cm and meter.
 *
 * @param type It's the type of the current menu.
 * @param currentMenu The current menu that the user is in.
 */ 
void unitConverter(std::string type, std::string currentMenu) {
  /* Declaring variables. */
  int reAlignLabelYCoordinate = ALIGNMENTY31;
  int reAlignErrorMsgYCoordinate = ALIGNMENTY35;

  float expectedArrayOfValue[] = {};
  int arrayLength = 0; // none

  float millimeter, meter, centimeter;
  std::string label = "Enter a Millimeter Value";

  /* It display the heading */
  unitConverterHeading();

  /* It handles user input and prints an error if there is an error. */
  input<float>(label, millimeter, expectedArrayOfValue, arrayLength,
               !RESTRICTED_INPUT, reAlignLabelYCoordinate,
               reAlignErrorMsgYCoordinate);

  /* A function that review the current screen. */
  reViewMainScreen(type, currentMenu, unitConverterHeading);

  /* millimeter to meter */
  meter = (millimeter * POINT_ZERO_ZERO_ONE);
  /* millimeter to centimeter  */
  centimeter = (millimeter * POINT_ZERO_ONE);

  /* It's displaying the result of the user input. */
  text("Result: ", TEXT_BLUE, ALIGNMENTX38, ALIGNMENTY15);

  text("Entered Millimeter: ", TEXT_WHITE, ALIGNMENTX38, ALIGNMENTY17);
  setDecimalValue(millimeter, TEXT_WHITE, ALIGNMENTX59, ALIGNMENTY17);

  text("In meter: ", TEXT_WHITE, ALIGNMENTX38, ALIGNMENTY19);
  setDecimalValue(meter, TEXT_WHITE, ALIGNMENTX48, ALIGNMENTY19);

  text("In centimeter: ", TEXT_WHITE, ALIGNMENTX38, ALIGNMENTY21);
  setDecimalValue(centimeter, TEXT_WHITE, ALIGNMENTX54, ALIGNMENTY21);
}

/**
 * It displays the heading for the quiz one.
 */
void unitConverterHeading() {
  /* It's displaying the instruction for the user. */
  text("Instruction: ", TEXT_BLUE, ALIGNMENTX38, ALIGNMENTY10);
  text("Using C++ create a program that will convert mm to cm and "
       "meter.",
       TEXT_WHITE, ALIGNMENTX38, ALIGNMENTY12);
}

#endif
