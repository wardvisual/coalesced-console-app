#ifndef CPP_TITLE_COMPONENT
#define CPP_TITLE_COMPONENT

/* Including the files in the structures folder. */
#include "../../includes/structures/textStruct.cpp"

/* Including the files in the utilities folder. */
#include "../../includes/helpers/gotoxy.cpp"

void text(std::string content, int textColor, int alignmentX, int alignmentY) {
  applyTextColor(textColor);
  alignContent(alignmentX, alignmentY);
  std::cout << content;
}

#endif