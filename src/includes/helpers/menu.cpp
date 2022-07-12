/**
 * @file /src/includes/helpers/menu.cpp
 * @brief  A helper that is used to create a menu.
 */

/* Including the libraries that are used in this utility. */
#include "windows.h"
#include <conio.h>

/* Including the files in the constants folder. */
#include "../constants/color.cpp"
#include "../constants/escapeSequence.cpp"
#include "../constants/keyStroke.cpp"

/* Including the files in the structures folder. */
#include "../structures/menuStruct.cpp"

#include "../../core/components/text.cpp"

#ifndef CPP_MENU_HELPER
#define CPP_MENU_HELPER

/**
 * It creates a menu
 *
 * @param menuStruct is a struct array that contains the menu items.
 * @param maxItem The number of items in the menu.
 */
void createMenu(struct MenuStruct menuStruct[], int maxItem) {
  char keyStroke;
  int counter = 1;

  while (keyStroke != ESCAPE_KEY) {
    for (int i = 0; i <= maxItem; i++) {
      text(menuStruct[i].name, menuStruct[i].textColor,
           menuStruct[i].alignmentX, menuStruct[i].alignmentY);
    }

    /* Getting the key code of the key that is pressed. */
    keyStroke = _getch();

    /* Checking if the key pressed is the up arrow key or the down arrow key. If
    it is, then it will increment or decrement the counter. */
    if (keyStroke == UP_ARROW_KEY &&
        (counter >= 2 && counter <= 3 || counter >= 3 || counter >= 4 ||
         counter >= 5))
      counter--;

    if (keyStroke == DOWN_ARROW_KEY &&
        (counter >= 1 && counter <= 2 || counter <= 3 || counter <= 4 ||
         counter <= 5))
      counter++;

    /* Checking if the key pressed is the carriage return key. If it is, then it
    will execute the function that is in the execute property. */
    if (keyStroke == CURRIAGE_RETURN) {
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
