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
void renderSecondSemAppMenu(std::string selectedMenuItem) {
  text("Second Sem Applications", TEXT_BLUE, ALIGNMENTX2, ALIGNMENTY10);

  text("[1]. Display Name & Course",
       selectedMenuItem == MENU_ITEM_1 ? TEXT_BLUE : TEXT_WHITE, ALIGNMENTX2,
       ALIGNMENTY12);

  text("[2]. Sum Calculator",
       selectedMenuItem == MENU_ITEM_2 ? TEXT_BLUE : TEXT_WHITE, ALIGNMENTX2,
       ALIGNMENTY14);

  text("[3]. Shapes Area Calculator",
       selectedMenuItem == MENU_ITEM_3 ? TEXT_BLUE : TEXT_WHITE, ALIGNMENTX2,
       ALIGNMENTY16);

  text("[4]. Tuition Fee Calculator",
       selectedMenuItem == MENU_ITEM_4 ? TEXT_BLUE : TEXT_WHITE, ALIGNMENTX2,
       ALIGNMENTY18);

  text("[5]. Even & Odd Number Identifier",
       selectedMenuItem == MENU_ITEM_5 ? TEXT_BLUE : TEXT_WHITE, ALIGNMENTX2,
       ALIGNMENTY20);

  text("[6]. Four Operations Calculator",
       selectedMenuItem == MENU_ITEM_6 ? TEXT_BLUE : TEXT_WHITE, ALIGNMENTX2,
       ALIGNMENTY22);

  text("[7]. Unit Converter",
       selectedMenuItem == MENU_ITEM_7 ? TEXT_BLUE : TEXT_WHITE, ALIGNMENTX2,
       ALIGNMENTY24);

  text("[8]. Day & Time Converter",
       selectedMenuItem == MENU_ITEM_8 ? TEXT_BLUE : TEXT_WHITE, ALIGNMENTX2,
       ALIGNMENTY26);

  text("[9]. Back", selectedMenuItem == MENU_ITEM_9 ? TEXT_BLUE : TEXT_WHITE,
       ALIGNMENTX2, ALIGNMENTY28);
}

#endif
