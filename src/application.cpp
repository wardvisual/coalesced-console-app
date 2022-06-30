/* Including the libraries. */
#include <conio.h>
#include <iostream>
#include <windows.h>

/* Including the files in the helpers folder. */
#include "./includes/helpers/border.cpp"
#include "./includes/helpers/screen.cpp"

/* Including the files in the utilities folder. */
#include "./includes/utilities/color.cpp"
#include "./includes/utilities/font.cpp"
#include "./includes/utilities/gotoxy.cpp"
#include "./includes/utilities/menu.cpp"

/* Including the files in the constants folder. */
#include "./includes/constants/apps.cpp"
#include "./includes/constants/escapeSequence.cpp"
#include "./includes/constants/keycode.cpp"
#include "./includes/constants/runtime.cpp"

/* Including the files in the structures folder. */
#include "./includes/structures/menuStruct.cpp"

/**
 * It creates a menu with 3 options
 */
void renderConsoleApplication() {
  generateBorder(88, 32);
  const int MAX = 3;

  MenuStruct secondSemMenu, midtermMenu, finalSemMenu, addedProgramMenu;

  /* Assigning values to the secondSemMenu struct instance. */
  secondSemMenu.name = "01. Second Sem";
  secondSemMenu.textColor = 7;
  secondSemMenu.fontSize = 20;
  secondSemMenu.alignmentX = 4;
  secondSemMenu.alignmentY = 6;
  secondSemMenu.type = SECOND_SEM;

  /* Assigning values to the  midtermMenu struct instance. */
  midtermMenu.name = "02. Midterm";
  midtermMenu.textColor = 7;
  midtermMenu.fontSize = 20;
  midtermMenu.alignmentX = 4;
  midtermMenu.alignmentY = 7;
  midtermMenu.type = MID_TERM;

  /* Assigning values to the  finalSemMenu struct instance. */
  finalSemMenu.name = "03. Final Sem";
  finalSemMenu.textColor = 7;
  finalSemMenu.fontSize = 20;
  finalSemMenu.alignmentX = 4;
  finalSemMenu.alignmentY = 8;
  finalSemMenu.type = FINAL_SEM;

  /* Creating an array of MenuStruct. */
  struct MenuStruct menuStruct[MAX] = {secondSemMenu, midtermMenu,
                                       finalSemMenu};

  /* Calling the function createMenu() and passing the array of MenuStruct and
   the MAX value. */
  createMenu(menuStruct, MAX);
}