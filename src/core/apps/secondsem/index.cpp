/**
 * @file /src/apps/secondsem/index.cpp
 * @brief
 *
 * */

#ifndef CPP_INDEX_SECONDSEM
#define CPP_INDEX_SECONDSEM

#define MAX_MENU_ITEM_LENGTH 9

#include "activityOne/index.cpp"

#include <functional>
#include <vector>

void (*secondSemFunctions[MAX_MENU_ITEM_LENGTH])() = {activityOne};

void renderSelectedMenu(int selecteMenu, char menus[]) {
  int firstIndex = 0;
  for (int i = 0; i < sizeof(menus) / sizeof(menus[firstIndex]); i++) {
    if (selecteMenu == menus[i]) {
      (*secondSemFunctions[i])();
    }
  }
}

#endif

// return array of functions
// TODO import all acttivies
// TODO ccreate a function and return the imported activities functions
// TODO helper
// https://docs.microsoft.com/en-us/troubleshoot/developer/visualstudio/cpp/language-compilers/declare-pointers-to-functions