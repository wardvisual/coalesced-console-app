/**
 * @file /src/core/components/menu.cpp
 * @brief A menu component
 * */

/* A preprocessor directive that prevents the file from being included more than
  once. */
#ifndef CPP_MENU_COMPONENT
#define CPP_MENU_COMPONENT

/* Contants */
#include "../../includes/constants/menu.cpp"
#include "../../includes/constants/alignment.cpp"
#include "../../includes/constants/color.cpp"

/* Component */
#include "text.cpp"

/**
 * It prints the menu items on the screen
 *
 * @param selectedMenuItem The menu item that is currently selected.
 */
void menuComponent(std::string selectedMenuItem) {
  text("[1]. About the Project",
       selectedMenuItem == MENU_ITEM_1 ? TEXT_BLUE : TEXT_WHITE, ALIGNMENTX2,
       ALIGNMENTY10);

  text("[2]. Second Sem Applications",
       selectedMenuItem == MENU_ITEM_2 ? TEXT_BLUE : TEXT_WHITE, ALIGNMENTX2,
       ALIGNMENTY12);

  text("[3]. Midterm Application(s)",
       selectedMenuItem == MENU_ITEM_3 ? TEXT_BLUE : TEXT_WHITE, ALIGNMENTX2,
       ALIGNMENTY14);

  text("[4]. Final Sem Applications",
       selectedMenuItem == MENU_ITEM_4 ? TEXT_BLUE : TEXT_WHITE, ALIGNMENTX2,
       ALIGNMENTY16);

  text("[5]. Supplementary Applications",
       selectedMenuItem == MENU_ITEM_5 ? TEXT_BLUE : TEXT_WHITE, ALIGNMENTX2,
       ALIGNMENTY18);

  text("[6]. Exit", selectedMenuItem == MENU_ITEM_6 ? TEXT_BLUE : TEXT_WHITE,
       ALIGNMENTX2, ALIGNMENTY20);
}

#endif
