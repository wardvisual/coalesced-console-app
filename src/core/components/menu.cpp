/**
 * @file /src/core/components/menu.cpp
 * @brief A component that is used to create a complete menu.
 *
 * */

#ifndef CPP_MENU_COMPONENT
#define CPP_MENU_COMPONENT

/* Including the files in the structures folder. */
#include "../../includes/structures/menuStruct.cpp"

/* Including the files in the helpers folder. */
#include "../../includes/helpers/cleanUp.cpp"
#include "../../includes/helpers/color.cpp"
#include "../../includes/helpers/gotoxy.cpp"
#include "../../includes/helpers/menu.cpp"

/* Including the files in the constants folder. */
#include "../../includes/constants/alignment.cpp"
#include "../../includes/constants/app.cpp"
#include "../../includes/constants/color.cpp"

#include "../../core/apps/information/menu/showMenu.cpp"
#include "../../core/apps/midterm/menu/showMenu.cpp"
#include "../../core/apps/secondsem/menu/showMenu.cpp"

#include "header.cpp"
#include "input.cpp"
#include "text.cpp"

void menuItems(int selected);

void menuComponent() {
  const int maxMenuItem = 6;
  int userInput, keyStroke = 0;

  mainMenuHeaderComponent(" MAIN MENU ");
  menuItems(0);

  do {
    input<int>("Input", userInput);

    keyStroke = _getch();

    if (userInput == 1) {
      cleanUpScreen();
      menuItems(1);
      displayAboutUsMenu();
    }

    if (userInput == 2) {
      cleanUpScreen();
      menuItems(2);
      displaySecondSemMenu();
    }

    if (userInput == 3) {
      cleanUpScreen();
      menuItems(3);
      displayMidtermMenu();
    }

    if (userInput == 6) {
      keyStroke = ESCAPE_KEY;
      menuItems(6);

      text("Thank your for using this application!\n\n", TEXT_BLUE, ALIGNMENTX2,
           ALIGNMENTY24);
    }
  } while (keyStroke != ESCAPE_KEY);
}

void menuItems(int selected) {
  int itemOne = 1, itemTwo = 2, itemThree = 3, itemFour = 4, itemFive = 5,
      itemSix = 6;

  text("01. About the Project", selected == itemOne ? TEXT_BLUE : TEXT_WHITE,
       ALIGNMENTX2, ALIGNMENTY10);

  text("02. Second Sem Applications",
       selected == itemTwo ? TEXT_BLUE : TEXT_WHITE, ALIGNMENTX2, ALIGNMENTY12);

  text("03. Midterm Applications",
       selected == itemThree ? TEXT_BLUE : TEXT_WHITE, ALIGNMENTX2,
       ALIGNMENTY14);

  text("04. Final Sem Applications",
       selected == itemFour ? TEXT_BLUE : TEXT_WHITE, ALIGNMENTX2,
       ALIGNMENTY16);

  text("05. Supplementary Applications",
       selected == itemFive ? TEXT_BLUE : TEXT_WHITE, ALIGNMENTX2,
       ALIGNMENTY18);

  text("06. Exit", selected == itemSix ? TEXT_BLUE : TEXT_WHITE, ALIGNMENTX2,
       ALIGNMENTY20);
}

#endif
