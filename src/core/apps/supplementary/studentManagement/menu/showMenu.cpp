/**
 * @file /src/core/apps/supplementary/studentManagementSystem/menu/showMenu.cpp
 * @brief Student management system menu
 *
 * */

/* A preprocessor directive that prevents the file from being included more than
  once. */
#ifndef CPP_STUDENT_MANAGEMENT_SYSTEM_SUPPLEMENTARY_MENU
#define CPP_STUDENT_MANAGEMENT_SYSTEM_SUPPLEMENTARY_MENU

/* Constants */
#include "../../../../../includes/constants/alignment.cpp"
#include "../../../../../includes/constants/color.cpp"
#include "../../../../../includes/constants/menu.cpp"

/* Helpers */
#include "../../../../../includes/helpers/color.cpp"
#include "../../../../../includes/helpers/gotoxy.cpp"

/* Components */
#include "../../../../components/text.cpp"

/**
 * It displays the second semester menu
 *
 * @param selectedMenuItem The menu item that is currently selected.
 */
void studentManagementMenu(std::string selectedMenuItem) {
  text("Student Management Application", TEXT_BLUE, ALIGNMENTX2, ALIGNMENTY10);

  text("[1]. View all Students",
       selectedMenuItem == MENU_ITEM_1 ? TEXT_BLUE : TEXT_WHITE, ALIGNMENTX2,
       ALIGNMENTY12);

  text("[2]. Add new Student",
       selectedMenuItem == MENU_ITEM_2 ? TEXT_BLUE : TEXT_WHITE, ALIGNMENTX2,
       ALIGNMENTY14);

  text("[3]. Edit Student Record",
       selectedMenuItem == MENU_ITEM_3 ? TEXT_BLUE : TEXT_WHITE, ALIGNMENTX2,
       ALIGNMENTY16);

  text("[3]. Delete Student",
       selectedMenuItem == MENU_ITEM_4 ? TEXT_BLUE : TEXT_WHITE, ALIGNMENTX2,
       ALIGNMENTY18);

  text("[4]. Back", selectedMenuItem == MENU_ITEM_5 ? TEXT_BLUE : TEXT_WHITE,
       ALIGNMENTX2, ALIGNMENTY20);
}

#endif
