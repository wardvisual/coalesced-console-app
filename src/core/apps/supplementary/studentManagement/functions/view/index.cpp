/**
 * @file
 * /src/core/apps/supplementary/studentManagementSystem/functions/view/index.cpp
 * @brief Student management system view option
 *
 * */

/* A preprocessor directive that prevents the file from being included more than
  once. */
#ifndef CPP_STUDENT_MANAGEMENT_SYSTEM_SUPPLEMENTARY_FUNCTION_VIEW
#define CPP_STUDENT_MANAGEMENT_SYSTEM_SUPPLEMENTARY_FUNCTION_VIEW

/* Components */
#include "../../../../../components/input.cpp"
#include "../../../../../components/text.cpp"
#include "../../../../../components/view.cpp"

/* Constants */
#include "../../../../../../includes/constants/alignment.cpp"
#include "../../../../../../includes/constants/color.cpp"
#include "../../../../../../includes/constants/menu.cpp"
#include "../../../../../../includes/constants/validation.cpp"

/* Helpers */
#include "../../../../../../includes/helpers/cleanUp.cpp"
#include "../../../../../../includes/mockData/students.cpp"

/**
 * It displays the students' names and IDs on the screen
 * 
 * @param type The type of the screen.
 * @param currentMenu The current menu that the user is on.
 * @param heading A function that displays the heading of the screen.
 */
void view(std::string type, std::string currentMenu, void (&heading)()) {
  int singleCount = 1;
  /* A function that clears the newly updated text on a screen and displays
      the previous screen state. */
  reViewMainScreen(type, currentMenu, heading);

  /* Displaying all the members of the project */
  text("Students:", TEXT_BLUE, ALIGNMENTX38, ALIGNMENTY16);
  text("ID", TEXT_BLUE, ALIGNMENTX38, ALIGNMENTY18);
  text("Name", TEXT_BLUE, ALIGNMENTX45, ALIGNMENTY18);

  /* Student ID */
  for (int i = 0; i < mockData::students.size(); i++) {
    text(std::to_string(i + singleCount) + "\n", TEXT_WHITE, ALIGNMENTX38,
         ALIGNMENTY20 + i + i);
  }

  /* Student Name */
  for (int i = 0; i < mockData::students.size(); i++) {
    text(mockData::students[i] + "\n", TEXT_WHITE, ALIGNMENTX45,
         ALIGNMENTY20 + i + i);
  }
}

#endif
