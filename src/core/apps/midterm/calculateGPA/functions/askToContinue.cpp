/**
 * @file /src/core/apps/midterm/functions/askToContinue.cpp
 * @brief A helper function
 *
 * */

/* A preprocessor directive that prevents the file from being included more than
  once. */
#ifndef CPP_ASK_TO_CONTINUE_MIDTERM
#define CPP_ASK_TO_CONTINUE_MIDTERM

/* Constants */
#include "../../../../../includes/constants/alignment.cpp"
#include "../../../../../includes/constants/validation.cpp"

/* Components */
#include "../../../../components/input.cpp"
#include "../../../../components/text.cpp"
#include "../../../../components/view.cpp"

/**
 * It asks the user if they want to continue
 *
 * @param count This is the number of times the user has entered a grade.
 * @param maxArrayLength The maximum length of the array.
 * @param isWhileLoopContinues This is a boolean variable that is used to
 * determine whether the while loop should continue or not.
 * @param acceptedGrades This is the array that stores the grades.
 *
 * @return A boolean value.
 */
bool askToContinue(int &count, int maxArrayLength, bool &isWhileLoopContinues,
                   float *acceptedGrades) {
  bool isUserContinued = false;
  char isContinues;
  int reAlignLabelYCoordinate = ALIGNMENTY24,
      reAlignErrorMsgYCoordinate = ALIGNMENTY26, iterationStarting = 0;

  std::string labelForAskingToContinue = "Do you want to continue?[Y/N]";

  char expectedArrayOfValueForChar[] = {};
  int arrayLength = 0; // none

  input<char>(labelForAskingToContinue, isContinues,
              expectedArrayOfValueForChar, arrayLength, RESTRICTED_INPUT,
              reAlignLabelYCoordinate, reAlignErrorMsgYCoordinate);

  /* Checking if the user wants to continue. */
  if (std::tolower(isContinues) == 'y') {
    /* rerun the loop*/
    isWhileLoopContinues = true;
    isUserContinued = true;
    count = maxArrayLength + count;

    /* It validates if the array length is equal to 0. If so, then it clears the
      array. */
    if (count == iterationStarting) {
      /* Resetting the array to 0. */
      for (int i = 0; i < maxArrayLength; i++) {
        *(&acceptedGrades[i]) = 0;
      }
    }
  } else {
    isWhileLoopContinues = false;
    count = maxArrayLength + count;
  }

  return isUserContinued;
}

#endif