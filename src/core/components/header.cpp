/**
 * @file /src/core/components/header.cpp
 * @brief A header component
 *
 * */

#ifndef CPP_HEADER_COMPONENT
#define CPP_HEADER_COMPONENT

/* Helper functions */
#include "../../includes/helpers/color.cpp"
#include "../../includes/helpers/gotoxy.cpp"
#include "../../includes/helpers/symbol.cpp"

/* Constants */
#include "../../includes/constants/alignment.cpp"
#include "../../includes/constants/color.cpp"

/* Component */
#include "text.cpp"

/**
 * This function is used to display the header of the console application.
 */
void headerComponent() {
  /* Symbols Length */
  int symbolCount18 = 18;
  int symbolCount91 = 91;
  int symbolCount83 = 83;

  /* Title */
  std::string title = " GROUP SIX FINAL PROJECT | CONSOLE APPLICATION ";

  /* Generated Symbols*/
  std::string generatedSymbol18 = generateSymbol("-", symbolCount18);
  std::string generatedSymbol91 = generateSymbol(" ", symbolCount91);
  std::string generatedSymbol83 = generateSymbol("-", symbolCount83);

  /* Displaying the symbols */
  text(generatedSymbol91, BG_BLUE, ALIGNMENTX38, ALIGNMENTY3);
  text(">>> " + generatedSymbol83 + " <<< ", TEXT_BLUE, ALIGNMENTX38,
       ALIGNMENTY4);
  text(" >>> " + generatedSymbol18 + title + generatedSymbol18 + " <<< ",
       TEXT_WHITE, ALIGNMENTX37, ALIGNMENTY5);
  text(">>> " + generatedSymbol83 + " <<< ", TEXT_BLUE, ALIGNMENTX38,
       ALIGNMENTY6);
  text(generatedSymbol91, BG_BLUE, ALIGNMENTX38, ALIGNMENTY7);

  std::cout << "\n";
}

/**
 * It prints a header for the main menu
 */
void mainMenuHeaderComponent() {
  /* Symbols Length */
  int symbolCount5 = 5;
  int symbolCount23 = 23;
  int symbolCount31 = 31;

  /* Title */
  std::string title = " MAIN MENU ";

  /* Generated Symbols*/
  std::string generatedSymbol5 = generateSymbol("-", symbolCount5);
  std::string generatedSymbol23 = generateSymbol("-", symbolCount23);
  std::string generatedSymbol31 = generateSymbol(" ", symbolCount31);

  /* Displaying the symbols */
  text(generatedSymbol31, BG_WHITE, ALIGNMENTX2, ALIGNMENTY3);
  text("|| " + generatedSymbol23 + " || ", TEXT_WHITE, ALIGNMENTX3,
       ALIGNMENTY4);
  text(" " + generatedSymbol5 + title + generatedSymbol5 + " ", TEXT_WHITE,
       ALIGNMENTX7, ALIGNMENTY5);
  text("|| " + generatedSymbol23 + " || ", TEXT_WHITE, ALIGNMENTX3,
       ALIGNMENTY6);
  text(generatedSymbol31, BG_WHITE, ALIGNMENTX2, ALIGNMENTY7);

  std::cout << "\n";
}

#endif