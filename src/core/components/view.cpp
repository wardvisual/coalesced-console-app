/**
 * @file /src/core/components/view.cpp
 * @brief A view component
 * */

/* A preprocessor directive that prevents the file from being included more than
  once. */
#ifndef CPP_VIEW_COMPONENT
#define CPP_VIEW_COMPONENT

/* Core Applications */
#include "../../core/apps/finals/menu/showMenu.cpp"
#include "../../core/apps/secondsem/menu/showMenu.cpp"

/* Helpers */
#include "../../includes/helpers/cleanUp.cpp"

/* Constants */
#include "../../includes/constants/appType.cpp"

#include "menu.cpp"

/**
 * It takes a string and a function as parameters, and then calls the function
 *
 * @param currentMenu The current menu that the user is in.
 * @param reView This is the function that will be called to re-display the
 * menu.
 */
void reViewMainScreen(std::string type, std::string currentMenu,
                      void (&reView)()) {
  cleanUpScreen(mainMenuHeaderComponent, headerComponent);

  if (type == SECOND_SEM_APP) {
    renderSecondSemAppMenu(currentMenu);
  }

  if (type == MIDTERM_APP) {
    menuComponent(currentMenu);
  }

  if (type == FINAL_TERM_APP) {
    renderFinalTermAppMenu(currentMenu);
  }

  reView();
}

/**
 * It takes a string and a function as parameters, and then calls the function
 *
 * @param currentMenu The current menu that the user is in.
 * @param reView This is the function that will be called to re-display the
 * menu.
 */
void reViewMenuScreen(std::string currentMenu, void (&reView)()) {
  cleanUpScreen(mainMenuHeaderComponent, headerComponent);
  renderSecondSemAppMenu(currentMenu);

  reView();
}

#endif
