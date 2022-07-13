/**
 * @file /src/core/components/menu.cpp
 * @brief A component that is used to create a menu component
 * */

#ifndef CPP_MENU_COMPONENT
#define CPP_MENU_COMPONENT

/* Including the files in the constants folder. */
#include "../../includes/constants/menu.cpp"
#include "../../includes/constants/alignment.cpp"
#include "../../includes/constants/color.cpp"

#include "text.cpp"

/**
 * It prints the menu items on the screen
 *
 * @param selectedMenuItem The menu item that is currently selected.
 */
void menuComponent(int selectedMenuItem) {
  text("01. About the Project",
       selectedMenuItem == MENU_ITEM_ONE ? TEXT_BLUE : TEXT_WHITE, ALIGNMENTX2,
       ALIGNMENTY10);

  text("02. Second Sem Applications",
       selectedMenuItem == MENU_ITEM_TWO ? TEXT_BLUE : TEXT_WHITE, ALIGNMENTX2,
       ALIGNMENTY12);

  text("03. Midterm Applications",
       selectedMenuItem == MENU_ITEM_THREE ? TEXT_BLUE : TEXT_WHITE,
       ALIGNMENTX2, ALIGNMENTY14);

  text("04. Final Sem Applications",
       selectedMenuItem == MENU_ITEM_FOUR ? TEXT_BLUE : TEXT_WHITE, ALIGNMENTX2,
       ALIGNMENTY16);

  text("05. Supplementary Applications",
       selectedMenuItem == MENU_ITEM_FIVE ? TEXT_BLUE : TEXT_WHITE, ALIGNMENTX2,
       ALIGNMENTY18);

  text("06. Exit", selectedMenuItem == MENU_ITEM_SIX ? TEXT_BLUE : TEXT_WHITE,
       ALIGNMENTX2, ALIGNMENTY20);
}

#endif
