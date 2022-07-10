/**
 * @file /src/includes/structures/menuStruct.cpp
 * @brief  A structure that is used to create a menu.
 */

#include "../constants/app.cpp"

#include "../../core/apps/finals/menu/showMenu.cpp"
#include "../../core/apps/information/menu/showMenu.cpp"
#include "../../core/apps/midterm/menu/showMenu.cpp"
#include "../../core/apps/seconsem/menu/showMenu.cpp"
#include "../../core/apps/supplementary/menu/showMenu.cpp"

#include "../../core/components/header.cpp"

#ifndef CPP_MENU_STRUCT
#define CPP_MENU_STRUCT

void cleanUpScreen() {
  system("clear");
  headerComponent(" GROUP SIX FINAL PROJECT | CONSOLE APPLICATION ");
  mainMenuHeaderComponent(" MAIN MENU ");
}

struct MenuStruct {
  std::string name;
  std::string type;
  int alignmentX;
  int alignmentY;
  int textColor;
  void renderItems(std::string type) {
    if (type == DEVELOPERS_INFORMATION) {
      cleanUpScreen();
      displayAboutUsMenu();
    }

    if (type == SECOND_SEM) {
      cleanUpScreen();
      displaySecondSemMenu();
    }

    if (type == MID_TERM) {
      cleanUpScreen();
      displayMidtermMenu();
    }
    if (type == FINAL_SEM) {
      cleanUpScreen();
      displayFinalsMenu();
    }

    if (type == SUMPPLEMENTARY_APP) {
      cleanUpScreen();
      displaySupplementaryMenu();
    }
  };
};

#endif