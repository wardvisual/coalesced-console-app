/* Including the library that is used in this utility. */
#include "windows.h"

#include "../constants/color.cpp"

#ifndef CPP_COLOR_UTILITY
#define CPP_COLOR_UTILITY

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

void clearScreen(int length) {
  for (int i = 0; i < length; i++) {
    std::cout << "\b";
  }
}

void animateTextColor(std::string content) {
  int colors[] = {TEXT_BLUE, TEXT_GREEN, TEXT_WHITE, TEXT_RED};
  std::string textContent;
  int i = 0;

  while (true) {
    Sleep(1000);

    applyTextColor(colors[i]);
    if (i >= 4)
      i = 0;

    applyTextColor(colors[i]);

    std::cout << content;

    clearScreen(content.length());

    i++;
  }
}

#endif