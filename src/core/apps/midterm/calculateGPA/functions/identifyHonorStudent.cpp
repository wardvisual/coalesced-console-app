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
  int ACCEPTED_REMARK = 1, DENIED_REMARK = 0, maxRemarksOption = 2;

  std::string remarks[maxRemarksOption] = {
      "Remarks : DENIED - Sorry! But, you are not qualified to be an honor "
      "student",
      "Remarks : ACCEPTED - Congrats! You are qualified to be an honor "
      "student"};

  text("Result: ", TEXT_BLUE, ALIGNMENTX38, ALIGNMENTY20);
  text("Student Name: " + username, TEXT_WHITE, ALIGNMENTX38, ALIGNMENTY20);
  text("Student Course: " + course, TEXT_WHITE, ALIGNMENTX38, ALIGNMENTY20);
  text("Total GPA: ", TEXT_WHITE, ALIGNMENTX38, ALIGNMENTY20);
  setDecimalValue(totalGPA, TEXT_WHITE, ALIGNMENTX38, ALIGNMENTY20);

  if (totalGPA > maxGrade)
    text(remarks[DENIED_REMARK], TEXT_WHITE, ALIGNMENTX38, ALIGNMENTY20);
  else
    text(remarks[ACCEPTED_REMARK], TEXT_WHITE, ALIGNMENTX38, ALIGNMENTY20);
}

#endif