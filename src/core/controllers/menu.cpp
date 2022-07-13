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

#include "../../includes/helpers/cleanUp.cpp"

void mainMenuController() {
  int userInput, keyStroke = 0;
  std::string inputLabel = "Input";

  /* It displays the menu items without the selected item.*/
  menuComponent(MENU_ITEM_NONE);

  do {
    input<int>(inputLabel, userInput);

    keyStroke = _getch();

    if (userInput == MENU_ITEM_ONE) {
      cleanUpScreen(mainMenuHeaderComponent, headerComponent);

      menuComponent(MENU_ITEM_ONE);

      appController::systemInformation();
    }

    if (userInput == MENU_ITEM_TWO) {
      cleanUpScreen(mainMenuHeaderComponent, headerComponent);

      menuComponent(MENU_ITEM_TWO);

      appController::secondSem();
    }

    if (userInput == MENU_ITEM_THREE) {
      cleanUpScreen(mainMenuHeaderComponent, headerComponent);
      menuComponent(MENU_ITEM_THREE);
    }

    if (userInput == MENU_ITEM_FOUR) {
      cleanUpScreen(mainMenuHeaderComponent, headerComponent);
      menuComponent(MENU_ITEM_FOUR);
    }

    if (userInput == MENU_ITEM_FIVE) {
      cleanUpScreen(mainMenuHeaderComponent, headerComponent);
      menuComponent(MENU_ITEM_FIVE);
    }

    if (userInput == MENU_ITEM_SIX) {
      keyStroke = ESCAPE_KEY;
      menuComponent(MENU_ITEM_SIX);

      text("Thank you for using this application!", TEXT_BLUE, ALIGNMENTX2,
           ALIGNMENTY24);

      std::cout << "\n\n";
    }
  } while (keyStroke != ESCAPE_KEY);
}
