/* Including the library that is used in this utility. */
#include "windows.h"

#ifndef CPP_COLOR
#define CPP_COLOR

/**
 * @brief Macro contants for colors
 */
#define BLUE 1
#define GREEN 2
#define RED 4
#define WHITE 15

/**
 * It sets the color of the text in the console
 *
 * @param color The color you want to apply.
 */
void applyColor(int color) {
  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

#endif