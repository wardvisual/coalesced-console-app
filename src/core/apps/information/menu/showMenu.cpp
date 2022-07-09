#ifndef CPP_INFORMATION_MENU
#define CPP_INFORMATION_MENU

#include "../../../../includes/constants/color.cpp"
#include "../../../../includes/helpers/color.cpp"
#include "../../../../includes/helpers/gotoxy.cpp"
#include "../../../../includes/helpers/symbol.cpp"

#include "../../../components/text.cpp"

void displayAboutUsMenu() {
  int MAX = 6;
  std::string developers[MAX] = {
      "Manlangit, Eduardo Jr.\n", "Galindo, Mark Lim.\n",
      "Cortez, Fletcher.\n",      "Santarin, Khenjie.\n",
      "Gagauiz, Angelica.\n",     "Abdon, Williane Antonette.\n"};

  /* Text Heading. */
  text("Description:", TEXT_BLUE, 34, 10);
  text("Programming Language(s) and Tools:", TEXT_BLUE, 34, 20);
  text("Our Development Process:", TEXT_BLUE, 34, 25);
  text("Developers:", TEXT_BLUE, 100, 10);
  text("Professor:", TEXT_BLUE, 100, 25);

  /* Text Paragraph. */
  text("A project submitted for fulfillment for the final semester", TEXT_WHITE,
       34, 12);
  text("of the first year of computer science at the Eulogio Amang", TEXT_WHITE,
       34, 13);
  text("Rodriguez Institute of Science and Technology General Mariano",
       TEXT_WHITE, 34, 14);
  text("Alvarez, Cavite. We proudly present this wonderful and", TEXT_WHITE, 34,
       15);
  text("interactive console-based application made in the C++", TEXT_WHITE, 34,
       16);
  text("programming language.", TEXT_WHITE, 34, 17);
  text("C++ Programming Language, Visual Studio Code/C++ IDEs.", TEXT_WHITE, 34,
       22);
  text("Planning, Implementation/Development, Code Refactoring.", TEXT_WHITE,
       34, 27);
  text("Mrs. Catherine S. Dumpit.", TEXT_WHITE, 100, 27);

  /* Displaying all the members of the project */
  for (int i = 0; i < MAX; i++) {
    text(developers[i] + "\n", TEXT_WHITE, 100, 12 + i + i);
  }
}

#endif

// A project submitted for fulfillment for the final semester of the first year
// of computer science at the Eulogio Amang Rodriguez Institute of Science and
// Technology General Mariano Alvarez, Cavite. We proudly present this wonderful
// and interactive console-based application made in the C++ programming
// language.
