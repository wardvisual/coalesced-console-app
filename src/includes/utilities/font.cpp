#include <cwchar>
#include "windows.h"

/**
 * @name applyColor
 * @brief this void function is for applying color to the text.
 * @param color {int}
 */

void adjustFont(int fontSize) {
  CONSOLE_FONT_INFOEX cfi;
    
  cfi.dwFontSize.X = 4; // weight
  cfi.dwFontSize.Y = fontSize; // height

  SetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE), FALSE, &cfi);
}
