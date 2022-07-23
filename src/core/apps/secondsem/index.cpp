/**
 * @file /src/apps/secondsem/index.cpp
 * @brief Second sem applications
 *
 * */

/* A preprocessor directive that prevents the file from being included more than
  once. */
#ifndef CPP_INDEX_SECONDSEM
#define CPP_INDEX_SECONDSEM

/* A constant that is used to determine the length of the array. */
#define MAX_MENU_ITEM_LENGTH 9

/* Second sem activitities*/
#include "getNameCourse/index.cpp"
#include "dayTimeConverter/index.cpp"
#include "evenOddIdentifier/index.cpp"
#include "fourOperationsCalculator/index.cpp"
#include "getIntegerSum/index.cpp"
#include "shapeAreaCalculator/index.cpp"
#include "tuitionFeeCalculator/index.cpp"
#include "unitConverter/index.cpp"

/* Second sem menu */
#include "./menu/showMenu.cpp"

/* Controllers */
#include "../../controllers/menu.cpp"

/* Constants */
#include "../../../includes/constants/alignment.cpp"
#include "../../../includes/constants/appType.cpp"
#include "../../../includes/constants/menu.cpp"
#include "../../../includes/constants/validation.cpp"

/* Helpers */
#include "../../../includes/helpers/cleanUp.cpp"

/* Components */
#include "../../components/header.cpp"
#include "../../components/input.cpp"
#include "../../components/menu.cpp"

/**
 * It should be in order. Like this.
 *
 * 01. getNameCourse()
 * 02. getIntegerSum()
 * 03. shapeAreaCalculator()
 * 04. tuitionFeeCalculator()
 * 05. evenOddIdentifier()
 * 06. fourOperationsCalculator()
 * 07. unitConverter()
 * 08. dayTimeConverter()
 */
void (*secondSemMethods[MAX_MENU_ITEM_LENGTH])(std::string type,
                                               std::string currentMenu) = {
    getNameCourse,        getIntegerSum,     shapeAreaCalculator,
    tuitionFeeCalculator, evenOddIdentifier, fourOperationsCalculator,
    unitConverter,        dayTimeConverter};

/**
 * It handles second sem menu
 *
 * @param currentSelectedMenu This is the current selected menu item.
 * @param previousFunctionCaller This is the function that will be called when
 * the user exits the menu.
 */
void renderSecondSemApp(std::string &currentSelectedMenu,
                        void (&previousFunctionCaller)()) {

  /* Declaring variables. */
  int firstIndex = 0;
  int maxMenuLength = 9;
  std::string userInput;
  std::string exitMenu = MENU_ITEM_9;
  int reAlignLabelYCoordinate = ALIGNMENTY31;
  std::string inputLabel = "Select Application";
  int reAlignErrorMsgYCoordinate = ALIGNMENTY35;
  std::string expectedArrayOfValue[maxMenuLength] = {
      MENU_ITEM_1, MENU_ITEM_2, MENU_ITEM_3, MENU_ITEM_4, MENU_ITEM_5,
      MENU_ITEM_6, MENU_ITEM_7, MENU_ITEM_8, MENU_ITEM_9};

  /* A function that clears the screen. */
  cleanUpScreen(mainMenuHeaderComponent, headerComponent);

  /* Calling the function `renderSecondSemAppMenu` and passing the value
    `MENU_ITEM_NONE` to it. */
  renderSecondSemAppMenu(MENU_ITEM_NONE);

  /* It handles user input and prints an error if there is an error. */
  input<std::string>(inputLabel, userInput, expectedArrayOfValue, maxMenuLength,
                     RESTRICTED_INPUT, reAlignLabelYCoordinate,
                     reAlignErrorMsgYCoordinate);

  /* A loop that handles user input and prints an error if there is an error. */
  while (userInput != exitMenu) {
    /* Finding the element in the array. */
    std::string foundElement = findElement<std::string>(
        expectedArrayOfValue, maxMenuLength, userInput);

    /* Checking if the user input is equal to the found element. If it is, it
    will call the function that is in the array. */
    if (userInput == foundElement) {
      std::string currentMenuItem = userInput;

      for (int i = 0; i < maxMenuLength; i++) {
        if (foundElement == expectedArrayOfValue[i]) {
          cleanUpScreen(mainMenuHeaderComponent, headerComponent);
          renderSecondSemAppMenu(foundElement);

          (*secondSemMethods[i])(SECOND_SEM_APP, foundElement);
        }
      }

      /* It handles user input and prints an error if there is an error. */
      input<std::string>(inputLabel, userInput, expectedArrayOfValue,
                         maxMenuLength, RESTRICTED_INPUT,
                         reAlignLabelYCoordinate, reAlignErrorMsgYCoordinate);
    }
  }

  /* Calling the function `renderSecondSemAppMenu` and passing the value
     `MENU_ITEM_NONE` to it. */
  renderSecondSemAppMenu(MENU_ITEM_NONE);
  /* A function that clears the screen. */
  cleanUpScreen(mainMenuHeaderComponent, headerComponent);
  /* renders previous function caller*/
  previousFunctionCaller();
  // exit
  currentSelectedMenu = MENU_ITEM_NONE;
}

#endif
