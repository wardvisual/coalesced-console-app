/**
 * @file /src/core/components/text.cpp
 * @brief A component that is used to create a complete text style.
 *
 * */

#ifndef CPP_TITLE_COMPONENT
#define CPP_TITLE_COMPONENT

/* Including the files in the helpers folder. */
#include "../../includes/helpers/color.cpp"
#include "../../includes/helpers/gotoxy.cpp"

void text(std::string content, int textColor, int alignmentX, int alignmentY) {
  applyTextColor(textColor);
  alignContent(alignmentX, alignmentY);
  std::cout << content;
}

#endif