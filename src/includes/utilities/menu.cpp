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

void displaySecondSemMenu() {
  ScreenStruct screenStruct;

  screenStruct.alignmentX = 30;
  screenStruct.alignmentY = 5;
  screenStruct.colorRange = 2;
  screenStruct.name = "Second Sem";
  modifyScreenContentPlacement(screenStruct);
}

void displayMidtermMenu() {
  ScreenStruct screenStruct;

  screenStruct.alignmentX = 30;
  screenStruct.alignmentY = 5;
  screenStruct.colorRange = 2;
  screenStruct.name = "Midterm";

  modifyScreenContentPlacement(screenStruct);
}

void displayFinalSemMenu() {
  ScreenStruct screenStruct;

  screenStruct.alignmentX = 30;
  screenStruct.alignmentY = 5;
  screenStruct.colorRange = 2;
  screenStruct.name = "Final Sem";

  modifyScreenContentPlacement(screenStruct);
}

struct Item {
  int id;
  string text;
  int colorRange;
  void setAction(void *action()) { action(); };
};

// Defining a struct called ScreenStruct.
void createMenu(MenuStruct menuStruct) {
  ScreenStruct screenStruct;
  vector<ScreenStruct> screenVector;
  ApplicationContainer applicationContainer;

  char keyCode;
  int counter = 2;

  for (int i = 1; i < menuStruct.maxItem; i++) {
    applicationContainer.menuStruct.push_back(menuStruct);
  }

  screenStruct.alignmentX = menuStruct.menuItemAlignmentX;
  screenStruct.alignmentY = menuStruct.menuItemAlignmentY;
  screenStruct.colorRange = menuStruct.colorRange;
  screenStruct.fontSize = menuStruct.fontSize;
  screenStruct.name = menuStruct.name;

  // struct Item itemList[menuStruct.maxItem];

  for (int i = 0;;) {
    for (int i = 1; i < menuStruct.maxItem; i++) {
      screenVector.push_back(screenStruct);
    }
    modifyScreenContentPlacement();

    /* Read a single character from the console without echoing the character
     */
    keyCode = _getch();

    if (keyCode == UP_ARROW_KEY && (counter >= 2 && counter <= 3))
      counter--;

    if (keyCode == DOWN_ARROW_KEY && (counter >= 1 && counter <= 2))
      counter++;

    if (keyCode == ESCAPE_KEY)
      exit(EXIT_FAILURE);

    // if (keyCode == CURRIAGE_RETURN) {
    //   for (int i = 1; i < menuStruct.maxItem; i++) {
    //     if (counter == i) {
    //       screenStruct.showMenu();
    //     }
    //   }
    // }

    if (keyCode == CURRIAGE_RETURN) {
      // carriage return = enter key
      if (counter == 1) {
        displaySecondSemMenu();
      }
      if (counter == 2) {
        displayMidtermMenu();
      }
      if (counter == 3) {
        displayFinalSemMenu();
      }
    }

    for (int i = 1; i < menuStruct.maxItem; i++) {
      screenStruct.colorRange = 7; // default color white

      if (counter == i) {
        screenStruct.colorRange = 12; // color red
      }
    }
  }

  // for (int i = 0; i < this.maxItem; i++) {
  //   this.items[i] = menuStruct;
  // }
}

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
