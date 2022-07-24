/**
 * @file
 * /src/core/apps/supplementary/studentManagementSystem/functions/delete/index.cpp
 * @brief Student management system delete option
 *
 * */

/* A preprocessor directive that prevents the file from being included more than
  once. */
#ifndef CPP_STUDENT_MANAGEMENT_SYSTEM_SUPPLEMENTARY_FUNCTION_DELETE
#define CPP_STUDENT_MANAGEMENT_SYSTEM_SUPPLEMENTARY_FUNCTION_DELETE

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
 * It deletes a student from a vector of students
 *
 * @param type The type of the menu.
 * @param currentMenu The current menu that the user is on.
 * @param heading A function that displays the heading of the menu.
 */
void deleteStudent(std::string type, std::string currentMenu,
                   void (&heading)()) {
  int reAlignLabelYCoordinate = ALIGNMENTY25,
      reAlignErrorMsgYCoordinate = ALIGNMENTY29;
  std::string inputLabelForDeleteStudent = "Enter Student ID to Delete";
  int studentID;

  int maxMenuLength = 0, singleCount = 1;
  int expectedArrayOfValue[] = {};
  bool isStudentDeleted = false;
  std::string deletedStudent = "";

  /* A function that clears the newly updated text on a screen and displays
      the previous screen state. */
  reViewMainScreen(type, currentMenu, heading);

  input<int>(inputLabelForDeleteStudent, studentID, expectedArrayOfValue,
             maxMenuLength, RESTRICTED_INPUT, reAlignLabelYCoordinate,
             reAlignErrorMsgYCoordinate);

  /* A function that clears the newly updated text on a screen and displays
    the previous screen state. */
  reViewMainScreen(type, currentMenu, heading);

  if (studentID <= mockData::students.size()) {
    if (mockData::students[studentID - singleCount].length()) {

      isStudentDeleted = true;

      deletedStudent = mockData::students[studentID - singleCount].data();

      mockData::students.erase(mockData::students.begin() + studentID -
                               singleCount);
    } else {
      isStudentDeleted = false;
    }
  }

  if (isStudentDeleted) {
    text("Result:", TEXT_BLUE, ALIGNMENTX38, ALIGNMENTY15);
    text("Message: The student with an ID of " + std::to_string(studentID) +
             " was succcessfully deleted!",
         TEXT_WHITE, ALIGNMENTX38, ALIGNMENTY17);
    text("Deleted Student: " + deletedStudent, TEXT_WHITE, ALIGNMENTX38,
         ALIGNMENTY19);
  } else {
    text("Result:", TEXT_BLUE, ALIGNMENTX38, ALIGNMENTY15);
    text("Message: There is no student with an ID of " +
             std::to_string(studentID),
         TEXT_LIGHT_RED, ALIGNMENTX38, ALIGNMENTY17);
  }
}

#endif
