#include "../constants/apps.cpp"

#ifndef CPP_MENU_STRUCT
#define CPP_MENU_STRUCT

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
  string type;
  void execute(string type) {
    if (type == SECOND_SEM)
      displaySecondSemMenu();

    if (type == MID_TERM)
      displayMidtermMenu();

    if (type == FINAL_SEM)
      displayFinalSemMenu();
  };
};

#endif