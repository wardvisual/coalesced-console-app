/**
 * @file /src/includes/helpers/gotoxy.cpp
 * @brief A helper function for aligning a content's coordinates.
 */

/* Including the library that is used in this HELPER. */
#include "windows.h"

#ifndef CPP_GOTOXY_HELPER
#define CPP_GOTOXY_HELPER

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