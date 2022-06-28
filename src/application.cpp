#include <conio.h>
#include <iostream>
#include <windows.h>

#include "./includes/utilities/border.cpp"
#include "./includes/utilities/color.cpp"
#include "./includes/utilities/font.cpp"
#include "./includes/utilities/gotoxy.cpp"
#include "./includes/utilities/menu.cpp"
#include "./includes/utilities/screen.cpp"

#include "./includes/constants/escapeSequence.cpp"
#include "./includes/constants/keycode.cpp"
#include "./includes/constants/runtime.cpp"

#include "./includes/structures/menuStruct.cpp"

using namespace std;

// void displaySecondSemMenu() {
//   ScreenStruct screenStruct;

//   screenStruct.alignX = 30;
//   screenStruct.alignX = 5;
//   screenStruct.colorRange = 2;
//   screenStruct.content = "Second Sem";

//   modifyScreenContentPlacement(screenStruct);
// }

// void displayMidtermMenu() {
//   ScreenStruct screenStruct;

//   screenStruct.alignX = 30;
//   screenStruct.alignX = 5;
//   screenStruct.colorRange = 2;
//   screenStruct.content = "Midterm";

//   modifyScreenContentPlacement(screenStruct);
// }

// void displayFinalSemMenu() {
//   ScreenStruct screenStruct;

//   screenStruct.alignX = 30;
//   screenStruct.alignX = 5;
//   screenStruct.colorRange = 2;
//   screenStruct.content = "Final Sem";

//   modifyScreenContentPlacement(screenStruct);
// }


void renderConsoleApplication() {
  generateBorder(88, 32);

  MenuStruct secondSemMenu, midtermMenu, finalSemMenu, addedProgramMenu;

  secondSemMenu.name = "01. Second Sem";
  secondSemMenu.maxItem = 3;
  secondSemMenu.colorRange = 7;
  secondSemMenu.fontSize = 20;
  secondSemMenu.menuItemAlignmentX = 5;
  secondSemMenu.menuItemAlignmentY = 6;

  createMenu(secondSemMenu);

  midtermMenu.name = "02. Midterm";
  midtermMenu.maxItem = 3;
  midtermMenu.colorRange = 7;
  midtermMenu.fontSize = 20;
  midtermMenu.menuItemAlignmentX = 5;
  midtermMenu.menuItemAlignmentY = 7;

  createMenu(midtermMenu);

  finalSemMenu.name = "03. Final Sem";
  finalSemMenu.maxItem = 3;
  finalSemMenu.colorRange = 7;
  finalSemMenu.fontSize = 20;
  finalSemMenu.menuItemAlignmentX = 5;
  finalSemMenu.menuItemAlignmentY = 8;

  createMenu(finalSemMenu);
}