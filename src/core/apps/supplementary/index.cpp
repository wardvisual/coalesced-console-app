/**
 * @file /src/apps/supplementary/index.cpp
 * @brief Supplementary applications
 *
 * */

/* A preprocessor directive that prevents the file from being included more than
  once. */
#ifndef CPP_INDEX_SUPPLEMENTARY_
#define CPP_INDEX_SUPPLEMENTARY_

/* A constant that is used to determine the length of the array. */
#define MAX_SUPPLEMENTARY_MENU_ITEM_LENGTH 2

/* Supplementary activitities*/
#include "studentManagement/index.cpp"

/* Supplementary menu */
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

/* It's a function declaration. */
void studentManagementHeading();

/* It's a function pointer. */
void (*supplementaryMethods[MAX_SUPPLEMENTARY_MENU_ITEM_LENGTH])(
    void (&previousMenu)(std::string menuType)) = {studentManagement};

/**
 * It handles second sem menu
 *
 * @param currentSelectedMenu This is the current selected menu item.
 * @param previousFunctionCaller This is the function that will be called when
 * the user exits the menu.
 */
void renderSupplementaryApp(std::string &currentSelectedMenu,
                            void (&previousFunctionCaller)()) {

  /* Declaring variables. */
  int maxMenuLength = 2;
  std::string userInput;
  std::string backMenu = MENU_ITEM_2;
  int reAlignLabelYCoordinate = ALIGNMENTY18;
  int reAlignErrorMsgYCoordinate = ALIGNMENTY20;
  std::string inputLabel = "Select Supplementary App";
  std::string expectedArrayOfValue[maxMenuLength] = {MENU_ITEM_1, MENU_ITEM_2};

  // /* A function that clears the screen. */
  cleanUpScreen(mainMenuHeaderComponent, headerComponent);

  /* Application Heading */
  studentManagementHeading();
  /* Calling the function `renderSupplementaryAppMenu` and passing the value
    `MENU_ITEM_NONE` to it. */
  renderSupplementaryAppMenu(MENU_ITEM_NONE);

  /* It handles user input and prints an error if there is an error. */
  input<std::string>(inputLabel, userInput, expectedArrayOfValue, maxMenuLength,
                     RESTRICTED_INPUT, reAlignLabelYCoordinate,
                     reAlignErrorMsgYCoordinate);

  /* A loop that handles user input and prints an error if there is an error.*/
  while (userInput != backMenu) {
    /* Finding the element in the array. */
    std::string foundElement = findElement<std::string>(
        expectedArrayOfValue, maxMenuLength, userInput);

    /* Checking if the user input is equal to the found element. If it is, it
    will call the function that is in the array. */
    if (userInput == foundElement) {
      for (int i = 0; i < maxMenuLength; i++) {
        if (foundElement == expectedArrayOfValue[i]) {
          cleanUpScreen(mainMenuHeaderComponent, headerComponent);
          renderSupplementaryAppMenu(foundElement);
          (*supplementaryMethods[i])(renderSupplementaryAppMenu);
        }
      }

      /* It handles user input and prints an error if there is an error. */
      input<std::string>(inputLabel, userInput, expectedArrayOfValue,
                         maxMenuLength, RESTRICTED_INPUT,
                         reAlignLabelYCoordinate, reAlignErrorMsgYCoordinate);
    }
  }

  /* Calling the function `renderSupplementaryAppMenu` and passing the value
     `MENU_ITEM_NONE` to it. */
  renderSupplementaryAppMenu(MENU_ITEM_NONE);
  /* A function that clears the screen. */
  cleanUpScreen(mainMenuHeaderComponent, headerComponent);
  /* renders previous function caller*/
  previousFunctionCaller();
  /* exit */
  currentSelectedMenu = MENU_ITEM_NONE;
}

/**
 * It's displaying the instruction for the user.
 * </code>
 */
void studentManagementHeading() {
  text("Message: ", TEXT_BLUE, ALIGNMENTX38, ALIGNMENTY10);
  text("This application is supplementary. That means this application is not "
       "part of the school",
       TEXT_WHITE, ALIGNMENTX38, ALIGNMENTY12);
  text("laboratory activities. The supplementary application was created "
       "to have more functionality ",
       TEXT_WHITE, ALIGNMENTX38, ALIGNMENTY13);
  text("and interactivity in this application.", TEXT_WHITE, ALIGNMENTX38,
       ALIGNMENTY14);
}

#endif