#include "../constants/apps.cpp"

#include "../../apps/finals/menu/showMenu.cpp"
#include "../../apps/midterm/menu/showMenu.cpp"
#include "../../apps/seconsem/menu/showMenu.cpp"

#ifndef CPP_MENU_STRUCT
#define CPP_MENU_STRUCT

/**
 * It's a struct that contains a string, a string, two ints, an int, an int, and
 * a function that takes a string and returns nothing.
 * @property name - The name of the menu
 * @property type - The type of menu to be displayed.
 * @property {int} alignmentX - The X-axis alignment of the menu.
 * @property {int} alignmentY - The Y coordinate of the menu.
 * @property {int} textColor - The color of the text.
 * @property {int} fontSize - The size of the font
 */
struct MenuStruct {
  std::string name;
  std::string type;
  int alignmentX;
  int alignmentY;
  int textColor;
  int fontSize;
  void renderItems(std::string type) {
    if (type == SECOND_SEM)
      std::cout << SECOND_SEM;
    // displaySecondSemMenu();

    if (type == MID_TERM)
      std::cout << MID_TERM;
    // displayMidtermMenu();

    if (type == FINAL_SEM)
      std::cout << FINAL_SEM;
    // displayFinalsMenu();
  };
};

#endif