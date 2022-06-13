#include "windows.h"

/**
 * @brief Macro contants for colors
 */
#define BLUE 1
#define GREEN 2
#define RED 4
#define WHITE 15

/**
 * @name change_color
 * @brief this void function is for changing the text color
 * @param color {int}
 */

void change_color(int color) {
  HANDLE hConsole;

  hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
  SetConsoleTextAttribute(hConsole, color);
}