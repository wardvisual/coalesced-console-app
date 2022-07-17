/**
 * @file /src/core/components/text.cpp
 * @brief A text component
 *
 * */

#ifndef CPP_TEXT_COMPONENT
#define CPP_TEXT_COMPONENT

#include <iomanip>

/* Helpers */
#include "../../includes/helpers/color.cpp"
#include "../../includes/helpers/gotoxy.cpp"

/**
 * It prints text to the console with a specified color and alignment
 *
 * @param content The text to be displayed.
 * @param textColor The color of the text.
 * @param alignmentX 0 = left, 1 = center, 2 = right
 * @param alignmentY 0 = top, 1 = middle, 2 = bottom
 */
void text(std::string content, int textColor, int alignmentX, int alignmentY) {
  applyTextColor(textColor);
  alignContent(alignmentX, alignmentY);
  std::cout << content;
}

/**
 * This function prints a floating point value to the console with two decimal
 * places
 *
 * @param value The value to be displayed.
 * @param textColor The color of the text.
 * @param alignmentX 0 = left, 1 = center, 2 = right
 * @param alignmentY 0 = top, 1 = middle, 2 = bottom
 */
void setDecimalValue(float value, int textColor, int alignmentX,
                     int alignmentY) {
  int twoDecimal = 2;

  applyTextColor(textColor);
  alignContent(alignmentX, alignmentY);
  std::cout << std::fixed << std::setprecision(twoDecimal) << value;
}

#endif