/**
 * @file /src/core/components/text.cpp
 * @brief A component that is used to create a complete text style.
 *
 * */

#ifndef CPP_TEXT_COMPONENT
#define CPP_TEXT_COMPONENT

#include <iomanip>

/* Including the files in the helpers folder. */
#include "../../includes/helpers/color.cpp"
#include "../../includes/helpers/gotoxy.cpp"

void text(std::string content, int textColor, int alignmentX, int alignmentY) {
  applyTextColor(textColor);
  alignContent(alignmentX, alignmentY);
  std::cout << content;
}

void setDecimalValue(float value, int textColor, int alignmentX,
                     int alignmentY) {
  int twoDecimal = 2;

  applyTextColor(textColor);
  alignContent(alignmentX, alignmentY);
  std::cout << std::fixed << std::setprecision(twoDecimal) << value;
}

#endif