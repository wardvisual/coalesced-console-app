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

  return 0;
}