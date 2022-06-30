using namespace std;

#ifndef CPP_SYMBOL
#define CPP_SYMBOL

string generateSymbol(string symbol, int count) {
  string generatedSymbol;

  for (int i = 1; i <= count; i++) {
    generatedSymbol += symbol;
  }

  return generatedSymbol;
}

#endif