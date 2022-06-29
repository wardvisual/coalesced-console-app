#include <iostream>

using namespace std;

void generateBorder(const int width, const int height) {
  cout << "\n\n\n";
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
  cout << "\n\n\n";
}