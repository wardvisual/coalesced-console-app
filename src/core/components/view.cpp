/**
 * @file /src/core/components/view.cpp
 * @brief
 * */

#ifndef CPP_VIEW_COMPONENT
#define CPP_VIEW_COMPONENT

#include "../../core/apps/secondsem/menu/showMenu.cpp"
#include "../../includes/helpers/cleanUp.cpp"

/**
 * It prints the menu items on the screen
 *
 * @param selectedMenuItem The menu item that is currently selected.
 */
void reViewMainScreen(int currentMenu, void (&reView)()) {
  cleanUpScreen(mainMenuHeaderComponent, headerComponent);
  displaySecondSemMenu(currentMenu);

  reView();
}

void reViewMenuScreen(int currentMenu, void (&reView)()) {
  cleanUpScreen(mainMenuHeaderComponent, headerComponent);
  displaySecondSemMenu(currentMenu);

  reView();
}

#endif
