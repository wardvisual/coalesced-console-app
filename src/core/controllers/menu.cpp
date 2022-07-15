#include <conio.h>

#include "../components/header.cpp"
#include "../components/input.cpp"
#include "../components/menu.cpp"
#include "../components/text.cpp"

#include "../../core/apps/controller.cpp"

#include "../../includes/constants/alignment.cpp"
#include "../../includes/constants/color.cpp"
#include "../../includes/constants/keyStroke.cpp"
#include "../../includes/constants/menu.cpp"
#include "../../includes/constants/validation.cpp"

#include "../../includes/helpers/cleanUp.cpp"
#include "../../includes/helpers/dataType.cpp"

void mainMenuController() {
  char userInput;
  int reAlignLabelYCoordinate = ALIGNMENTY24,
      reAlignErrorMsgYCoordinate = ALIGNMENTY26, keyStroke = 0;
  std::string inputLabel = "Select Menu";

  /* It displays the menu items without the selected item.*/
  menuComponent(MENU_ITEM_NONE);

  do {
    input<char>(inputLabel, userInput, RESTRICTED_INPUT,
                reAlignLabelYCoordinate, reAlignErrorMsgYCoordinate);

    lowerCaseCharacter(userInput);

    /* Accessing keyboard stroke */
    keyStroke = _getch();

    if (userInput == MENU_ITEM_A) {
      cleanUpScreen(mainMenuHeaderComponent, headerComponent);
      menuComponent(MENU_ITEM_A);

      appController::systemInformation();

      /* persist selected menu */
      userInput = MENU_ITEM_A;
    }

    if (userInput == MENU_ITEM_B) {
      cleanUpScreen(mainMenuHeaderComponent, headerComponent);
      menuComponent(MENU_ITEM_B);

      /* referencing userInput and current function for exit option inside this
        controller */
      while (userInput == MENU_ITEM_B) {
        appController::secondSem(userInput, mainMenuController);
      }
    }

    if (userInput == MENU_ITEM_C) {
      cleanUpScreen(mainMenuHeaderComponent, headerComponent);
      menuComponent(MENU_ITEM_C);
    }

    if (userInput == MENU_ITEM_D) {
      cleanUpScreen(mainMenuHeaderComponent, headerComponent);
      menuComponent(MENU_ITEM_D);
    }

    if (userInput == MENU_ITEM_E) {
      cleanUpScreen(mainMenuHeaderComponent, headerComponent);
      menuComponent(MENU_ITEM_E);
    }

    if (userInput == MENU_ITEM_F) {
      keyStroke = ESCAPE_KEY;
      menuComponent(MENU_ITEM_F);

      text("Thank you for using this application!", TEXT_BLUE, ALIGNMENTX2,
           ALIGNMENTY24);

      std::cout << "\n\n";
    }
  } while (keyStroke != ESCAPE_KEY);
}
