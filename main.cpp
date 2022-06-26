#include <iostream>
#include <windows.h>

#include "./helpers/border/border.hpp"

using namespace std;

string generateSymbol(string symbol, int count) {
  string generatedSymbol;

  for (int i = 1; i <= count; i++) {
    generatedSymbol += symbol;
  }

  return generatedSymbol;
}

void showWelcomeMessage() { cout << "hey"; }

int main() {

  // cout << "\n\n" << generateSymbol("_", 50) << "\n";
  // cout << "\n" << generateSymbol("_", 50) << "\n\n";

  // cout << "Welcome to the Group Six Console Based Application";

  // cout << "\n\n" << generateSymbol("_", 50) << "\n";
  // cout << "\n" << generateSymbol("_", 50) << "\n\n";

  generateBorder(88, 32);
  // cout << " ";
  return 0;
}