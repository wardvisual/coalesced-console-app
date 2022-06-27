#include <conio.h>
#include <iostream>
#include <windows.h>

#include "./includes/utilities/border.h"
#include "./includes/utilities/color.h"
#include "./includes/utilities/font.h"
#include "./includes/utilities/gotoxy.h"
#include "./includes/utilities/menu.h"
#include "./includes/utilities/screen.h"

#include "./includes/constants/escapeSequence.h"
#include "./includes/constants/keycode.h"
#include "./includes/constants/runtime.h"

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

int main() {

  generateBorder(88, 32);

  MenuStruct secondSemMenu, midtermMenu, finalSemMenu, addedProgramMenu;
  Item item;

  secondSemMenu.setMaxItem(4);

  //   item.setText('Second');
  //   item.action() { cout << "second"; };
  //   menu.setName('1. Second Sem')
  //       ->setAlignment(5, 5)
  //       ->addItem(item)
  //       ->createMenu(menu);

  //   menu.setName('2. Midterm')->setAlignment(5, 6)->createMenu(menu);
  //   menu.setName('3. Final Sem')->setAlignment(5, 7)->createMenu(menu);
  //   menu.setName('4. Added Programs')->setAlignment(5, 8)->createMenu(menu);

  return 0;
}