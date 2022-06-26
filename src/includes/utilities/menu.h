#include "constants/escapeSequence.h"
#include "constants/keycode.h"
#include "constants/runtime.h"
#include "generateId.h"
#include "screen.h"

#include "windows.h"
#include <conio.h>
#include <vector>

struct Item {
  int id;
  string text;
  int colorRange;
  void action();
};

// Defining a struct called ScreenStruct.
struct MenuStruct {
  int alignmentX;
  int alignmentY;
  int colorRange;
  int fontSize;
  string name;
  int maxItem;

  MenuStruct items[maxItem];
  Item itemList[maxItem];

  void createMenu(MenuStruct menuStruct) {
    char keyCode;
    int counter = 2;

    struct Item itemList[menuStruct.maxItem];

    for (int i = 0;;) {
      modifyScreenContentPlacement(menuStruct);

      /* Read a single character from the console without echoing the character
       */
      keyCode = _getch();

      if (keyCode == ESCAPE_KEY && (counter >= 2 && counter <= 3))
        counter--;

      if (keyCode == DOWN_ARROW_KEY && (counter >= 1 && counter <= 2))
        counter++;

      if (keyCode == ESCAPE_KEY)
        exit(EXIT_FAILURE);

      if (keyCode == CURRIAGE_RETURN) {
        for (int i = 1; i < menuStruct.maxItem; i++) {
          if (counter == itemList[i].id) {
            itemList[i].action();
          }
        }
      }

      for (int i = 1; i < menuStruct.maxItem; i++) {
        itemList[i].colorRange = 7; // default color white

        if (counter == i) {
          itemList[i].colorRange = 12; // color red
        }
      }
    }

    for (int i = 0; i < this->maxItem; i++) {
      this->items[i] = menuStruct;
    }
  }

  void addItem(Item _item) {
    Item item;

    item.id = generateId();
    item.text = _item.text;
    item.action = _item.action;
  }

  void setName(string name) {
  }

  void setAlignment(short x, short y) {
    this->alignmentX = x;
    this->alignmentY = y;
  }

  void setMaxItem(int maxItem) {
    this->maxItem = maxItem;
  }
};

// void createMenu(MenuStruct menuStruct) {
//   char keyCode;
//   int counter = 2;

//   struct Item itemList[menuStruct.maxItem];

//   for (int i = 0;;) {
//     modifyScreenContentPlacement(menuStruct);

//     /* Read a single character from the console without echoing the character
//     */ keyCode = _getch();

//     if (keyCode == ESCAPE_KEY && (counter >= 2 && counter <= 3))
//       counter--;

//     if (keyCode == DOWN_ARROW_KEY && (counter >= 1 && counter <= 2))
//       counter++;

//     if (keyCode == ESCAPE_KEY)
//       exit(EXIT_FAILURE);

//     if (keyCode == CURRIAGE_RETURN) {
//       for (int i = 1; i < menuStruct.maxItem; i++) {
//         if (counter == itemList[i].id) {
//           itemList[i].action();
//         }
//       }
//     }

//     for (int i = 1; i < menuStruct.maxItem; i++) {
//       itemList[i].colorRange = 7; // default color white

//       if (counter == i) {
//         itemList[i].colorRange = 12; // color red
//       }
//     }
//   }
// }
