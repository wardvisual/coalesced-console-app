#include <conio.h>
#include <iostream>
#include <windows.h>

#include "./includes/utilities/border.h"
#include "./includes/utilities/color.h"
#include "./includes/utilities/font.h"
#include "./includes/utilities/gotoxy.h"
#include "./includes/utilities/screen.h"

#include "./includes/constants/escapeSequence.h"
#include "./includes/constants/keycode.h"
#include "./includes/constants/runtime.h"

using namespace std;

void displaySecondSemMenu() {
  ScreenStruct screenStruct;

  screenStruct.alignX = 30;
  screenStruct.alignX = 5;
  screenStruct.colorRange = 2;
  screenStruct.content = "Second Sem";

  modifyScreenContentPlacement(screenStruct);
}

void displayMidtermMenu() {
  ScreenStruct screenStruct;

  screenStruct.alignX = 30;
  screenStruct.alignX = 5;
  screenStruct.colorRange = 2;
  screenStruct.content = "Midterm";

  modifyScreenContentPlacement(screenStruct);
}

void displayFinalSemMenu() {
  ScreenStruct screenStruct;

  screenStruct.alignX = 30;
  screenStruct.alignX = 5;
  screenStruct.colorRange = 2;
  screenStruct.content = "Final Sem";

  modifyScreenContentPlacement(screenStruct);
}

int main() {

  // cout << "\n\n" << generateSymbol("_", 50) << "\n";
  // cout << "\n" << generateSymbol("_", 50) << "\n\n";

  // cout << "Welcome to the Group Six Console Based Application";

  // cout << "\n\n" << generateSymbol("_", 50) << "\n";
  // cout << "\n" << generateSymbol("_", 50) << "\n\n";

  generateBorder(88, 32);
  // cout << " ";

  int Set[] = {7, 7, 7};
  int counter = 2;
  char key;

  for (int i = 0;;) {

    centerContent(5, 5);
    applyColor(Set[0]);
    adjustFont(40);
    cout << "1. Second Sem";

    centerContent(5, 6);
    applyColor(Set[1]);
    cout << "2. Midterm";

    centerContent(5, 7);
    applyColor(Set[2]);
    cout << "3. Final";

    key = _getch();

    if (key == 72 && (counter >= 2 && counter <= 3)) {
      counter--;
    }

    if (key == 80 && (counter >= 1 && counter <= 2)) {
      counter++;
    }

    if (key == ESCAPE_KEY) {
      exit(EXIT_FAILURE);
    }

    if (key == CURRIAGE_RETURN) {
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
  return 0;
}

// https://github.com/catchorg/Catch2/blob/devel/examples/010-TestCase.cpp
// https://github.com/eshiofune/100-days-of-code/blob/master/cpp/BlinkingLights/main.cpp