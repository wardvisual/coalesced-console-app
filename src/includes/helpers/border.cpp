/**
 * @file /src/includes/helpers/border.cpp
 * @brief A helper that is used to generate a border line.
 */

#ifndef CPP_BORDER_HELPER
#define CPP_BORDER_HELPER

/* Including the library. */
#include <iomanip>
#include <iostream>

#include "../constants/border.cpp"
#include "../constants/color.cpp"
#include "../helpers/color.cpp"
#include "../helpers/gotoxy.cpp"

/**
 * It generates a border of a specified symbol, count, x and y coordinates, and
 * type (horizontal or vertical)
 *
 * @param type "horizontal" or "vertical"
 * @param symbol The symbol you want to use to generate the border.
 * @param count The number of times the symbol will be repeated.
 * @param x x-axis position
 * @param y y-axis
 */
void generateBorder(std::string type, std::string symbol, int count,
                    int alignmentX, int alignmentY) {
  std::string generatedSymbol;

  if (type == HORIZONTAL) {
    for (int i = 0; i <= count; i++) {
      generatedSymbol += symbol;
      applyTextColor(TEXT_BLUE);
      alignContent(alignmentX, alignmentY);
      std::cout << generatedSymbol;
    }
  }

  if (type == VERTICAL) {
    for (int i = 0; i <= count; i++) {
      applyTextColor(TEXT_BLUE);
      alignContent(alignmentX, alignmentY + i);
      std::cout << std::setw(alignmentX) << symbol;
    }
  }
}

#endif