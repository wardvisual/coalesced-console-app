/**
 * @file
 * /src/core/apps/supplementary/studentManagementSystem/functions/create/index.cpp
 * @brief Student management system create option
 *
 * */

/* A preprocessor directive that prevents the file from being included more than
  once. */
#ifndef CPP_STUDENT_MANAGEMENT_SYSTEM_SUPPLEMENTARY_FUNCTION_CREATE
#define CPP_STUDENT_MANAGEMENT_SYSTEM_SUPPLEMENTARY_FUNCTION_CREATE

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
 * It's a function that takes in a string, a string, and a function as
 * parameters and returns nothing
 *
 * @param type The type of the menu.
 * @param currentMenu The current menu that the user is on.
 * @param heading A function that displays the heading of the screen.
 */
void create(std::string type, std::string currentMenu, void (&heading)()) {
  int reAlignLabelYCoordinate = ALIGNMENTY25,
      reAlignErrorMsgYCoordinate = ALIGNMENTY29;
  std::string inputLabelForAddStudentName = "Enter Student Name";
  std::string name;

  int maxMenuLength = 0;
  std::string expectedArrayOfValue[] = {};

  /* A function that clears the newly updated text on a screen and displays
      the previous screen state. */
  reViewMainScreen(type, currentMenu, heading);

  input<std::string>(inputLabelForAddStudentName, name, expectedArrayOfValue,
                     maxMenuLength, !RESTRICTED_INPUT, reAlignLabelYCoordinate,
                     reAlignErrorMsgYCoordinate);

  /* A function that clears the newly updated text on a screen and displays
    the previous screen state. */
  reViewMainScreen(type, currentMenu, heading);

  mockData::students.push_back(name);

  text("Result:", TEXT_WHITE, ALIGNMENTX38, ALIGNMENTY15);
  text("Message: Student successfully added!", TEXT_WHITE, ALIGNMENTX38,
       ALIGNMENTY17);
  text("Student Name: " + name, TEXT_WHITE, ALIGNMENTX38, ALIGNMENTY19);
}

#endif
