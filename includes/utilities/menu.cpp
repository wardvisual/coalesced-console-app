#include "./constants/escapeSequence.h"
#include "./constants/keycode.h"
#include "./constants/runtime.h"
#include "./generateId.h"
#include "./screen.h"

#include "windows.h"
#include <conio.h>
#include <vector>

struct Item {
  int id;
  string text;
  void action();
};

// Defining a struct called ScreenStruct.
struct MenuStruct {
  int alignX;
  int alignY;
  int colorRange;
  int fontSize;
  string content;
  int maxItem;

  void addItem(Item _item) {
    Item item;

    item.id = generateId();
    item.text = _item.text;
    item.action = _item.action;
  }
};

void createMenu(MenuStruct menuStruct) {
  char keyCode;
  int counter = 2;

  struct Item itemList[menuStruct.maxItem];

  for (int i = 0;;) {
    modifyScreenContentPlacement(menuStruct);

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
      for (int i = 1; i < menuStruct.maxItem; i++) {
        if (counter == itemList[i].id) {
          itemList[i].action();
        }
      }
    }

    Set[0] = 7; // default white clr
    Set[1] = 7;
    Set[2] = 7;

    if (counter == 1) {
      Set[0] = 12; // 12 is color red
    }

    if (counter == 2) {
      Set[1] = 12; // 12 is color red
    }

    if (counter == 3) {
      Set[2] = 12; // 12 is color red
    }
  }
}
