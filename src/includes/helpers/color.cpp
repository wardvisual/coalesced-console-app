/**
 * @file /src/includes/helpers/color.cpp
 * @brief A helper that is used to apply a color to content.
 */

/* Including the library that is used in this HELPER. */
#include "windows.h"

#include "../constants/color.cpp"
#include "../helpers/gotoxy.cpp"

#ifndef CPP_COLOR_HELPER
#define CPP_COLOR_HELPER

/**
 * It sets the color of the text in the console
 *
 * @param color The color you want to apply.
 */
void applyTextColor(int range) {
  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), range);
}

void applyBackgroundColor(int range) {
  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), range);
}

void clearPrevious(int length) {
  for (int i = 0; i < length; i++) {
    std::cout << "\b";
  }
}

void animateTextColor(std::string content, int alignmentX, int alignmentY) {
  int colors[] = {TEXT_BLUE, TEXT_GREEN, TEXT_WHITE, TEXT_RED};
  std::string textContent;
  int i = 0;

  while (true) {
    Sleep(1000);

    applyTextColor(colors[i]);
    if (i >= sizeof(colors) / sizeof(colors[0]))
      i = 0;

    applyTextColor(colors[i]);

    alignContent(alignmentX, alignmentY);
    std::cout << content;

    // clearPrevious(content.length());

    i++;
  }
}

#endif