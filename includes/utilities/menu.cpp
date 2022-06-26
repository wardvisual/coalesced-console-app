#include "./constants/escapeSequence.h"
#include "./constants/keycode.h"
#include "./constants/runtime.h"
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

  char keyCode;
  int counter = 2;

  for (int i = 0;;) {
    modifyScreenContentPlacement(screenStruct);

    keyCode = _getch();

    if (keyCode == ESCAPE_KEY && (counter >= 2 && counter <= 3)) {
      counter--;
    }

    if (keyCode == DOWN_ARROW_KEY && (counter >= 1 && counter <= 2)) {
      counter++;
    }

    if (keyCode == ESCAPE_KEY) {
      exit(EXIT_FAILURE);
    }

    if (keyCode == CURRIAGE_RETURN) {
      if (counter == 1)
    }
  }
}
