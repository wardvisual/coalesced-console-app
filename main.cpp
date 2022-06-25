#include "./src/renderApplication.cpp"

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

  cout << "\n\n" << generateSymbol("_", 50) << "\n\n";

  showWelcomeMessage();

  cout << "\n\n" << generateSymbol("_", 50) << "\n\n";

  return 0;
}