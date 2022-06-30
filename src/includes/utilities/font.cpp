/* Including the libraries that are used in this utility. */
#include "windows.h"
#include <cwchar>

#ifndef CPP_FONT
#define CPP_FONT

/**
 * It changes the font size of the console window.
 *
 * @param fontSize The height of the font in pixels.
 */
void adjustFont(int fontSize) {
  CONSOLE_FONT_INFOEX cfi;

  cfi.dwFontSize.X = 4;        // weight
  cfi.dwFontSize.Y = fontSize; // height

  SetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE), FALSE, &cfi);
}

#endif