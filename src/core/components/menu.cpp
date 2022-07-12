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
#include "../../includes/helpers/color.cpp"
#include "../../includes/helpers/gotoxy.cpp"
#include "../../includes/helpers/menu.cpp"

/* Including the files in the constants folder. */
#include "../../includes/constants/alignment.cpp"
#include "../../includes/constants/app.cpp"
#include "../../includes/constants/color.cpp"

#include "header.cpp"
#include "text.cpp"

void menuComponent() {
  const int maxMenuItem = 6;
  std::string generatedSymbol18 = generateSymbol("-", 20);
  std::string generatedSymbol30 = generateSymbol("-", 30);

  MenuStruct developersInformation, secondSemMenu, midtermMenu, finalSemMenu,
      supplementaryMenu, exitApplication;

  mainMenuHeaderComponent(" MAIN MENU ");
  /* Assigning values to the secondSemMenu struct instance. */
  developersInformation.name = "01. About the Project";
  developersInformation.textColor = TEXT_WHITE;
  developersInformation.alignmentX = ALIGNMENTX2;
  developersInformation.alignmentY = ALIGNMENTY10;
  developersInformation.type = DEVELOPERS_INFORMATION;

  secondSemMenu.name = "02. Second Sem Applications";
  secondSemMenu.textColor = TEXT_WHITE;
  secondSemMenu.alignmentX = ALIGNMENTX2;
  secondSemMenu.alignmentY = ALIGNMENTY12;
  secondSemMenu.type = SECOND_SEM;

  /* Assigning values to the  midtermMenu struct instance. */
  midtermMenu.name = "03. Midterm Applications";
  midtermMenu.textColor = TEXT_WHITE;
  midtermMenu.alignmentX = ALIGNMENTX2;
  midtermMenu.alignmentY = ALIGNMENTX14;
  midtermMenu.type = MID_TERM;

  /* Assigning values to the  finalSemMenu struct instance. */
  finalSemMenu.name = "04. Final Sem Applications";
  finalSemMenu.textColor = TEXT_WHITE;
  finalSemMenu.alignmentX = ALIGNMENTX2;
  finalSemMenu.alignmentY = ALIGNMENTX16;
  finalSemMenu.type = FINAL_SEM;

  supplementaryMenu.name = "05. Supplementary Applications";
  supplementaryMenu.textColor = TEXT_WHITE;
  supplementaryMenu.alignmentX = ALIGNMENTX2;
  supplementaryMenu.alignmentY = ALIGNMENTX18;
  supplementaryMenu.type = SUMPPLEMENTARY_APP;

  exitApplication.name = "06. Exit";
  exitApplication.textColor = TEXT_WHITE;
  exitApplication.alignmentX = ALIGNMENTX2;
  exitApplication.alignmentY = ALIGNMENTX20;
  exitApplication.type = EXIT_APPLICATION;

  /* Creating an array of MenuStruct. */
  struct MenuStruct menuStruct[maxMenuItem] = {
      developersInformation, secondSemMenu,     midtermMenu,
      finalSemMenu,          supplementaryMenu, exitApplication};

  /* Calling the function createMenu() and passing the array of MenuStruct and
the maxMenuItem value. */
  createMenu(menuStruct, maxMenuItem);
}

#endif
