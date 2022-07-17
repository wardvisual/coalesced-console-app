/**
 * @file /src/apps/secondsem/index.cpp
 * @brief
 *
 * */

#ifndef CPP_INDEX_SECONDSEM
#define CPP_INDEX_SECONDSEM

#define MAX_MENU_ITEM_LENGTH 9

#include "activityOne/index.cpp"
#include "activityFive/index.cpp"
#include "activityFour/index.cpp"
#include "activityThree/index.cpp"
#include "activityTwo/index.cpp"


#include "../../controllers/menu.cpp"

#include "../../../includes/constants/alignment.cpp"
#include "../../../includes/constants/menu.cpp"
#include "../../../includes/constants/validation.cpp"

#include "../../../includes/helpers/cleanUp.cpp"

#include "../../components/header.cpp"
#include "../../components/input.cpp"
#include "../../components/menu.cpp"

#include "./menu/showMenu.cpp"

/* Function blueprint */
void (*secondSemFunctions[MAX_MENU_ITEM_LENGTH])(std::string currentMenu) = {
    activityOne, activityTwo, activityThree, activityFour, activityFive};

void secondSem(std::string &currentSelectedMenu,
               void (&previousFunctionCaller)()) {
  std::string userInput;
  int reAlignLabelYCoordinate = ALIGNMENTY31;
  int reAlignErrorMsgYCoordinate = ALIGNMENTY35;

  std::string inputLabel = "Select Application";
  int firstIndex = 0;
  int maxMenuLength = 9;
  std::string exitMenu = MENU_ITEM_I;

  std::string expectedArrayOfValue[maxMenuLength] = {
      MENU_ITEM_A, MENU_ITEM_B, MENU_ITEM_C, MENU_ITEM_D, MENU_ITEM_E,
      MENU_ITEM_F, MENU_ITEM_G, MENU_ITEM_H, MENU_ITEM_I};

  cleanUpScreen(mainMenuHeaderComponent, headerComponent);
  displaySecondSemMenu(MENU_ITEM_NONE);

  /* It handles user input and prints an error if there is an error. */
  input<std::string>(inputLabel, userInput, expectedArrayOfValue, maxMenuLength,
                     RESTRICTED_INPUT, reAlignLabelYCoordinate,
                     reAlignErrorMsgYCoordinate);

  while (userInput != exitMenu) {
    std::string foundedElement = findElement<std::string>(
        expectedArrayOfValue, maxMenuLength, userInput);

    if (userInput == foundedElement) {
      std::string currentMenuItem = userInput;

      for (int i = 0; i < maxMenuLength; i++) {
        if (foundedElement == expectedArrayOfValue[i]) {
          cleanUpScreen(mainMenuHeaderComponent, headerComponent);
          displaySecondSemMenu(foundedElement);

          (*secondSemFunctions[i])(foundedElement);
        }
      }

      input<std::string>(inputLabel, userInput, expectedArrayOfValue,
                         maxMenuLength, RESTRICTED_INPUT,
                         reAlignLabelYCoordinate, reAlignErrorMsgYCoordinate);
    }
  }

  displaySecondSemMenu(MENU_ITEM_NONE);
  cleanUpScreen(mainMenuHeaderComponent, headerComponent);
  /* renders previous function caller*/
  previousFunctionCaller();
  // exit
  currentSelectedMenu = MENU_ITEM_NONE;
}

#endif

// return array of functions
// TODO import all acttivies
// TODO ccreate a function and return the imported activities functions
// TODO helper
// https://docs.microsoft.com/en-us/troubleshoot/developer/visualstudio/cpp/language-compilers/declare-pointers-to-functions