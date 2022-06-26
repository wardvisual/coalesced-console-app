#include <iostream>
#include <windows.h>

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

  // cout << "\n\n" << generateSymbol("_", 50) << "\n";
  // cout << "\n" << generateSymbol("_", 50) << "\n\n";

  // cout << "Welcome to the Group Six Console Based Application";

  // cout << "\n\n" << generateSymbol("_", 50) << "\n";
  // cout << "\n" << generateSymbol("_", 50) << "\n\n";

  const int width = 88;
  const int height = 32;

  cout << "\n";
  for (int i = 0; i < width - 30; i++) {
    cout << "||";
  }

  cout << endl;

  for (int i = 0; i < height; i++) {
    for (int j = 0; j < width; j++) {
      if (j == 0) {
        cout << "\t\t\t||";
      }
      cout << " ";
      if (j == width - 1)
        cout << "||";
    }
    cout << endl;
  }

  for (int i = 0; i < width - 30; i++) {
    cout << "||";
  }

  // cout << " ";
  return 0;
}