/**
 * @file /src/core/components/header.cpp
 * @brief A component that is used to create a complete header style.
 *
 * */

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
  std::string generatedSymbol83 = generateSymbol("-", 83);

  text(generatedSymbol91, BG_BLUE, ALIGNMENTX38, ALIGNMENTY3);

  text(">>> " + generatedSymbol83 + " <<< ", TEXT_BLUE, ALIGNMENTX38,
       ALIGNMENTY4);

  text(" >>> " + generatedSymbol18 + title + generatedSymbol18 + " <<< ",
       TEXT_WHITE, ALIGNMENTX37, ALIGNMENTY5);

  text(">>> " + generatedSymbol83 + " <<< ", TEXT_BLUE, ALIGNMENTX38,
       ALIGNMENTY6);

  text(generatedSymbol91, BG_BLUE, ALIGNMENTX38, ALIGNMENTY7);

  std::cout << "\n\n";
}

void mainMenuHeaderComponent(std::string title) {
  std::string generatedSymbol5 = generateSymbol("-", 5);
  std::string generatedSymbol23 = generateSymbol("-", 23);
  std::string generatedSymbol31 = generateSymbol(" ", 31);

  text(generatedSymbol31, BG_WHITE, ALIGNMENTX2, ALIGNMENTY3);

  text("|| " + generatedSymbol23 + " || ", TEXT_WHITE, ALIGNMENTX3,
       ALIGNMENTY4);

  text(" " + generatedSymbol5 + title + generatedSymbol5 + " ", TEXT_WHITE,
       ALIGNMENTX7, ALIGNMENTY5);

  text("|| " + generatedSymbol23 + " || ", TEXT_WHITE, ALIGNMENTX3,
       ALIGNMENTY6);

  text(generatedSymbol31, BG_WHITE, ALIGNMENTX2, ALIGNMENTY7);

  //   text(generateSymbol("\n ", 18), BG_WHITE, ALIGNMENTX30, ALIGNMENTY2);

  std::cout << "\n\n";
}

#endif