/**
 * @file /src/core/apps/secondsem/dayTimeConverter/index.cpp
 * @brief Second sem quiz two
 *
 * */

/* A preprocessor directive that prevents the file from being included more than
  once. */
#ifndef CPP_QUIZ_TWO_INDEX_SECONDSEM
#define CPP_QUIZ_TWO_INDEX_SECONDSEM

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

/* Quiz two helper functions */
#include "functions/daysConversion.cpp"
#include "functions/timeConversion.cpp"

/* It's a function declaration. */
void dayTimeConverterHeading();

/**
 * Quiz Two :: dayTimeConverter()
 *
 * Instruction:
 *     Program that converts days to years, months and remaining days
 *     Program that converts seconds to hours , minutes and remaining seconds
 *1
  @param type It's the type of the current menu.
 * @param currentMenu The current menu that the user is in.
 */
void dayTimeConverter(std::string type, std::string currentMenu) {
  /* Declaring variables. */
  int reAlignLabelYCoordinate = ALIGNMENTY31;
  int reAlignErrorMsgYCoordinate = ALIGNMENTY35;

  std::string expectedArrayOfValue[] = {};
  int arrayLength = 0; // none

  std::string userChoice;
  std::string label = "Type of conversion";

  /* It display the heading */
  dayTimeConverterHeading();

  /* It handles user input and prints an error if there is an error. */
  input<std::string>(label, userChoice, expectedArrayOfValue, arrayLength,
                     RESTRICTED_INPUT, reAlignLabelYCoordinate,
                     reAlignErrorMsgYCoordinate);

  /* A function that review the current screen. */
  reViewMainScreen(type, currentMenu, dayTimeConverterHeading);

  /* It's checking if the user choice is equal to 1 or 2. If it is equal to 1,
  it will call the renderDaysConversion function. If it is equal to 2, it will
  call the renderTimeConversion function. */
  if (userChoice == MENU_ITEM_1) {
    renderDaysConversion(type, currentMenu, dayTimeConverterHeading);
  }

  if (userChoice == MENU_ITEM_2) {
    renderTimeConversion(type, currentMenu, dayTimeConverterHeading);
  }
}

/**
 * It displays the heading for the quiz two.
 */
void dayTimeConverterHeading() {
  /* It's displaying the instruction for the user. */
  text("Instruction: ", TEXT_BLUE, ALIGNMENTX38, ALIGNMENTY10);
  text("Program that converts days to years, months and remaining days"
       "meter.",
       TEXT_WHITE, ALIGNMENTX38, ALIGNMENTY12);
  text("Program that converts seconds to hours , minutes and remaining seconds",
       TEXT_WHITE, ALIGNMENTX38, ALIGNMENTY13);
  text("Choices", TEXT_BLUE, ALIGNMENTX38, ALIGNMENTY15);
  text("[1] Days Conversion", TEXT_WHITE, ALIGNMENTX38, ALIGNMENTY17);
  text("[2] Time Conversion", TEXT_WHITE, ALIGNMENTX38, ALIGNMENTY19);
}

#endif
