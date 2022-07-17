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

  text("[1]. Activity One",
       selectedMenuItem == MENU_ITEM_1 ? TEXT_BLUE : TEXT_WHITE, ALIGNMENTX2,
       ALIGNMENTY12);

  text("[2]. Activity Two",
       selectedMenuItem == MENU_ITEM_2 ? TEXT_BLUE : TEXT_WHITE, ALIGNMENTX2,
       ALIGNMENTY14);

  text("[3]. Activity Three",
       selectedMenuItem == MENU_ITEM_3 ? TEXT_BLUE : TEXT_WHITE, ALIGNMENTX2,
       ALIGNMENTY16);

  text("[4]. Activity Four",
       selectedMenuItem == MENU_ITEM_4 ? TEXT_BLUE : TEXT_WHITE, ALIGNMENTX2,
       ALIGNMENTY18);

  text("[5]. Activity Five",
       selectedMenuItem == MENU_ITEM_5 ? TEXT_BLUE : TEXT_WHITE, ALIGNMENTX2,
       ALIGNMENTY20);

  text("[6]. Group Activty",
       selectedMenuItem == MENU_ITEM_6 ? TEXT_BLUE : TEXT_WHITE, ALIGNMENTX2,
       ALIGNMENTY22);

  text("[7]. Quiz One",
       selectedMenuItem == MENU_ITEM_7 ? TEXT_BLUE : TEXT_WHITE, ALIGNMENTX2,
       ALIGNMENTY24);

  text("[8]. Quiz Two",
       selectedMenuItem == MENU_ITEM_8 ? TEXT_BLUE : TEXT_WHITE, ALIGNMENTX2,
       ALIGNMENTY26);

  text("[9]. Back", selectedMenuItem == MENU_ITEM_9 ? TEXT_BLUE : TEXT_WHITE,
       ALIGNMENTX2, ALIGNMENTY28);
}

#endif
