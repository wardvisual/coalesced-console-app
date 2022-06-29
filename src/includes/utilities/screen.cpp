#include "../structures/menuStruct.cpp"

#ifndef SCREEN
#define SCREEN

void modifyScreenContentPlacement(struct MenuStruct menuStruct[], int maxItem) {
  for (int i = 0; i < maxItem; i++) {
    // Modifying the screen content placement.
    centerContent(menuStruct[i].alignmentX, menuStruct[i].alignmentY);
    applyColor(menuStruct[i].textColor);
    adjustFont(menuStruct[i].fontSize);
    cout << menuStruct[i].name;
  }
}

#endif