/**
 * @file /src/core/apps/finals/gotoxySetterTimeGetter/index.cpp
 * @brief Final term activity two
 *
 * */

/* A preprocessor directive that prevents the file from being included more than
  once. */
#ifndef CPP_GOTOXY_SETTER_TIME_GETTER_FINAL_TERM
#define CPP_GOTOXY_SETTER_TIME_GETTER_FINAL_TERM

/* Final term helpers */
#include "functions/getTimeDate.cpp"

/* Components */
#include "../../../components/input.cpp"
#include "../../../components/text.cpp"
#include "../../../components/view.cpp"

/* Constants */
#include "../../../../includes/constants/alignment.cpp"
#include "../../../../includes/constants/color.cpp"
#include "../../../../includes/constants/validation.cpp"

/* Helpers */
#include "../../../../includes/helpers/cleanUp.cpp"

/* It's a function declaration. */
void gotoxySetterTimeGetterHeading();

/**
 * Activity Two :: gotoxySetterTimeGetter()
 *
 * Instruction:
 *    Using gotoxy function, display your full name and course at the center of
 * the screen with date and time included.
 *
 *  @param type It's the type of the current menu.
 * @param currentMenu The current menu that the user is in.
 */
void gotoxySetterTimeGetter(std::string type, std::string currentMenu) {
  /* Declaring variables. */
  int reAlignLabelYCoordinate = ALIGNMENTY23;
  int reAlignErrorMsgYCoordinate = ALIGNMENTY29;

  std::string expectedArrayOfValue[] = {};
  int arrayLength = 0; // none

  std::string userInput;
  std::string label = "Enter your name";

  /* It display the heading */
  gotoxySetterTimeGetterHeading();

  /* It handles user input and prints an error if there is an error. */
  input<std::string>(label, userInput, expectedArrayOfValue, arrayLength,
                     !RESTRICTED_INPUT, reAlignLabelYCoordinate,
                     reAlignErrorMsgYCoordinate);

  /* A function that review the current screen. */
  reViewMainScreen(type, currentMenu, gotoxySetterTimeGetterHeading);

  /* It's displaying the result of the user input. */
  text("Result: ", TEXT_BLUE, ALIGNMENTX76, ALIGNMENTY15);
  text("Inputted Name", TEXT_BLUE, ALIGNMENTX73, ALIGNMENTY17);
  text(userInput, TEXT_WHITE, ALIGNMENTX76, ALIGNMENTY19);
  text("Date & Time", TEXT_BLUE, ALIGNMENTX73, ALIGNMENTY21);
  text(getTimeDate(), TEXT_WHITE, ALIGNMENTX67, ALIGNMENTY23);
}

/**
 * It's displaying the
 * instruction for the user.
 */
void gotoxySetterTimeGetterHeading() { 
  text("Instruction: ", TEXT_BLUE, ALIGNMENTX38, ALIGNMENTY10);
  text("Using gotoxy function, display your full name and course at the center "
       "of the screen",
       TEXT_WHITE, ALIGNMENTX38, ALIGNMENTY12);
  text("with date and time included.", TEXT_WHITE, ALIGNMENTX38, ALIGNMENTY13);
}

#endif
