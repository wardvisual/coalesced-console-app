#include "../structures/screenStruct.cpp"

#ifndef SCREEN
#define SCREEN

void modifyScreenContentPlacement(ScreenStruct screenStruct) {
  // Modifying the screen content placement.
  centerContent(screenStruct.alignmentX, screenStruct.alignmentY);
  applyColor(screenStruct.colorRange);
  adjustFont(screenStruct.fontSize);

  // Printing the content of the screenStruct.content variable.
  cout << screenStruct.name;
}

#endif 