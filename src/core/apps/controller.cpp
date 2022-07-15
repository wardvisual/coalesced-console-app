#ifndef CPP_CONTROLLER
#define CPP_CONTROLLER

#include "../../includes/constants/alignment.cpp"
#include "../../includes/constants/menu.cpp"
#include "../../includes/constants/validation.cpp"
#include "../../includes/helpers/cleanUp.cpp"

#include "../components/header.cpp"
#include "../components/input.cpp"
#include "../components/menu.cpp"

#include "./secondsem/activityOne/index.cpp"
#include "./secondsem/menu/showMenu.cpp"

#include "./information/index.cpp"

namespace appController {
char userInput;

void systemInformation() { displaySystemInformation(); }

void secondSem(char &currentSelectedMenu, void (&previousFunctionCaller)()) {
  int reAlignLabelYCoordinate = ALIGNMENTY31;
  int reAlignErrorMsgYCoordinate = ALIGNMENTY33;

  std::string inputLabel = "Select Application";

  displaySecondSemMenu(MENU_ITEM_NONE);

  input<char>(inputLabel, userInput, RESTRICTED_INPUT, reAlignLabelYCoordinate,
              reAlignErrorMsgYCoordinate);

  if (userInput == MENU_ITEM_A) {
    cleanUpScreen(mainMenuHeaderComponent, headerComponent);
    displaySecondSemMenu(MENU_ITEM_A);
    activityOne();
  }

  if (userInput == MENU_ITEM_I) {
    displaySecondSemMenu(MENU_ITEM_A);
    cleanUpScreen(mainMenuHeaderComponent, headerComponent);

    /* Rerendering previous function caller*/
    previousFunctionCaller();

    currentSelectedMenu = MENU_ITEM_NONE;
  }
}
} // namespace appController

#endif