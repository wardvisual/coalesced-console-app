/**
 * @file /src/includes/helpers/cleanUp.cpp
 * @brief A helpers that is used to clean up the screen
 *
 * */

#ifndef CPP_CLEAN_UP_HELPER
#define CPP_CLEAN_UP_HELPER

#include "../../core/components/header.cpp"
#include "../../includes/structures/menuStruct.cpp"

void menuItems(struct MenuStruct menuStruct[], int maxMenuItem);

void cleanUpScreen(struct MenuStruct menuStruct[], int maxMenuItem) {
  system("clear");
  menuItems(menuStruct, maxMenuItem);
  headerComponent(" GROUP SIX FINAL PROJECT | CONSOLE APPLICATION ");
  mainMenuHeaderComponent(" MAIN MENU ");
}

void menuItems(struct MenuStruct menuStruct[], int maxMenuItem) {
  for (int i = 0; i < maxMenuItem; i++) {
    text(menuStruct[i].name, TEXT_WHITE, menuStruct[i].alignmentX,
         menuStruct[i].alignmentY);
  }
}

#endif