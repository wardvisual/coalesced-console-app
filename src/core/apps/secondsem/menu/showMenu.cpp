
#ifndef CPP_SECOND_SEM_MENU
#define CPP_SECOND_SEM_MENU

#include "../../../../includes/constants/alignment.cpp"
#include "../../../../includes/constants/color.cpp"
#include "../../../../includes/constants/menu.cpp"

#include "../../../../includes/helpers/color.cpp"
#include "../../../../includes/helpers/gotoxy.cpp"

#include "../../../components/text.cpp"

void displaySecondSemMenu(int selectedMenuItem) {
  text("Second Sem Applications", TEXT_BLUE, ALIGNMENTX38, ALIGNMENTY10);

  text("Activity 01",
       selectedMenuItem == MENU_ITEM_ONE ? TEXT_BLUE : TEXT_WHITE, ALIGNMENTX38,
       ALIGNMENTY12);

  text("Activity 02",
       selectedMenuItem == MENU_ITEM_TWO ? TEXT_BLUE : TEXT_WHITE, ALIGNMENTX38,
       ALIGNMENTY14);

  text("Activity 03",
       selectedMenuItem == MENU_ITEM_THREE ? TEXT_BLUE : TEXT_WHITE,
       ALIGNMENTX38, ALIGNMENTY16);
}

#endif
