#ifndef CPP_HEADER_COMPONENT
#define CPP_HEADER_COMPONENT

/* Including the files in the helpers folder. */
#include "../../includes/helpers/color.cpp"
#include "../../includes/helpers/gotoxy.cpp"
#include "../../includes/helpers/symbol.cpp"

/* Including the files in the constants folder. */
#include "../../includes/constants/color.cpp"

void headerComponent(std::string title) {
  std::string generatedSymbol18 = generateSymbol("-", 18);
  std::string generatedSymbol91 = generateSymbol(" ", 91);
  std::string generatedSymbol80 = generateSymbol("-", 80);

  applyBackgroundColor(BG_BLUE);
  alignContent(34, 3);
  std::cout << generatedSymbol91;

  applyTextColor(TEXT_BLUE);
  alignContent(32, 4);
  std::cout << "|| >>>> " << generatedSymbol80 << " <<<< || ";

  applyTextColor(TEXT_WHITE);
  alignContent(33, 5);
  std::cout << " >>>> " + generatedSymbol18 + title + generatedSymbol18 +
                   " <<<<< ";

  applyTextColor(TEXT_BLUE);
  alignContent(32, 6);
  std::cout << "|| >>>> " << generatedSymbol80 << " <<<< || ";

  applyBackgroundColor(BG_BLUE);
  alignContent(34, 7);
  std::cout << generatedSymbol91;

  std::cout << "\n\n";
}

#endif