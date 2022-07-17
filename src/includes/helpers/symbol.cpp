/**
 * @file /src/includes/helpers/symbol.cpp
 * @brief  A helper function for generating symbols
 */

/* A preprocessor directive that prevents the file from being included more than
  once. */
#ifndef CPP_SYMBOL_HELPER
#define CPP_SYMBOL_HELPER

/**
 * It takes a string and an integer as arguments and returns a string that is
 * the original string repeated the number of times specified by the integer
 *
 * @param symbol The symbol to be repeated.
 * @param count The number of times the symbol should be repeated.
 *
 * @return A string.
 */
std::string generateSymbol(std::string symbol, int count) {
  std::string generatedSymbol;

  for (int i = 1; i <= count; i++) {
    generatedSymbol += symbol;
  }

  return generatedSymbol;
}

#endif