/**
 * @file /src/includes/helpers/color.cpp
 * @brief A helper function for applying color to certain content.
 */

/* A preprocessor directive that prevents the file from being included more than
  once. */
#ifndef CPP_COLOR_HELPER
#define CPP_COLOR_HELPER

/* Built-in header library */
#include "windows.h"
/* Contants. */
#include "../constants/color.cpp"
/* Helpers. */
#include "../helpers/gotoxy.cpp"


/**
 * It sets the color of the text in the console
 *
 * @param color The color you want to apply.
 */
void applyTextColor(int range) {
  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), range);
}

/**
 * It changes the background color of the console
 *
 * @param range The color range to apply.
 */
void applyBackgroundColor(int range) {
  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), range);
}

/**
 * It prints a backspace character for each character in the string
 *
 * @param length The length of the string you want to clear.
 */
void clearPrevious(int length) {
  for (int i = 0; i < length; i++) {
    std::cout << "\b";
  }
}

/**
 * It takes a string, and an alignment, and animates the text color of the
 * string
 *
 * @param content The text to be animated
 * @param alignmentX 0 = left, 1 = center, 2 = right
 * @param alignmentY 0 = top, 1 = middle, 2 = bottom
 */
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