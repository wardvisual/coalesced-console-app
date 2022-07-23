/**
 * @file /src/core/apps/supplementary/studentManagement/index.cpp
 * @brief Second sem quiz two
 *
 * */

/* A preprocessor directive that prevents the file from being included more than
  once. */
#ifndef CPP_STUDENT_MANAGEMENT_SUPPLEMENTARY
#define CPP_STUDENT_MANAGEMENT_SUPPLEMENTARY

/* Student Management operations */
#include "./functions/create/index.cpp"

/* Student Management menu */
#include "./menu/showMenu.cpp"

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

/* It's a function declaration. */
void studentManagementHeading();

/**
 * It should be in order. Like this.
 *
 * 01. getNameCourse()
 */
void (*studentManagementMethods[4])(std::string type,
                                    std::string currentMenu) = {create};

/**
 * Supplementary One :: studentManagement()
 *
 * Instruction:
 *     Program that converts days to years, months and remaining days
 *     Program that converts seconds to hours , minutes and remaining seconds
 *1
  @param type It's the type of the current menu.
 * @param currentMenu The current menu that the user is in.
 */
void studentManagement(void (&previousMenu)(std::string menuType)) {
  /* Declaring variables. */
  int maxMenuLength = 4;
  std::string userInput;
  std::string backMenu = MENU_ITEM_4;
  int reAlignLabelYCoordinate = ALIGNMENTY25;
  int reAlignErrorMsgYCoordinate = ALIGNMENTY29;
  std::string inputLabel = "Select Operation";
  std::string expectedArrayOfValue[maxMenuLength] = {MENU_ITEM_1, MENU_ITEM_2,
                                                     MENU_ITEM_3, MENU_ITEM_4};

  /* A function that clears the screen. */
  cleanUpScreen(mainMenuHeaderComponent, headerComponent);

  /* Calling the function `studentManagementMenu` and passing the value
    `MENU_ITEM_NONE` to it. */
  studentManagementMenu(MENU_ITEM_NONE);

  /* It handles user input and prints an error if there is an error. */
  input<std::string>(inputLabel, userInput, expectedArrayOfValue, maxMenuLength,
                     RESTRICTED_INPUT, reAlignLabelYCoordinate,
                     reAlignErrorMsgYCoordinate);

  /* A loop that handles user input and prints an error if there is an error. */
  while (userInput != backMenu) {
    /* Finding the element in the array. */
    std::string foundElement = findElement<std::string>(
        expectedArrayOfValue, maxMenuLength, userInput);

    /* Checking if the user input is equal to the found element. If it is, it
    will call the function that is in the array. */
    if (userInput == foundElement) {
      for (int i = 0; i < maxMenuLength; i++) {
        if (foundElement == expectedArrayOfValue[i]) {
          cleanUpScreen(mainMenuHeaderComponent, headerComponent);
          studentManagementMenu(foundElement);
          (*studentManagementMethods[i])(STUDENT_MANAGEMENT_SYSTEM_APP,
                                         foundElement);
        }
      }

      /* It handles user input and prints an error if there is an error. */
      input<std::string>(inputLabel, userInput, expectedArrayOfValue,
                         maxMenuLength, RESTRICTED_INPUT,
                         reAlignLabelYCoordinate, reAlignErrorMsgYCoordinate);
    }
  }

  /* Calling the function `studentManagementMenu` and passing the value
     `MENU_ITEM_NONE` to it. */
  studentManagementMenu(MENU_ITEM_NONE);
  /* A function that clears the screen. */
  cleanUpScreen(mainMenuHeaderComponent, headerComponent);
  /* renders previous function caller */
  previousMenu(MENU_ITEM_NONE);
}

/**
 * It displays the heading for the quiz two.
 */
void studentManagementHeading() {
  /* It's displaying the instruction for the user. */
  text("Message: ", TEXT_BLUE, ALIGNMENTX38, ALIGNMENTY10);
  text("This application is supplementary. That means this application is not "
       "part of the laboratory",
       TEXT_WHITE, ALIGNMENTX38, ALIGNMENTY12);
  text("activities. But rather it is an application built with the personal "
       "knowledge and ",
       TEXT_WHITE, ALIGNMENTX38, ALIGNMENTY13);
  text("experiences of a programmer of this application.", TEXT_WHITE,
       ALIGNMENTX38, ALIGNMENTY14);
}

#endif
