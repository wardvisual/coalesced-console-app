/* Including the libraries that are used in this utility. */
#include "windows.h"
#include <conio.h>

/* Including the files in the constants folder. */
#include "../constants/color.cpp"
#include "../constants/escapeSequence.cpp"
#include "../constants/keycode.cpp"
#include "../constants/runtime.cpp"

/* Including the files in the structures folder. */
#include "../structures/menuStruct.cpp"

/* Including the files in the helpers folder. */
#include "./generateId.cpp"
#include "./screen.cpp"

#ifndef CPP_MENU_HELPER
#define CPP_MENU_HELPER

/**
 * It creates a menu
 *
 * @param menuStruct is a struct array that contains the menu items.
 * @param maxItem The number of items in the menu.
 */
void createMenu(struct MenuStruct menuStruct[], int maxItem) {
  char keyCode;
  int counter = 1;

  while (keyCode != ESCAPE_KEY) {
    /* A function that is used to modify the screen content placement. */
    modifyScreenContentPlacement(menuStruct, maxItem);

    /* Getting the key code of the key that is pressed. */
    keyCode = _getch();

    /* Checking if the key pressed is the up arrow key or the down arrow key. If
    it is, then it will increment or decrement the counter. */
    if (keyCode == UP_ARROW_KEY &&
        (counter >= 2 && counter <= 3 || counter >= 3 || counter >= 4 ||
         counter >= 5))
      counter--;

    if (keyCode == DOWN_ARROW_KEY &&
        (counter >= 1 && counter <= 2 || counter <= 3 || counter <= 4 ||
         counter <= 5))
      counter++;

    /* Checking if the key pressed is the carriage return key. If it is, then it
    will execute the function that is in the execute property. */
    if (keyCode == CURRIAGE_RETURN) {
      for (int i = 0; i <= maxItem; i++) {
        if (counter == i + 1) {
          menuStruct->renderItems(menuStruct[i].type);
        }
      }
    }

    /* Changing the color of the text. */
    for (int i = 0; i <= maxItem; i++) {
      menuStruct[i].textColor = TEXT_WHITE;

      if (counter == i + 1) {
        menuStruct[i].textColor = TEXT_BLUE;
      }
    }
  }
}

#endif
