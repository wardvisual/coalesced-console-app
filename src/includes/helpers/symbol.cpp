using namespace std;

#ifndef CPP_SYMBOL
#define CPP_SYMBOL

/**
 * It takes a string and an integer as arguments and returns a string that is
 * the original string repeated the number of times specified by the integer
 *
 * @param symbol The symbol to be repeated.
 * @param count The number of times the symbol should be repeated.
 *
 * @return A string.
 */
string generateSymbol(string symbol, int count) {
  string generatedSymbol;

  for (int i = 1; i <= count; i++) {
    generatedSymbol += symbol;
  }

  return generatedSymbol;
}

#endif