#ifndef CPP_INFORMATION_MENU
#define CPP_INFORMATION_MENU

#include "../../../../includes/constants/alignment.cpp"
#include "../../../../includes/constants/color.cpp"
#include "../../../../includes/helpers/color.cpp"
#include "../../../../includes/helpers/gotoxy.cpp"
#include "../../../../includes/helpers/symbol.cpp"

#include "../../../components/text.cpp"

void displayAboutUsMenu() {
  int maxArraySize = 6;
  std::string developers[maxArraySize] = {
      "Manlangit, Eduardo Jr.\n", "Galindo, Mark Lim.\n",
      "Cortez, Fletcher.\n",      "Santarin, Khenjie.\n",
      "Gagauis, Angelika.\n",     "Abdon, Williane Antonette.\n"};

  /* Text Heading. */
  text("Description:", TEXT_BLUE, ALIGNMENTX38, ALIGNMENTY10);

  text("Programming Language(s) and Tools:", TEXT_BLUE, ALIGNMENTX38,
       ALIGNMENTY21);

  text("Our Development Process:", TEXT_BLUE, ALIGNMENTX38, ALIGNMENTY26);

  text("Developers:", TEXT_BLUE, ALIGNMENTX100 + ALIGNMENTX5, ALIGNMENTY10);

  text("Professor:", TEXT_BLUE, ALIGNMENTX100 + ALIGNMENTX5, ALIGNMENTY25);

  /* Text Paragraph. */
  text("A project submitted for fulfillment for the final semester", TEXT_WHITE,
       ALIGNMENTX38, ALIGNMENTY12);

  text("of the first year of computer science at the Eulogio Amang", TEXT_WHITE,
       ALIGNMENTX38, ALIGNMENTY13);

  text("Rodriguez Institute of Science and Technology General Mariano",
       TEXT_WHITE, ALIGNMENTX38, ALIGNMENTY14);

  text("Alvarez, Cavite.", TEXT_WHITE, ALIGNMENTX38, ALIGNMENTY15);

  text("We proudly present this wonderful and interactive console-based",
       TEXT_WHITE, ALIGNMENTX38, ALIGNMENTY17);

  text("application made in the C++ programming language.", TEXT_WHITE,
       ALIGNMENTX38, ALIGNMENTY18);

  text("C++ Programming Language, Visual Studio Code/C++ IDEs.", TEXT_WHITE,
       ALIGNMENTX38, ALIGNMENTY23);

  text("Planning, Implementation/Development, Code Refactoring.", TEXT_WHITE,
       ALIGNMENTX38, ALIGNMENTY28);

  text("Mrs. Catherine S. Dumpit.", TEXT_WHITE, ALIGNMENTX100 + ALIGNMENTX5,
       ALIGNMENTY27);

  /* Displaying all the members of the project */
  for (int i = 0; i < maxArraySize; i++) {
    text(developers[i] + "\n", TEXT_WHITE, ALIGNMENTX100 + ALIGNMENTX5,
         ALIGNMENTY12 + i + i);
  }
}

#endif

// A project submitted for fulfillment for the final semester of the first year
// of computer science at the Eulogio Amang Rodriguez Institute of Science and
// Technology General Mariano Alvarez, Cavite. We proudly present this wonderful
// and interactive console-based application made in the C++ programming
// language.
