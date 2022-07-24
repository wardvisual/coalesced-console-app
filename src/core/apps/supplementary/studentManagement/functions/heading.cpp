/**
 * @file /src/core/apps/supplementary/studentmanagement/functions/heading.cpp
 * @brief A helper function
 *
 * */

/* A preprocessor directive that prevents the file from being included more than
  once. */
#ifndef CPP_SUPPLEMENTARY_STUDENT_MANAGEMENT_HEADING
#define CPP_SUPPLEMENTARY_STUDENT_MANAGEMENT_HEADING

/* Constants */
#include "../../../../../includes/constants/alignment.cpp"
#include "../../../../../includes/constants/color.cpp"

/* Components */
#include "../../../../components/text.cpp"

/**
 * It's displaying the
 * instruction for the user.
 */
void displayStudentManagementHeading() {
  /* It's displaying the instruction for the user. */
  text("Information:", TEXT_BLUE, ALIGNMENTX38, ALIGNMENTY10);
  text("This student management system has four basic things you can do."
       " You can create, view, ",
       TEXT_WHITE, ALIGNMENTX38, ALIGNMENTY12);
  text("update, and delete student records. To be specific, only the student's "
       "name as a record can",
       TEXT_WHITE, ALIGNMENTX38, ALIGNMENTY13);
  text("apply the four basic operations.", TEXT_WHITE, ALIGNMENTX38,
       ALIGNMENTY14);
}

#endif