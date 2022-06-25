#include <iostream>
#include <kali.h>

using namespace std;

string generateSymbol(string symbol, int count) {
  string generatedSymbol;

  for (int i = 1; i <= count; i++) {
    generatedSymbol += symbol;
  }

  return generatedSymbol;
}

void showWelcomeMessage() { cout << "hey"; }

void centerContent(short x, short y) {
  COORD coordinates;

  coordinates.X = x;
  coordinates.Y = y;

  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

int main() {

  cout << "\n\n" << generateSymbol("_", 50) << "\n";
  cout << "\n" << generateSymbol("_", 50) << "\n\n";

  centerContent(50, 50);
  cout << "hey";

  cout << "\n\n" << generateSymbol("_", 50) << "\n";
  cout << "\n" << generateSymbol("_", 50) << "\n\n";

  return 0;
}