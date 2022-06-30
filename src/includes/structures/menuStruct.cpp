#ifndef MENU_STRUCT
#define MENU_STRUCT

struct SeconSemMethods {
  void displaySecondSemMenu() { cout << "second sem"; };
};

struct MidtermMethods {
  void displayMidtermMenu() { cout << "Midterm "; };
};

struct FinalSemMethods {
  void displayFinalSemMenu() { cout << "Final sem"; };
};

struct MenuStruct : SeconSemMethods, MidtermMethods, FinalSemMethods {
  int alignmentX;
  int alignmentY;
  int textColor;
  int fontSize;
  string name;
  void execute(void callback()) { callback(); };
};

#endif