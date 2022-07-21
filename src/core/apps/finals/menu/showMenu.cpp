/**
 * @file /src/core/apps/finals/menu/showMenu.cpp
 * @brief Finals menu
 *
 * */

/* A preprocessor directive that prevents the file from being included more than
  once. */
#ifndef CPP_FINALS_SEM_MENU
#define CPP_FINALS_SEM_MENU

/* Constants */
#include "../../../../includes/constants/alignment.cpp"
#include "../../../../includes/constants/color.cpp"
#include "../../../../includes/constants/menu.cpp"

/* Helpers */
#include "../../../../includes/helpers/color.cpp"
#include "../../../../includes/helpers/gotoxy.cpp"

/* Components */
#include "../../../components/text.cpp"

/**
 * It displays the finals menu
 *
 * @param selectedMenuItem The menu item that is currently selected.
 */
void displayFinalsMenu(std::string selectedMenuItem) {
  text("Final Term Applications", TEXT_BLUE, ALIGNMENTX2, ALIGNMENTY10);

  text("[1]. Square Root Calculator",
       selectedMenuItem == MENU_ITEM_1 ? TEXT_BLUE : TEXT_WHITE, ALIGNMENTX2,
       ALIGNMENTY12);

  text("[2]. Gotoxy & Ctime Feature",
       selectedMenuItem == MENU_ITEM_2 ? TEXT_BLUE : TEXT_WHITE, ALIGNMENTX2,
       ALIGNMENTY14);

  text("[3]. Function Oriented Factorial",
       selectedMenuItem == MENU_ITEM_3 ? TEXT_BLUE : TEXT_WHITE, ALIGNMENTX2,
       ALIGNMENTY16);

  text("[4]. 1D Array Even & Odd Calculator",
       selectedMenuItem == MENU_ITEM_4 ? TEXT_BLUE : TEXT_WHITE, ALIGNMENTX2,
       ALIGNMENTY18);

  text("[5]. Jump Statements",
       selectedMenuItem == MENU_ITEM_5 ? TEXT_BLUE : TEXT_WHITE, ALIGNMENTX2,
       ALIGNMENTY20);
}

#endif
