/**
 * @file /src/apps/finals/index.cpp
 * @brief Final term applications
 *
 * */

/* A preprocessor directive that prevents the file from being included more than
  once. */
#ifndef CPP_INDEX_FINALS
#define CPP_INDEX_FINALS

/* Final term constants  */
#define MAX_FINAL_TERM_MENU_ITEM_LENGTH 5

/* Final term activitities*/
#include "gotoxySetterTimeGetter/index.cpp"
#include "evenOddIdentifierArray/index.cpp"
#include "functionOrientedFactorial/index.cpp"
#include "squareRootCalculator/index.cpp"

/* Final term menu */
#include "menu/showMenu.cpp"

/* Controllers */
#include "../../controllers/menu.cpp"

/* Constants */
#include "../../../includes/constants/alignment.cpp"
#include "../../../includes/constants/appType.cpp"
#include "../../../includes/constants/menu.cpp"
#include "../../../includes/constants/validation.cpp"

/* Helpers */
#include "../../../includes/helpers/cleanUp.cpp"

/* Components */
#include "../../components/header.cpp"
#include "../../components/input.cpp"
#include "../../components/menu.cpp"

/**
 * It should be in order. Like this.
 *
 * 01. squareRootCalculator()
 * 02. gotoxySetterTimeGetter()
 * 03. functionOrientedFactorial()
 * 04. evenOddIdentifierArray()
 */
void (*finalTermFunctions[MAX_FINAL_TERM_MENU_ITEM_LENGTH])(
    std::string type, std::string currentMenu) = {
    squareRootCalculator, gotoxySetterTimeGetter, functionOrientedFactorial,
    evenOddIdentifierArray};

/**
 * It handles Final term menu
 *
 * @param currentSelectedMenu This is the current selected menu item.
 * @param previousFunctionCaller This is the function that will be called when
 * the user exits the menu.
 */
void renderFinalTermApp(std::string &currentSelectedMenu,
                        void (&previousFunctionCaller)()) {

  /* Declaring variables. */
  int maxMenuLength = MAX_FINAL_TERM_MENU_ITEM_LENGTH;
  std::string userInput;
  std::string exitMenu = MENU_ITEM_5;
  int reAlignLabelYCoordinate = ALIGNMENTY23;
  int reAlignErrorMsgYCoordinate = ALIGNMENTY25;
  std::string inputLabel = "Select Application";
  std::string expectedArrayOfValue[maxMenuLength] = {
      MENU_ITEM_1, MENU_ITEM_2, MENU_ITEM_3, MENU_ITEM_4, MENU_ITEM_5};

  /* A function that clears the screen. */
  cleanUpScreen(mainMenuHeaderComponent, headerComponent);

  /* Calling the function `renderFinalTermAppMenu` and passing the value
    `MENU_ITEM_NONE` to it. */
  renderFinalTermAppMenu(MENU_ITEM_NONE);

  /* It handles user input and prints an error if there is an error. */
  input<std::string>(inputLabel, userInput, expectedArrayOfValue, maxMenuLength,
                     RESTRICTED_INPUT, reAlignLabelYCoordinate,
                     reAlignErrorMsgYCoordinate);

  /* A loop that handles user input and prints an error if there is an error. */
  while (userInput != exitMenu) {
    /* Finding the element in the array. */
    std::string foundElement = findElement<std::string>(
        expectedArrayOfValue, maxMenuLength, userInput);

    /* Checking if the user input is equal to the found element. If it is, it
    will call the function that is in the array. */
    if (userInput == foundElement) {
      for (int i = 0; i < maxMenuLength; i++) {
        if (foundElement == expectedArrayOfValue[i]) {
          cleanUpScreen(mainMenuHeaderComponent, headerComponent);
          renderFinalTermAppMenu(foundElement);

          (*finalTermFunctions[i])(FINAL_TERM_APP, foundElement);
        }
      }

      /* It handles user input and prints an error if there is an error. */
      input<std::string>(inputLabel, userInput, expectedArrayOfValue,
                         maxMenuLength, RESTRICTED_INPUT,
                         reAlignLabelYCoordinate, reAlignErrorMsgYCoordinate);
    }
  }

  /* Calling the function `renderFinalTermAppMenu` and passing the value
     `MENU_ITEM_NONE` to it. */
  renderFinalTermAppMenu(MENU_ITEM_NONE);
  /* A function that clears the screen. */
  cleanUpScreen(mainMenuHeaderComponent, headerComponent);
  /* renders previous function caller*/
  previousFunctionCaller();
  // exit
  currentSelectedMenu = MENU_ITEM_NONE;
}

#endif
