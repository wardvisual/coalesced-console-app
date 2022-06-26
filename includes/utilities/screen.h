#include "windows.h"

struct ScreenInfo {
  int gotoxyX;
  int gotoxyY;
  int colorRange;
  int fontSize;
  string content;
};

void modifyScreenContentPlacement(ScreenInfo screenInfo) {
  centerContent(screenInfo.gotoxyX, screenInfo.gotoxyY);
  applyColor(screenInfo.colorRange);
  adjustFont(screenInfo.fontSize);
  cout << screenInfo.content;
}
