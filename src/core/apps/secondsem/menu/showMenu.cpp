/**
 * @file /src/core/apps/secondsem/menu/showMenu.cpp
 * @brief Second sem menu
 *
 * */

/* A preprocessor directive that prevents the file from being included more than
  once. */
#ifndef CPP_SECOND_SEM_MENU
#define CPP_SECOND_SEM_MENU

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
void displaySecondSemMenu(std::string selectedMenuItem) {
  text("Second Sem Applications", TEXT_BLUE, ALIGNMENTX2, ALIGNMENTY10);

  text("[A]. Activity One",
       selectedMenuItem == MENU_ITEM_A ? TEXT_BLUE : TEXT_WHITE, ALIGNMENTX2,
       ALIGNMENTY12);

  text("[B]. Activity Two",
       selectedMenuItem == MENU_ITEM_B ? TEXT_BLUE : TEXT_WHITE, ALIGNMENTX2,
       ALIGNMENTY14);

  text("[C]. Activity Three",
       selectedMenuItem == MENU_ITEM_C ? TEXT_BLUE : TEXT_WHITE, ALIGNMENTX2,
       ALIGNMENTY16);

  text("[D]. Activity Four",
       selectedMenuItem == MENU_ITEM_D ? TEXT_BLUE : TEXT_WHITE, ALIGNMENTX2,
       ALIGNMENTY18);

  text("[E]. Activity Five",
       selectedMenuItem == MENU_ITEM_E ? TEXT_BLUE : TEXT_WHITE, ALIGNMENTX2,
       ALIGNMENTY20);

  text("[F]. Group Activty",
       selectedMenuItem == MENU_ITEM_F ? TEXT_BLUE : TEXT_WHITE, ALIGNMENTX2,
       ALIGNMENTY22);

  text("[G]. Quiz One",
       selectedMenuItem == MENU_ITEM_G ? TEXT_BLUE : TEXT_WHITE, ALIGNMENTX2,
       ALIGNMENTY24);

  text("[H]. Quiz Two",
       selectedMenuItem == MENU_ITEM_H ? TEXT_BLUE : TEXT_WHITE, ALIGNMENTX2,
       ALIGNMENTY26);

  text("[I]. Back", selectedMenuItem == MENU_ITEM_I ? TEXT_BLUE : TEXT_WHITE,
       ALIGNMENTX2, ALIGNMENTY28);
}

#endif
