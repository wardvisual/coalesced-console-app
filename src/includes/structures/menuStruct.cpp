#ifndef MENU_STRUCT
#define MENU_STRUCT

struct MenuStruct {
  int alignmentX;
  int alignmentY;
  int textColor;
  int fontSize;
  string name;
  void execute(void callback()) { callback(); };
};

#endif