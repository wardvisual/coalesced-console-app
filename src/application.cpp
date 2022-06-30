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
//   screenStruct.textColor = 2;
//   screenStruct.content = "Second Sem";

//   modifyScreenContentPlacement(screenStruct);
// }

// void displayMidtermMenu() {
//   ScreenStruct screenStruct;

//   screenStruct.alignX = 30;
//   screenStruct.alignX = 5;
//   screenStruct.textColor = 2;
//   screenStruct.content = "Midterm";

//   modifyScreenContentPlacement(screenStruct);
// }

// void displayFinalSemMenu() {
//   ScreenStruct screenStruct;

//   screenStruct.alignX = 30;
//   screenStruct.alignX = 5;
//   screenStruct.textColor = 2;
//   screenStruct.content = "Final Sem";

//   modifyScreenContentPlacement(screenStruct);
// }

void renderConsoleApplication() {
  generateBorder(88, 32);
  const int MAX = 3;

  MenuStruct secondSemMenu, midtermMenu, finalSemMenu, addedProgramMenu;

  secondSemMenu.name = "01. Second Sem";
  secondSemMenu.textColor = 7;
  secondSemMenu.fontSize = 20;
  secondSemMenu.alignmentX = 5;
  secondSemMenu.alignmentY = 6;
  secondSemMenu.displaySecondSemMenu();

  midtermMenu.name = "02. Midterm";
  midtermMenu.textColor = 7;
  midtermMenu.fontSize = 20;
  midtermMenu.alignmentX = 5;
  midtermMenu.alignmentY = 7;
  midtermMenu.displayMidtermMenu();

  finalSemMenu.name = "03. Final Sem";
  finalSemMenu.textColor = 7;
  finalSemMenu.fontSize = 20;
  finalSemMenu.alignmentX = 5;
  finalSemMenu.alignmentY = 8;
  finalSemMenu.displayFinalSemMenu();

  struct MenuStruct menuStruct[MAX] = {secondSemMenu, midtermMenu,
                                       finalSemMenu};
  createMenu(menuStruct, MAX);
}