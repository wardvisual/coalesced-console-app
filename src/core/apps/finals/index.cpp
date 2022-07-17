/**
 * @file /src/apps/secondsem/index.cpp
 * @brief
 *
 * */

#ifndef CPP_INDEX_FINALS
#define CPP_INDEX_FINALS

#define MAX_MENU_ITEM_LENGTH 9

#include "activityOne/index.cpp"

#include "../../controllers/menu.cpp"

#include "../../../includes/constants/alignment.cpp"
#include "../../../includes/constants/menu.cpp"
#include "../../../includes/constants/validation.cpp"

#include "../../../includes/helpers/cleanUp.cpp"

#include "../../components/header.cpp"
#include "../../components/input.cpp"
#include "../../components/menu.cpp"

void (*secondSemFunctions[MAX_MENU_ITEM_LENGTH])() = {activityOne};

void finalSem(std::string &currentSelectedMenu,
              void (&previousFunctionCaller)()) {
  int reAlignLabelYCoordinate = ALIGNMENTY31;
  int reAlignErrorMsgYCoordinate = ALIGNMENTY33;

  std::string inputLabel = "Select Application";
  int firstIndex = 0;
  int maxMenuLength = 9;
  std::string expectedArrayOfValue[maxMenuLength] = {
      MENU_ITEM_A, MENU_ITEM_B, MENU_ITEM_C, MENU_ITEM_D, MENU_ITEM_E,
      MENU_ITEM_F, MENU_ITEM_G, MENU_ITEM_H, MENU_ITEM_I};

  displaySecondSemMenu(MENU_ITEM_NONE);

  input<std::string>(inputLabel, userInput, expectedArrayOfValue,
                     RESTRICTED_INPUT, reAlignLabelYCoordinate,
                     reAlignErrorMsgYCoordinate);

  std::string foundedElement =
      findElement(expectedArrayOfValue, maxMenuLength, userInput);

  if (userInput == foundedElement) {
    std::string currentMenuItem = userInput;
    int exitMenu = MENU_ITEM_I;

    while (foundedElement != exitMenu) {
      cleanUpScreen(mainMenuHeaderComponent, headerComponent);
      displaySecondSemMenu(foundedElement);

      for (int i = 0; i < sizeof(expectedArrayOfValue) /
                              sizeof(expectedArrayOfValue[firstIndex]);
           i++) {
        if (selecteMenu == expectedArrayOfValue[i]) {
          (*secondSemFunctions[i])();
        }
      }
    }

    displaySecondSemMenu(MENU_ITEM_NONE);
    cleanUpScreen(mainMenuHeaderComponent, headerComponent);

    /* Rerendering previous function caller*/
    previousFunctionCaller();

    // exit
    currentSelectedMenu = MENU_ITEM_NONE;
  }
}

#endif

// return array of functions
// TODO import all acttivies
// TODO ccreate a function and return the imported activities functions
// TODO helper
// https://docs.microsoft.com/en-us/troubleshoot/developer/visualstudio/cpp/language-compilers/declare-pointers-to-functions