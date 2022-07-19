/**
 * @file /src/core/apps/midterm/functions/getUserGrades.cpp
 * @brief A helper function
 *
 * */

/* A preprocessor directive that prevents the file from being included more than
  once. */
#ifndef CPP_GET_USER_GRADES_MIDTERM
#define CPP_GET_USER_GRADES_MIDTERM

/* Application Constants */
#define MAX_SUBJECT_LENGTH 9
#define MAX_GRADE 2.25
#define MIN_GRADE 1.00

/* Constants */
#include "../../../../../includes/constants/alignment.cpp"
#include "../../../../../includes/constants/validation.cpp"
#include "../../../../../includes/helpers/dataType.cpp"
#include "../../../../../includes/helpers/error.cpp"

/* Components */
#include "../../../../components/text.cpp"
#include "../../../../components/view.cpp"

/* Built-in library */
#include <string>

void getUserGrades(void (&activityThreeHeading)()) {
  /* variable declaration */
  int reAlignLabelYCoordinate = ALIGNMENTY24,
      reAlignErrorMsgYCoordinate = ALIGNMENTY26;

  std::string label = "Enter grades in each subject";
  std::string availableSubjects[MAX_SUBJECT_LENGTH] = {
      "GEMATHW",  "GELIFEWR", "GEARTAPP", "GEKOMFIL", "NTROCOMP",
      "FPROGLEC", "FPROGLAB", "GEPEMOVE", "NSTPROG1"};
  std::string userGrade;
  float acceptedGrade;

  std::string expectedArrayOfValue[] = {};
  int arrayLength = 0; // none

  text(label, TEXT_WHITE, ALIGNMENTX38, ALIGNMENTY20);

  for (int i = 0; i < MAX_SUBJECT_LENGTH; i++) {
    /* It handles user input and prints an error if there is an error. */
    input<std::string>(availableSubjects[i], userGrade, expectedArrayOfValue,
                       arrayLength, !RESTRICTED_INPUT, reAlignLabelYCoordinate,
                       reAlignErrorMsgYCoordinate);

    /* Checking for good grades */
    // save
    if (!validateString(userGrade, true)) {
      acceptedGrade = std::stof(userGrade);

      if (acceptedGrade >= MIN_GRADE && acceptedGrade <= MAX_GRADE) {
      } else {
        std::string errorMessage = "Grade must be ranging from 1.00 to 2.25";
        newError(errorMessage, ALIGNMENTX2, ALIGNMENTY26);
        // ask to conitnue
        // error
      }
    } else {
      /* Checking for GPA and INC grade*/
      if (lowerCaseString(userGrade) == "drp" ||
          lowerCaseString(userGrade) == "inc") {

        std::string errorMessage = "Remarks: DENIED";
        newError(errorMessage, ALIGNMENTX2, ALIGNMENTY26);
        // ask to continue
      } else {

        std::string errorMessage = "Invalid Input. Please try again!";
        newError(errorMessage, ALIGNMENTX2, ALIGNMENTY26);
      }
    }

    std::string errorMessage = "";
    newError(errorMessage, ALIGNMENTX2, ALIGNMENTY26);
  }
}

#endif