
#ifndef CPP_SCREEN_HELPER
#define CPP_SCREEN_HELPER

#include "../structures/menuStruct.cpp"

#include "./color.cpp"
#include "./gotoxy.cpp"

/**
 * It modifies the screen content placement
 *
 * @param menuStruct The array of structs that contains the menu items.
 * @param maxItem The number of items in the menu.
 */
void modifyScreenContentPlacement(struct MenuStruct menuStruct[], int maxItem) {
  for (int i = 0; i <= maxItem; i++) {
    // Modifying the screen content placement.
    alignContent(menuStruct[i].alignmentX, menuStruct[i].alignmentY);
    applyTextColor(menuStruct[i].textColor);

    std::cout << menuStruct[i].name;
  }
}

#endif