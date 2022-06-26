#include "windows.h"

/**
 * @name applyColor
 * @brief this void function is for applying color to the text.
 * @param color {int}
 */

void centerContent(short x, short y) {
  COORD coordinates;

  coordinates.X = x;
  coordinates.Y = y;

  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
