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

  if (count == iterationStarting) {
    if (std::tolower(isContinues) == 'y') {
      /* rerun the loop*/
      isWhileLoopContinues = true;
      isUserContinued = true;
      count = maxArrayLength + count;

      /* Resetting the array to 0. */
      for (int i = 0; i < maxArrayLength; i++) {
        *(&acceptedGrades[i]) = 0;
      }
    } else {
      isWhileLoopContinues = false;
      isUserContinued = false;
    }
  } else {
    if (std::tolower(isContinues) == 'y') {
      count = maxArrayLength + count;

      /* Resetting the array to 0. */
      for (int i = 0; i < maxArrayLength; i++) {
        *(&acceptedGrades[i]) = 0;
      }

      isWhileLoopContinues = true;

    } else {
      isWhileLoopContinues = false;
    }
  }

  return isUserContinued;
}

#endif