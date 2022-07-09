#ifndef CPP_MENU_COMPONENT
#define CPP_MENU_COMPONENT

/* Including the files in the structures folder. */
#include "../../includes/structures/menuStruct.cpp"
#include "../../includes/structures/textStruct.cpp"

/* Including the files in the helpers folder. */
#include "../../includes/helpers/color.cpp"
#include "../../includes/helpers/gotoxy.cpp"
#include "../../includes/helpers/menu.cpp"

/* Including the files in the constants folder. */
#include "../../includes/constants/app.cpp"
#include "../../includes/constants/color.cpp"

#include "text.cpp"

using std::cout;

void menuComponent() {
  const int maxMenuLength = 5;
  std::string generatedSymbol18 = generateSymbol("-", 20);
  std::string generatedSymbol30 = generateSymbol("-", 30);

  MenuStruct developersInformation, secondSemMenu, midtermMenu, finalSemMenu,
      supplementaryMenu;
  TextStruct title;

  text("Main Menu", TEXT_BLUE, 2, 5);

  /* Assigning values to the secondSemMenu struct instance. */
  developersInformation.name = "01. About the Project";
  developersInformation.textColor = TEXT_WHITE;
  developersInformation.alignmentX = 2;
  developersInformation.alignmentY = 8;
  developersInformation.fontSize = 20;
  developersInformation.type = DEVELOPERS_INFORMATION;

  secondSemMenu.name = "02. Second Sem Applications";
  secondSemMenu.textColor = TEXT_WHITE;
  secondSemMenu.fontSize = 20;
  secondSemMenu.alignmentX = 2;
  secondSemMenu.alignmentY = 10;
  secondSemMenu.type = SECOND_SEM;

  /* Assigning values to the  midtermMenu struct instance. */
  midtermMenu.name = "03. Midterm Applications";
  midtermMenu.textColor = TEXT_WHITE;
  midtermMenu.fontSize = 20;
  midtermMenu.alignmentX = 2;
  midtermMenu.alignmentY = 12;
  midtermMenu.type = MID_TERM;

  /* Assigning values to the  finalSemMenu struct instance. */
  finalSemMenu.name = "04. Final Sem Applications";
  finalSemMenu.textColor = TEXT_WHITE;
  finalSemMenu.fontSize = 20;
  finalSemMenu.alignmentX = 2;
  finalSemMenu.alignmentY = 14;
  finalSemMenu.type = FINAL_SEM;

  supplementaryMenu.name = "05. Supplementary Applications";
  supplementaryMenu.textColor = TEXT_WHITE;
  supplementaryMenu.fontSize = 20;
  supplementaryMenu.alignmentX = 2;
  supplementaryMenu.alignmentY = 16;
  supplementaryMenu.type = SUMPPLEMENTARY_APP;

  /* Creating an array of MenuStruct. */
  struct MenuStruct menuStruct[maxMenuLength] = {
      developersInformation, secondSemMenu, midtermMenu, finalSemMenu,
      supplementaryMenu};

  /* Calling the function createMenu() and passing the array of MenuStruct and
the maxMenuLength value. */
  createMenu(menuStruct, maxMenuLength);
}

#endif
