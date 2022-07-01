/* Including the library that is used in this utility. */
#include "windows.h"

#ifndef CPP_GOTOXY_UTILITY
#define CPP_GOTOXY_UTILITY

/**
 * It sets the cursor position to the specified coordinates
 *
 * @param x The X coordinate of the console window.
 * @param y The y coordinate of the console's buffer area.
 */
void alignContent(short x, short y) {
  COORD coordinates;

  coordinates.X = x;
  coordinates.Y = y;

  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

#endif