/* Including the library. */
#include <iostream>

#ifndef CPP_BORDER
#define CPP_BORDER

/**
 * It prints a border around the console window
 *
 * @param width The width of the border
 * @param height The height of the border
 */
void generateBorder(const int width, const int height) {
  std::cout << "\n\n\n";
  for (int i = 0; i < width - 30; i++) {
    std::cout << "||";
  }

  std::cout << std::endl;

  for (int i = 0; i < height; i++) {
    for (int j = 0; j < width; j++) {
      if (j == 0) {
        std::cout << "\t\t\t||";
      }
      std::cout << " ";
      if (j == width - 1)
        std::cout << "||";
    }
    std::cout << std::endl;
  }

  for (int i = 0; i < width - 30; i++) {
    std::cout << "||";
  }
  std::cout << "\n\n\n";
}

#endif