#ifndef CPP_HEADER_COMPONENT
#define CPP_HEADER_COMPONENT

/* Including the files in the helpers folder. */
#include "../../includes/helpers/color.cpp"
#include "../../includes/helpers/gotoxy.cpp"
#include "../../includes/helpers/symbol.cpp"

/* Including the files in the constants folder. */
#include "../../includes/constants/alignment.cpp"
#include "../../includes/constants/color.cpp"

#include "text.cpp"

void headerComponent(std::string title) {
  std::string generatedSymbol18 = generateSymbol("-", 18);
  std::string generatedSymbol91 = generateSymbol(" ", 91);
  std::string generatedSymbol80 = generateSymbol("-", 80);

  text(generatedSymbol91, BG_BLUE, ALIGNMENTX34, ALIGNMENTY3);

  text("|| >>>> " + generatedSymbol80 + " <<<< || ", TEXT_BLUE, ALIGNMENTX32,
       ALIGNMENTY4);

  text(" >>>> " + generatedSymbol18 + title + generatedSymbol18 + " <<<<< ",
       TEXT_WHITE, ALIGNMENTX33, ALIGNMENTY5);

  text("|| >>>> " + generatedSymbol80 + " <<<< || ", TEXT_BLUE, ALIGNMENTX32,
       ALIGNMENTY6);

  text(generatedSymbol91, BG_BLUE, ALIGNMENTX34, ALIGNMENTY7);

  std::cout << "\n\n";
}

#endif