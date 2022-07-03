#ifndef CPP_TITLE_COMPONENT
#define CPP_TITLE_COMPONENT

/* Including the files in the helpers folder. */
#include "../../includes/helpers/color.cpp"

/* Including the files in the utilities folder. */
#include "../../includes/utilities/gotoxy.cpp"

struct TitleStruct {
  std::string content;
  int bgColor;
  int textColor;
  int alignmentX;
  int alignmentY;
};

void title(TitleStruct property) {
  alignContent(property.alignmentX, property.alignmentY);
  applyBackgroundColor(property.bgColor);
}

#endif