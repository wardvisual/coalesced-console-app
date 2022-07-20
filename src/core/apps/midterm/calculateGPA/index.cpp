/**
 * @file /src/core/apps/midterm/calculateGPA/index.cpp/
 * @brief A helper function
 *
 * */

/* A preprocessor directive that prevents the file from being included more than
  once. */
#ifndef CPP_CALCULATE_GPA_MIDTERM
#define CPP_CALCULATE_GPA_MIDTERM

/* Application Constants */
#define MAX_SUBJECT_LENGTH 9
#define MAX_GRADE 2.25
#define MIN_GRADE 1.00

/* Constants */
#include "../../../../includes/constants/alignment.cpp"
#include "../../../../includes/constants/appType.cpp"
#include "../../../../includes/constants/validation.cpp"

/* Hlpers */
#include "../../../../includes/helpers/dataType.cpp"
#include "../../../../includes/helpers/error.cpp"

/* Components */
#include "../../../components/text.cpp"
#include "../../../components/view.cpp"

/* Calculate GPA helper function */
#include "functions/askToContinue.cpp"
#include "functions/getUserDetails.cpp"
#include "functions/heading.cpp"

void calculateGPA(std::string currentMenuItem) {
  /* variable declaration */
  int reAlignLabelYCoordinate = ALIGNMENTY24,
      reAlignErrorMsgYCoordinate = ALIGNMENTY26;
  bool isWhileLoopContinues = false;

  std::string errorMessage;
  std::string userName, userCourse;
  std::string labelForUserGrade = "Enter grades in each subject";
  std::string availableSubjects[MAX_SUBJECT_LENGTH] = {
      "GEMATHW",  "GELIFEWR", "GEARTAPP", "GEKOMFIL", "NTROCOMP",
      "FPROGLEC", "FPROGLAB", "GEPEMOVE", "NSTPROG1"};
  std::string userGrade;
  bool isContinues = false;
  float acceptedGrade;

  std::string expectedArrayOfValueForString[] = {};
  char expectedArrayOfValueForChar[] = {};
  int arrayLength = 0; // none

  /* Display the Heading*/
  displayCalculateGPAHeading();

  do {
    /* Getting the user details such as name and course */
    getUserDetails(MIDTERM_APP, currentMenuItem, userName, userCourse,
                   displayCalculateGPAHeading);

    /* A function that clears the newly updated text on a screen and displays
      the previous screen state. */
    reViewMainScreen(MIDTERM_APP, currentMenuItem, displayCalculateGPAHeading);

    /* User input label for grades */
    text(labelForUserGrade, TEXT_WHITE, ALIGNMENTX38, ALIGNMENTY20);

    /* Getting the user grades */
    for (int i = 0; i < MAX_SUBJECT_LENGTH; i++) {
      /* It handles user input and prints an error if there is an error. */
      input<std::string>(availableSubjects[i], userGrade,
                         expectedArrayOfValueForString, arrayLength,
                         !RESTRICTED_INPUT, reAlignLabelYCoordinate,
                         reAlignErrorMsgYCoordinate);
      /* A function that clears the newly updated text on a screen and
displays the previous screen state. */
      reViewMainScreen(MIDTERM_APP, currentMenuItem,
                       displayCalculateGPAHeading);

      /* Checking for good grades */
      if (!validateString(userGrade, true)) {
        acceptedGrade = std::stof(userGrade);

        if (acceptedGrade >= MIN_GRADE && acceptedGrade <= MAX_GRADE) {
          /* A function that clears the newly updated text on a screen and
  displays the previous screen state. */
          reViewMainScreen(MIDTERM_APP, currentMenuItem,
                           displayCalculateGPAHeading);
        } else {
          /* A function that clears the newly updated text on a screen and
  displays the previous screen state. */
          reViewMainScreen(MIDTERM_APP, currentMenuItem,
                           displayCalculateGPAHeading);

          std::string errorMessage = "Grade must be ranging from 1.00 to 2.25";
          newError(errorMessage, ALIGNMENTX2, ALIGNMENTY26);

          if (askToContinue()) {
            /* A function that clears the newly updated text on a screen and
displays the previous screen state. */
            reViewMainScreen(MIDTERM_APP, currentMenuItem,
                             displayCalculateGPAHeading);
            /* Continues the loop*/
            isContinues = true;
            i = 0;
          } else {
            /* stops the for loop */
            isContinues = false;
            i = MAX_SUBJECT_LENGTH + i;
          }
        }
      } else {
        /* Checking for GPA and INC grade*/
        if (lowerCaseString(userGrade) == "drp" ||
            lowerCaseString(userGrade) == "inc") {
          /* A function that clears the newly updated text on a screen and
            displays the previous screen state. */
          reViewMainScreen(MIDTERM_APP, currentMenuItem,
                           displayCalculateGPAHeading);

          errorMessage = "Remarks: DENIED";
          newError(errorMessage, ALIGNMENTX2, ALIGNMENTY26);

          if (askToContinue()) {
            /* A function that clears the newly updated text on a screen and
displays the previous screen state. */
            reViewMainScreen(MIDTERM_APP, currentMenuItem,
                             displayCalculateGPAHeading);
            /* Continues the loop*/
            isContinues = true;
            i = 0;
          } else {
            /* stops the for loop */
            isContinues = false;
            i = MAX_SUBJECT_LENGTH + i;
          }
        } else {

          /* A function that clears the newly updated text on a screen and
            displays the previous screen state. */
          reViewMainScreen(MIDTERM_APP, currentMenuItem,
                           displayCalculateGPAHeading);

          errorMessage = "Invalid Input. Please try again!";
          newError(errorMessage, ALIGNMENTX2, ALIGNMENTY26);

          if (askToContinue()) {
            /* A function that clears the newly updated text on a screen and
displays the previous screen state. */
            reViewMainScreen(MIDTERM_APP, currentMenuItem,
                             displayCalculateGPAHeading);
            /* Continues the loop*/
            isContinues = true;
            i = 0;
          } else {
            /* stops the for loop */
            isContinues = false;
            i = MAX_SUBJECT_LENGTH + i;
          }
        }
      }
    }

  } while (isContinues);
}

#endif