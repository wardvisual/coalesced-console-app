/**
 * @file
 * /src/core/apps/supplementary/studentManagementSystem/functions/create/index.cpp
 * @brief Student management system create option
 *
 * */

/* A preprocessor directive that prevents the file from being included more than
  once. */
#ifndef CPP_STUDENT_MANAGEMENT_SYSTEM_SUPPLEMENTARY_FUNCTION_EDIT
#define CPP_STUDENT_MANAGEMENT_SYSTEM_SUPPLEMENTARY_FUNCTION_EDIT

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

#include "../view/index.cpp"

void edit(std::string type, std::string currentMenu, void (&heading)()) {
  int reAlignLabelYCoordinate = ALIGNMENTY25,
      reAlignErrorMsgYCoordinate = ALIGNMENTY29;
  std::string inputLabelForStudentID = "Enter Student ID to Update";
  std::string inputLabelForStudentName = "Enter New Student Name";

  int studentID;
  int maxMenuLength = 0, singleCount = 1;
  int expectedArrayOfValue[] = {};
  std::string expectedArrayOfValueForString[] = {};
  bool isStudentFound = false;
  std::string newStudentName, previousStudentName;

  /* A function that clears the newly updated text on a screen and displays
      the previous screen state. */
  reViewMainScreen(type, currentMenu, heading);

  /* Displays current mock data */
  view(type, currentMenu, heading);

  input<int>(inputLabelForStudentID, studentID, expectedArrayOfValue,
             maxMenuLength, RESTRICTED_INPUT, reAlignLabelYCoordinate,
             reAlignErrorMsgYCoordinate);

  /* A function that clears the newly updated text on a screen and displays
    the previous screen state. */
  reViewMainScreen(type, currentMenu, heading);

  if (studentID <= mockData::students.size()) {
    if (mockData::students[studentID - singleCount].length()) {
      isStudentFound = true;
    } else {
      isStudentFound = false;
    }
  }

  /* Updating the student name. */
  if (isStudentFound) {
    previousStudentName = mockData::students[studentID - singleCount];

    /* Displaying the result of the search. */
    text("Result:", TEXT_BLUE, ALIGNMENTX38, ALIGNMENTY15);
    text("Message: The student with an ID of " + std::to_string(studentID) +
             " was found.",
         TEXT_WHITE, ALIGNMENTX38, ALIGNMENTY17);
    text("Found Student: " + previousStudentName, TEXT_WHITE, ALIGNMENTX38,
         ALIGNMENTY19);

    /* Taking student name */
    input<std::string>(inputLabelForStudentName, newStudentName,
                       expectedArrayOfValueForString, maxMenuLength,
                       !RESTRICTED_INPUT, reAlignLabelYCoordinate,
                       reAlignErrorMsgYCoordinate);

    /* Updating the value of the student name. */
    mockData::students.at(studentID - singleCount) = newStudentName;

    /* A function that clears the newly updated text on a screen and displays
  the previous screen state. */
    reViewMainScreen(type, currentMenu, heading);

    /* Displaying the result of the update. */
    text("Result:", TEXT_BLUE, ALIGNMENTX38, ALIGNMENTY15);
    text("Message: The student with an ID of " + std::to_string(studentID) +
             " was succcessfully updated!",
         TEXT_WHITE, ALIGNMENTX38, ALIGNMENTY17);
    text("Previous Student Name: " + previousStudentName, TEXT_WHITE,
         ALIGNMENTX38, ALIGNMENTY19);
    text("Updated Student Name: " + newStudentName, TEXT_WHITE, ALIGNMENTX38,
         ALIGNMENTY21);
  } else {
    /* Displaying the error message result. */
    text("Result:", TEXT_BLUE, ALIGNMENTX38, ALIGNMENTY15);
    text("Message: There is no student with an ID of " +
             std::to_string(studentID),
         TEXT_LIGHT_RED, ALIGNMENTX38, ALIGNMENTY17);
  }
}

#endif
