#include <windows.h>

void gotoxy(short x, short y) {
  COORD axis = {x, y};

  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), axis);
}

int add(int x, int y) { return x + y; }