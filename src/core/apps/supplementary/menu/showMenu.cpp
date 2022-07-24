/**
 * @file /src/core/apps/supplementary/menu/showMenu.cpp
 * @brief Supplementary menu
 *
 * */

/* A preprocessor directive that prevents the file from being included more than
  once. */
#ifndef CPP_SUPPLEMENTARY_MENU
#define CPP_SUPPLEMENTARY_MENU

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
 * It displays the second semester menu
 *
 * @param selectedMenuItem The menu item that is currently selected.
 */
void renderSupplementaryAppMenu(std::string selectedMenuItem) {
  text("Supplementary Applications", TEXT_BLUE, ALIGNMENTX2, ALIGNMENTY10);

  text("[1]. Student Management Sys.",
       selectedMenuItem == MENU_ITEM_1 ? TEXT_BLUE : TEXT_WHITE, ALIGNMENTX2,
       ALIGNMENTY12);

  text("[2]. Back", selectedMenuItem == MENU_ITEM_4 ? TEXT_BLUE : TEXT_WHITE,
       ALIGNMENTX2, ALIGNMENTY14);
}

#endif
