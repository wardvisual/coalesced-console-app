/**
 * @file /src/core/apps/midterm/functions/identifyHonorStudent.cpp
 * @brief A helper function
 *
 * */

/* A preprocessor directive that prevents the file from being included more than
  once. */
#ifndef CPP_IDENTIFY_HONOR_STUDENT
#define CPP_IDENTIFY_HONOR_STUDENT

/* Constants */
#include "../../../../../includes/constants/alignment.cpp"
#include "../../../../../includes/constants/validation.cpp"

/* Components */
#include "../../../../components/text.cpp"

float identifyHonorStudent(float totalGPA, float maxGrade, std::string username,
                           std::string course) {
  int maxRemarksOption = 2;

  text("Result: ", TEXT_BLUE, ALIGNMENTX80, ALIGNMENTY23);
  text("Student Name: " + username, TEXT_WHITE, ALIGNMENTX80, ALIGNMENTY25);
  text("Student Course: " + course, TEXT_WHITE, ALIGNMENTX80, ALIGNMENTY26);
  text("Total GPA: ", TEXT_WHITE, ALIGNMENTX80, ALIGNMENTY27);
  setDecimalValue(totalGPA, TEXT_WHITE, ALIGNMENTX91, ALIGNMENTY27);

  if (totalGPA > maxGrade) {
    text("Remarks: DENIED", TEXT_WHITE, ALIGNMENTX80, ALIGNMENTY29);
    text("Message: Sorry, " + username + "!", TEXT_WHITE, ALIGNMENTX80,
         ALIGNMENTY30);
    text("But, you are qualified to be an honor student", TEXT_WHITE,
         ALIGNMENTX80, ALIGNMENTY31);
  } else {
    text("Remarks: ACCEPTED", TEXT_WHITE, ALIGNMENTX80, ALIGNMENTY29);
    text("Message: Congrats, " + username + "!", TEXT_WHITE, ALIGNMENTX80,
         ALIGNMENTY30);
    text("You are qualified to be an honor student", TEXT_WHITE, ALIGNMENTX80,
         ALIGNMENTY31);
  }
}

#endif