#include "../structures/menuStruct.cpp"

#include "../utilities/color.cpp"
#include "../utilities/font.cpp"
#include "../utilities/gotoxy.cpp"

#ifndef CPP_SCREEN
#define CPP_SCREEN

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