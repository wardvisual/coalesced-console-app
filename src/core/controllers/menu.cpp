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
#include "../../core/apps/finals/index.cpp"
#include "../../core/apps/information/index.cpp"
#include "../../core/apps/midterm/index.cpp"
#include "../../core/apps/secondsem/index.cpp"

/* Constants */
#include "../../includes/constants/alignment.cpp"
#include "../../includes/constants/color.cpp"
#include "../../includes/constants/menu.cpp"
#include "../../includes/constants/validation.cpp"

/* Helper Functions */
#include "../../includes/helpers/cleanUp.cpp"
#include "../../includes/helpers/search.cpp"

/**
 * It handles the main menu of the application
 */
void mainMenuController() {
  std::string userInput;
  int maxMenuLength = 6;
  bool isContinues = true;
  std::string inputLabel = "Select Menu";
  int reAlignLabelYCoordinate = ALIGNMENTY24,
      reAlignErrorMsgYCoordinate = ALIGNMENTY26;
  std::string expectedArrayOfValue[maxMenuLength] = {MENU_ITEM_1, MENU_ITEM_2,
                                                     MENU_ITEM_3, MENU_ITEM_4,
                                                     MENU_ITEM_5, MENU_ITEM_6};

  /* It displays the menu items without the selected item.*/
  menuComponent(MENU_ITEM_NONE);

  do {
    std::string exitMenu = MENU_ITEM_6;
    cleanUpScreen(mainMenuHeaderComponent, headerComponent);

    /* renders default menu */
    displaySystemInformation();
    menuComponent(MENU_ITEM_1);

    /* It handles user input and prints an error if there is an error. */
    input<std::string>(inputLabel, userInput, expectedArrayOfValue,
                       maxMenuLength, RESTRICTED_INPUT, reAlignLabelYCoordinate,
                       reAlignErrorMsgYCoordinate);

    /* Cleaning up the screen and displaying the menu. */
    cleanUpScreen(mainMenuHeaderComponent, headerComponent);
    menuComponent(userInput);

    /* Checking if the user input is equal to the exit menu. If it is equal to
          the exit menu, it will display a message and exit the application. */
    if (userInput == exitMenu) {
      isContinues = false;

      text("Thank you for using this application!", TEXT_BLUE, ALIGNMENTX2,
           ALIGNMENTY24);

      std::cout << "\n\n\n";
    }

    /* Checking if the user input is equal to the found element. If it is
    equal to the found element, it will display the menu item. */
    if (userInput == MENU_ITEM_1) {
      displaySystemInformation();
    }

    if (userInput == MENU_ITEM_2) {
      displaySecondSem(userInput, mainMenuController);
    }

    if (userInput == MENU_ITEM_3) {
      displayMidterm(userInput);
    }

    if (userInput == MENU_ITEM_4) {
      displayFinalTerm(userInput, mainMenuController);
    }

  } while (isContinues);
}

#endif