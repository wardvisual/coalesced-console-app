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
      MENU_ITEM_1, MENU_ITEM_2, MENU_ITEM_3, MENU_ITEM_4, MENU_ITEM_5,
      MENU_ITEM_6, MENU_ITEM_7, MENU_ITEM_8, MENU_ITEM_9};

  displayFinalTermMenu(MENU_ITEM_NONE);

  input<std::string>(inputLabel, userInput, expectedArrayOfValue,
                     RESTRICTED_INPUT, reAlignLabelYCoordinate,
                     reAlignErrorMsgYCoordinate);

  std::string foundedElement =
      findElement(expectedArrayOfValue, maxMenuLength, userInput);

  if (userInput == foundedElement) {
    std::string currentMenuItem = userInput;
    int exitMenu = MENU_ITEM_9;

    while (foundedElement != exitMenu) {
      cleanUpScreen(mainMenuHeaderComponent, headerComponent);
      displayFinalTermMenu(foundedElement);

      for (int i = 0; i < sizeof(expectedArrayOfValue) /
                              sizeof(expectedArrayOfValue[firstIndex]);
           i++) {
        if (selecteMenu == expectedArrayOfValue[i]) {
          (*secondSemFunctions[i])();
        }
      }
    }

    displayFinalTermMenu(MENU_ITEM_NONE);
    cleanUpScreen(mainMenuHeaderComponent, headerComponent);

    /* Rerendering previous function caller*/
    previousFunctionCaller();

    // exit
    currentSelectedMenu = MENU_ITEM_NONE;
  }
}

#endif
