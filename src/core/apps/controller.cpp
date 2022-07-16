#ifndef CPP_CONTROLLER
#define CPP_CONTROLLER

#include "../../includes/constants/alignment.cpp"
#include "../../includes/constants/menu.cpp"
#include "../../includes/constants/validation.cpp"
#include "../../includes/helpers/cleanUp.cpp"

#include "../controllers/menu.cpp"

#include "../components/header.cpp"
#include "../components/input.cpp"
#include "../components/menu.cpp"

#include "./secondsem/index.cpp"
#include "./secondsem/menu/showMenu.cpp"

#include "information/index.cpp"

namespace appController {
char userInput;

void systemInformation() { displaySystemInformation(); }

void secondSem(char &currentSelectedMenu, void (&previousFunctionCaller)()) {
  int reAlignLabelYCoordinate = ALIGNMENTY31;
  int reAlignErrorMsgYCoordinate = ALIGNMENTY33;

  std::string inputLabel = "Select Application";
  int maxMenuLength = 9;
  char expectedArrayOfValue[maxMenuLength] = {
      MENU_ITEM_A, MENU_ITEM_B, MENU_ITEM_C, MENU_ITEM_D, MENU_ITEM_E,
      MENU_ITEM_F, MENU_ITEM_G, MENU_ITEM_H, MENU_ITEM_I};

  displaySecondSemMenu(MENU_ITEM_NONE);

  input<char>(inputLabel, userInput, expectedArrayOfValue, RESTRICTED_INPUT,
              reAlignLabelYCoordinate, reAlignErrorMsgYCoordinate);

  char foundedElement =
      findElement(expectedArrayOfValue, maxMenuLength, userInput);

  if (userInput == foundedElement) {
    char currentMenuItem = userInput;
    int exitMenu = MENU_ITEM_I;

    while (foundedElement != exitMenu) {
      cleanUpScreen(mainMenuHeaderComponent, headerComponent);
      displaySecondSemMenu(foundedElement);

      renderSelectedMenu(foundedElement, expectedArrayOfValue);
    }

    displaySecondSemMenu(MENU_ITEM_NONE);
    cleanUpScreen(mainMenuHeaderComponent, headerComponent);

    /* Rerendering previous function caller*/
    previousFunctionCaller();

    // exit
    currentSelectedMenu = MENU_ITEM_NONE;
  }
}

void midterm(char &currentSelectedMenu, void (&previousFunctionCaller)()) {}
void finalSem(char &currentSelectedMenu, void (&previousFunctionCaller)()) {}
void supplementary(char &currentSelectedMenu,
                   void (&previousFunctionCaller)()) {}
} // namespace appController

void renderMenu(char &currentSelectedMenu, void (&previousFunctionCaller)()) {
  if (currentSelectedMenu == MENU_ITEM_A) {
    appController::systemInformation();
  }

  while (currentSelectedMenu == MENU_ITEM_B) {
    cleanUpScreen(mainMenuHeaderComponent, headerComponent);
    menuComponent(MENU_ITEM_B);

    appController::secondSem(currentSelectedMenu, mainMenuController);
  }

  while (currentSelectedMenu == MENU_ITEM_C) {
    cleanUpScreen(mainMenuHeaderComponent, headerComponent);
    menuComponent(MENU_ITEM_C);

    appController::midterm(currentSelectedMenu, mainMenuController);
  }

  while (currentSelectedMenu == MENU_ITEM_D) {
    cleanUpScreen(mainMenuHeaderComponent, headerComponent);
    menuComponent(MENU_ITEM_D);

    appController::finalSem(currentSelectedMenu, mainMenuController);
  }

  while (currentSelectedMenu == MENU_ITEM_E) {
    cleanUpScreen(mainMenuHeaderComponent, headerComponent);
    menuComponent(MENU_ITEM_E);

    appController::supplementary(currentSelectedMenu, mainMenuController);
  }
}

#endif