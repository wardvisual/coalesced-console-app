#ifndef CPP_INFORMATION_MENU
#define CPP_INFORMATION_MENU

#include "../../../../includes/constants/color.cpp"

#include "../../../../includes/helpers/color.cpp"

#include "../../../../includes/helpers/gotoxy.cpp"

#include "../../../../includes/helpers/symbol.cpp"

void displayAboutUsMenu() {
  //   std::string generatedSymbol87 = generateSymbol("-", 20);

  //   applyTextColor(TEXT_WHITE);
  //   alignContent(40, 10);
  //   std::cout << " << " << generatedSymbol87 << " >> ";

  int MAX = 6;

  std::string developers[MAX] = {"\t\t\t\t\tManlangit, Eduardo Jr.\n",
                                 "\t\t\t\t\t\tGalindo, Mark Lim.\n",
                                 "\t\t\t\t\t\tCortez, Fletcher.\n",
                                 "\t\t\t\t\t\tSantarin, Khenjie.\n",
                                 "\t\t\t\t\t\tGagauiz, Angelica.\n",
                                 "\t\t\t\t\t\tAbdon, Williane Antonette.\n"};

  for (int i = 0; i < MAX; i++) {
    std::cout << developers[i] << "\n";
  }
}

#endif