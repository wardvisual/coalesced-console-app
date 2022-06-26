#include "windows.h"

// Defining a struct called ScreenInfo.
struct ScreenInfo {
  int alignmentX;
  int alignmentY;
  int colorRange;
  int fontSize;
  string content;
};

void modifyScreenContentPlacement(ScreenInfo screenInfo) {
  // Modifying the screen content placement.
  centerContent(screenInfo.alignmentX, screenInfo.alignmentY);
  applyColor(screenInfo.colorRange);
  adjustFont(screenInfo.fontSize);

  // Printing the content of the screenInfo.content variable.
  cout << screenInfo.content;
}
