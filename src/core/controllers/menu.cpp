/**
 * @file /src/core/controllers/menu.cpp
 * @brief A controller for handling different menus
 *
 * */

/* A preprocessor directive that prevents the file from being included more than
  once. */
#ifndef CPP_MAIN_MENU_CONTROLLER
#define CPP_MAIN_MENU_CONTROLLER

/* Built-in library  */
#include <conio.h>

/* Components */
#include "../components/header.cpp"
#include "../components/input.cpp"
#include "../components/menu.cpp"
#include "../components/text.cpp"

/* Core Applications */
#include "../../core/apps/information/index.cpp"
#include "../../core/apps/secondsem/index.cpp"

/* Constants */
#include "../../includes/constants/alignment.cpp"
#include "../../includes/constants/color.cpp"
#include "../../includes/constants/keyStroke.cpp"
#include "../../includes/constants/menu.cpp"
#include "../../includes/constants/validation.cpp"

/* Helper Functions */
#include "../../includes/helpers/cleanUp.cpp"
#include "../../includes/helpers/search.cpp"

/**
 * It handles the main menu of the application
 */
void mainMenuController() {
  int reAlignLabelYCoordinate = ALIGNMENTY24,
      reAlignErrorMsgYCoordinate = ALIGNMENTY26;
  std::string inputLabel = "Select Menu";

  int maxMenuLength = 6;
  std::string userInput;
  int keyStroke = _getch();
  std::string expectedArrayOfValue[maxMenuLength] = {MENU_ITEM_A, MENU_ITEM_B,
                                                     MENU_ITEM_C, MENU_ITEM_D,
                                                     MENU_ITEM_E, MENU_ITEM_F};

  /* It displays the menu items without the selected item.*/
  menuComponent(MENU_ITEM_NONE);

  do {
    /* renders default menu */
    displaySystemInformation();
    menuComponent(MENU_ITEM_A);

    /* It handles user input and prints an error if there is an error. */
    input<std::string>(inputLabel, userInput, expectedArrayOfValue,
                       maxMenuLength, RESTRICTED_INPUT, reAlignLabelYCoordinate,
                       reAlignErrorMsgYCoordinate);

    /* Finding the element in the array of string. */
    std::string foundElement = findElement<std::string>(
        expectedArrayOfValue, maxMenuLength, userInput);

    /* Checking if the user input is equal to the found element. */
    if (userInput == foundElement) {
      std::string currentMenuItem = userInput;
      std::string exitMenu = MENU_ITEM_F;

      /* Checking if the user input is equal to the exit menu. If it is equal to
      the exit menu, it will display a message and exit the application. */
      if (currentMenuItem == exitMenu) {

        keyStroke = ESCAPE_KEY;

        menuComponent(currentMenuItem);

        text("Thank you for using this application!", TEXT_BLUE, ALIGNMENTX2,
             ALIGNMENTY24);

        std::cout << "\n\n";
      } else {

        cleanUpScreen(mainMenuHeaderComponent, headerComponent);

        menuComponent(currentMenuItem);

        if (foundElement == MENU_ITEM_A) {
          displaySystemInformation();
        }

        if (foundElement == MENU_ITEM_B) {
          displaySecondSemMenu(currentMenuItem, mainMenuController);
        }

        // if (foundElement == MENU_ITEM_C) {
        //   midterm(currentSelectedMenu, mainMenuController);
        // }

        // if (foundElement == MENU_ITEM_D) {
        //   displaySystemInformation();
        //   finalSem(currentSelectedMenu, mainMenuController);
        // }
        // if (foundElement == MENU_ITEM_E) {
        //   supplementary(currentSelectedMenu, mainMenuController);
        // }
      }
    }
  } while (keyStroke != ESCAPE_KEY);
}

#endif