#include "./constants/keycode.h"
#include "./screen.h"
#include "windows.h"
#include <conio.h>

// Defining a struct called ScreenStruct.
struct MenuStruct {
  int alignX;
  int alignY;
  int colorRange;
  int fontSize;
  string content;
};

// Defining a struct called KeyCodeStruct.
struct MenuStruct {};

void createMenu(ScreenStruct screenStruct) {
  MenuStruct menuStruct;

  char key;
  int counter = 2;

  for (int i = 0;;) {
    modifyScreenContentPlacement(screenStruct);

    key = _getch();

    if (key == ESCAPE_KEY && (counter >= 2 && counter <= 3)) {
      counter--;
    }

    if (key == DOWN_ARROW_KEY && (counter >= 2 && counter <= 3)) {
      counter++;
    }
  }
}
