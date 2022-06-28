#include "../structures/screenStruct.cpp"

#ifndef SCREEN
#define SCREEN

void modifyScreenContentPlacement(vector<ScreenStruct> screenStruct) {

  for (int i = 1; i < screenStruct.size(); i++) {
    // Modifying the screen content placement.
    centerContent(screenStruct[i].alignmentX, screenStruct[i].alignmentY);
    applyColor(screenStruct[i].colorRange);
    adjustFont(screenStruct[i].fontSize);
    cout << screenStruct[i].name;
  }
}

#endif