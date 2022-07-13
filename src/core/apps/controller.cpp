#ifndef CPP_CONTROLLER
#define CPP_CONTROLLER

#include "../../includes/constants/menu.cpp"
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

void secondSem() {

  displaySecondSemMenu(MENU_ITEM_NONE);

  input<int>("Input", userInput);

  if (userInput == MENU_ITEM_ONE) {
    // cleanUpScreen(mainMenuHeaderComponent, headerComponent);
    displaySecondSemMenu(MENU_ITEM_ONE);
    activityOne();
  }
}

} // namespace appController

#endif