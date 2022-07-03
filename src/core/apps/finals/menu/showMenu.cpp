#ifndef CPP_FINALS_MENU
#define CPP_FINALS_MENU

#include "../../../../includes/constants/color.cpp"

#include "../../../../includes/utilities/color.cpp"

#include "../../../../includes/utilities/gotoxy.cpp"

#include "../../../../includes/helpers/symbol.cpp"

void displayFinalsMenu() {
  std::string generatedSymbol87 = generateSymbol("-", 20);

  applyTextColor(TEXT_WHITE);
  alignContent(40, 10);
  std::cout << "<< " << generatedSymbol87 << " >>";
}

#endif