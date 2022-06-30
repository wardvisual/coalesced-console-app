#include "windows.h"
#include <conio.h>
#include <vector>

#include "../constants/escapeSequence.cpp"
#include "../constants/keycode.cpp"
#include "../constants/runtime.cpp"

#include "../structures/appContainer.cpp"
#include "../structures/menuStruct.cpp"
#include "../structures/screenStruct.cpp"

#include "generateId.cpp"
#include "screen.cpp"

// Defining a struct called ScreenStruct.
void createMenu(struct MenuStruct menuStruct[], int maxItem) {
  char keyCode = _getch();
  int counter = 2;

  while (keyCode == ESCAPE_KEY) {

    modifyScreenContentPlacement(menuStruct, maxItem);

    if (keyCode == UP_ARROW_KEY && (counter >= 2 && counter <= 3))
      counter--;

    if (keyCode == DOWN_ARROW_KEY && (counter >= 1 && counter <= 2))
      counter++;

    if (keyCode == CURRIAGE_RETURN) {
      for (int i = 0; i < maxItem; i++) {
        if (counter == i) {
          menuStruct->execute(menuStruct[i].type);
        }
      }
    }

    for (int i = 0; i < maxItem; i++) {
      menuStruct[i].textColor = 7; // default color white

      if (counter == i + 1) {
        menuStruct[i].textColor = 12; // color red
      }
    }
  }
}