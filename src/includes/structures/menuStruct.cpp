#include "../constants/app.cpp"

#include "../../core/apps/finals/menu/showMenu.cpp"
#include "../../core/apps/information/menu/showMenu.cpp"
#include "../../core/apps/midterm/menu/showMenu.cpp"
#include "../../core/apps/seconsem/menu/showMenu.cpp"
#include "../../core/apps/supplementary/menu/showMenu.cpp"

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
    if (type == DEVELOPERS_INFORMATION)
      displayAboutUsMenu();

    if (type == SECOND_SEM)
      displaySecondSemMenu();

    if (type == MID_TERM)
      displayMidtermMenu();

    if (type == FINAL_SEM)
      displayFinalsMenu();

    if (type == SUMPPLEMENTARY_APP)
      displaySupplementaryMenu();
  };
};

#endif