/* Including the libraries that are used in this utility. */
#include "windows.h"
#include <conio.h>
#include <vector>

/* Including the files in the constants folder. */
#include "../constants/escapeSequence.cpp"
#include "../constants/keycode.cpp"
#include "../constants/runtime.cpp"

/* Including the files in the structures folder. */
#include "../structures/appContainer.cpp"
#include "../structures/menuStruct.cpp"
#include "../structures/screenStruct.cpp"

/* Including the files in the helpers folder. */
#include "../helpers/screen.cpp"

#include "generateId.cpp"

#ifndef CPP_MENU
#define CPP_MENU

/**
 * It creates a menu
 *
 * @param menuStruct is a struct array that contains the menu items.
 * @param maxItem The number of items in the menu.
 */
void createMenu(struct MenuStruct menuStruct[], int maxItem) {
  char keyCode;
  int counter = 2;

  for (int i = 0;;) {

    if (keyCode == ESCAPE_KEY) {
      exit(1);
    }

    /* A function that is used to modify the screen content placement. */
    modifyScreenContentPlacement(menuStruct, maxItem);

    /* Getting the key code of the key that is pressed. */
    keyCode = _getch();

    /* Checking if the key pressed is the up arrow key and if the counter is
    greater than or equal to 2 and less than or equal to 3. If it is, then it
    will decrease the counter by 1. If the key pressed is the down arrow key and
    if the counter is greater than or equal to 1 and less than or equal to 2,
    then it will increase the counter by 1. */
    if (keyCode == UP_ARROW_KEY && (counter >= 2 && counter <= 3))
      counter--;

    if (keyCode == DOWN_ARROW_KEY && (counter >= 1 && counter <= 2))
      counter++;

    /* Checking if the key pressed is the carriage return key. If it is, then it
    will execute the function that is in the execute property. */
    if (keyCode == CURRIAGE_RETURN) {
      for (int i = 0; i < maxItem; i++) {
        if (counter == i + 1) {
          menuStruct->execute(menuStruct[i].type);
        }
      }
    }

    /* Changing the color of the text. */
    for (int i = 0; i < maxItem; i++) {
      menuStruct[i].textColor = 7; // default color white

      if (counter == i + 1) {
        menuStruct[i].textColor = 12; // color red
      }
    }
  }
}

#endif
