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
void menuComponent(std::string selectedMenuItem) {
  text("[A]. About the Project",
       selectedMenuItem == MENU_ITEM_A ? TEXT_BLUE : TEXT_WHITE, ALIGNMENTX2,
       ALIGNMENTY10);

  text("[B]. Second Sem Applications",
       selectedMenuItem == MENU_ITEM_B ? TEXT_BLUE : TEXT_WHITE, ALIGNMENTX2,
       ALIGNMENTY12);

  text("[C]. Midterm Applications",
       selectedMenuItem == MENU_ITEM_C ? TEXT_BLUE : TEXT_WHITE, ALIGNMENTX2,
       ALIGNMENTY14);

  text("[D]. Final Sem Applications",
       selectedMenuItem == MENU_ITEM_D ? TEXT_BLUE : TEXT_WHITE, ALIGNMENTX2,
       ALIGNMENTY16);

  text("[E]. Supplementary Applications",
       selectedMenuItem == MENU_ITEM_E ? TEXT_BLUE : TEXT_WHITE, ALIGNMENTX2,
       ALIGNMENTY18);

  text("[F]. Exit", selectedMenuItem == MENU_ITEM_F ? TEXT_BLUE : TEXT_WHITE,
       ALIGNMENTX2, ALIGNMENTY20);
}

#endif
