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

// void displaySecondSemMenu() {
//   ScreenStruct screenStruct;

//   screenStruct.alignmentX = 30;
//   screenStruct.alignmentY = 5;
//   screenStruct.textColor = 2;
//   screenStruct.name = "Second Sem";
//   modifyScreenContentPlacement(screenStruct);
// }

// void displayMidtermMenu() {
//   ScreenStruct screenStruct;

//   screenStruct.alignmentX = 30;
//   screenStruct.alignmentY = 5;
//   screenStruct.textColor = 2;
//   screenStruct.name = "Midterm";

//   modifyScreenContentPlacement(screenStruct);
// }

// void displayFinalSemMenu() {
//   ScreenStruct screenStruct;

//   screenStruct.alignmentX = 30;
//   screenStruct.alignmentY = 5;
//   screenStruct.textColor = 2;
//   screenStruct.name = "Final Sem";

//   modifyScreenContentPlacement(screenStruct);
// }

struct Item {
  int id;
  string text;
  int textColor;
  void setAction(void *action()) { action(); };
};

// Defining a struct called ScreenStruct.
void createMenu(struct MenuStruct menuStruct[], int maxItem) {
  char keyCode;
  int counter = 2;

  for (int i = 0;;) {

    modifyScreenContentPlacement(menuStruct, maxItem);

    /* Read a single character from the console without echoing the character
     */
    keyCode = _getch();

    if (keyCode == UP_ARROW_KEY && (counter >= 2 && counter <= 3))
      counter--;

    if (keyCode == DOWN_ARROW_KEY && (counter >= 1 && counter <= 2))
      counter++;

    if (keyCode == ESCAPE_KEY)
      exit(EXIT_FAILURE);

    if (keyCode == CURRIAGE_RETURN) {
      for (int i = 1; i < maxItem; i++) {
        if (counter == i) {
          menuStruct->execute(menuStruct.callback);
        }
      }
    }

    // if (keyCode == CURRIAGE_RETURN) {
    //   // carriage return = enter key
    //   if (counter == 1) {
    //     cout << "displaySecondSemMenu()";
    //   }
    //   if (counter == 2) {
    //     cout << "displayMidtermMenu()";
    //   }
    //   if (counter == 3) {
    //     cout << "displayFinalSemMenu()";
    //   }
    // }

    for (int i = 0; i < maxItem; i++) {
      menuStruct[i].textColor = 7; // default color white

      if (counter == i + 1) {
        menuStruct[i].textColor = 12; // color red
      }
    }
  }
}