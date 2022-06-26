#include <conio.h>
#include <iostream>
#include <windows.h>

#include "./includes/utilities/border.h"
#include "./includes/utilities/color.h"
#include "./includes/utilities/font.h"
#include "./includes/utilities/gotoxy.h"
#include "./includes/utilities/screen.h"

/* Moves the active position to the initial position of the current line. */
#define CURRIAGE_RETURN 13
#define ESCAPE_KEY 27

/* Reports the termination when some error or interruption occurs during the
 execution of the program. */
#define EXIT_FAILURE 1

using namespace std;

void displaySecondSemMenu() {
  ScreenInfo screenInfo;

  screenInfo.gotoxyX = 30;
  screenInfo.gotoxyY = 5;
  screenInfo.colorRange = 2;
  screenInfo.content = "Second Sem";

  modifyScreenContentPlacement(screenInfo);
}

void displayMidtermMenu() {
  centerContent(30, 5);
  cout << "displayMidtermMenu";
}

void displayFinalSemMenu() {
  centerContent(30, 5);
  cout << "displayFinalSemMenu";
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