#include "windows.h"

// Defining a struct called ScreenInfo.
struct ScreenInfo {
  int alignX;
  int alignY;
  int colorRange;
  int fontSize;
  string content;
};

void modifyScreenContentPlacement(ScreenInfo screenInfo) {
  // Modifying the screen content placement.
  centerContent(screenInfo.alignX, screenInfo.alignY);
  applyColor(screenInfo.colorRange);
  adjustFont(screenInfo.fontSize);

  // Printing the content of the screenInfo.content variable.
  cout << screenInfo.content;
}
