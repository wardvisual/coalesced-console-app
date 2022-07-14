#ifndef CPP_CONTROLLER
#define CPP_CONTROLLER

#include "../../includes/constants/alignment.cpp"
#include "../../includes/constants/menu.cpp"
#include "../../includes/constants/validation.cpp"
#include "../../includes/helpers/cleanUp.cpp"

#include "../components/header.cpp"
#include "../components/input.cpp"
#include "../components/menu.cpp"

#include "./secondsem/activityOne.cpp"
#include "./secondsem/menu/showMenu.cpp"

#include "./information/index.cpp"

namespace appController {
int userInput;

void systemInformation() { displaySystemInformation(); }

void secondSem(char &currentSelectedMenu) {
  int reAlignLabelYCoordinate = ALIGNMENTY31;
  int reAlignErrorMsgYCoordinate = ALIGNMENTY33;

  std::string inputLabel = "Select Application";

  displaySecondSemMenu(MENU_ITEM_NONE);

  input<int>(inputLabel, userInput, IS_RESTRICTED_INPUT,
             reAlignLabelYCoordinate, reAlignErrorMsgYCoordinate);

  if (userInput == MENU_ITEM_A) {
    cleanUpScreen(mainMenuHeaderComponent, headerComponent);
    displaySecondSemMenu(MENU_ITEM_A);
    activityOne();
  }

  if (userInput == MENU_ITEM_I) {
    // cleanUpScreen(mainMenuHeaderComponent, headerComponent);
    displaySecondSemMenu(MENU_ITEM_A);

    currentSelectedMenu = MENU_ITEM_NONE;
  }
}

} // namespace appController

#endif