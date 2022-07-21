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
#include "functions/computeGradePointAverage.cpp"
#include "functions/getUserDetails.cpp"
#include "functions/heading.cpp"
#include "functions/identifyHonorStudent.cpp"

/**
 * It's a function that calculates the GPA of a student
 *
 * @param currentMenuItem It's the current menu item that the user is currently
 * in.
 */
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
  bool isContinues = false, isGradeDoneInserting = false;
  float acceptedGrade;

  float acceptedGrades[MAX_SUBJECT_LENGTH] = {};
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

    displayUserDetails(userName, userCourse);

    /* User input label */
    text(labelForUserGrade, TEXT_BLUE, ALIGNMENTX2, ALIGNMENTY22);

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

      /* It's displaying the user details such as name and course. */
      displayUserDetails(userName, userCourse);

      /* User input label */
      text("Grades:", TEXT_BLUE, ALIGNMENTX59, ALIGNMENTY23);
      text(labelForUserGrade, TEXT_BLUE, ALIGNMENTX2, ALIGNMENTY22);

      /* It's displaying the user entered grades. */
      for (int i = 0; i < MAX_SUBJECT_LENGTH; i++) {
        /* It's displaying the user entered grades */
        text(availableSubjects[i] + ":", TEXT_WHITE, ALIGNMENTX59,
             ALIGNMENTY25 + i);
        setDecimalValue(acceptedGrades[i], TEXT_WHITE, ALIGNMENTX69,
                        ALIGNMENTY25 + i);
      }

      /* It's a function that validates the user input. */
      if (!validateString(userGrade, true)) {
        acceptedGrade = std::stof(userGrade);

        /* It's checking if the user entered grade is within the range of 1.00
        to 2.25. If it is, it will display the user entered grades. */
        if (acceptedGrade >= MIN_GRADE && acceptedGrade <= MAX_GRADE) {
          int singleValue = 1;

          if (i == MAX_SUBJECT_LENGTH - singleValue)
            isGradeDoneInserting = true;

          acceptedGrades[i] = acceptedGrade;

          for (int i = 0; i < MAX_SUBJECT_LENGTH; i++) {
            /* It's displaying the user entered grades */
            text(availableSubjects[i] + ":", TEXT_WHITE, ALIGNMENTX59,
                 ALIGNMENTY25 + i);
            setDecimalValue(acceptedGrades[i], TEXT_WHITE, ALIGNMENTX69,
                            ALIGNMENTY25 + i);
          }

        } else {
          /* A function that clears the newly updated text on a screen and
  displays the previous screen state. */
          reViewMainScreen(MIDTERM_APP, currentMenuItem,
                           displayCalculateGPAHeading);

          std::string errorMessage = "Grade must be ranging from 1.00 to 2.25";
          newError(errorMessage, ALIGNMENTX2, ALIGNMENTY26);

          askToContinue(i, MAX_SUBJECT_LENGTH, isContinues, acceptedGrades);

          reViewMainScreen(MIDTERM_APP, currentMenuItem,
                           displayCalculateGPAHeading);
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

          askToContinue(i, MAX_SUBJECT_LENGTH, isContinues, acceptedGrades);

          reViewMainScreen(MIDTERM_APP, currentMenuItem,
                           displayCalculateGPAHeading);
        } else {
          /* A function that clears the newly updated text on a screen and
            displays the previous screen state. */
          reViewMainScreen(MIDTERM_APP, currentMenuItem,
                           displayCalculateGPAHeading);

          errorMessage = "Invalid Input. Please try again!";
          newError(errorMessage, ALIGNMENTX2, ALIGNMENTY26);

          askToContinue(i, MAX_SUBJECT_LENGTH, isContinues, acceptedGrades);

          reViewMainScreen(MIDTERM_APP, currentMenuItem,
                           displayCalculateGPAHeading);
        }
      }
    }

    /* It's a function that calculates the GPA of a student. */
    if (isGradeDoneInserting) {
      int withoutLoop = 1; // true
      float totalGPA = computeGradePointAverage(
          availableSubjects, acceptedGrades, MAX_SUBJECT_LENGTH);

      /* It's a function that identifies if the student is an honor student or
         not. */
      identifyHonorStudent(totalGPA, MAX_GRADE, userName, userCourse);

      /* It's a function that asks the user if he/she wants to continue or not.
       */
      askToContinue(withoutLoop, MAX_SUBJECT_LENGTH, isContinues,
                    acceptedGrades);

      /* It's a function that clears the newly updated text on a screen and
      displays the previous screen state. */
      reViewMainScreen(MIDTERM_APP, currentMenuItem,
                       displayCalculateGPAHeading);

      /* Resetting to false */
      isGradeDoneInserting = false;
    }

  } while (isContinues);
}

#endif