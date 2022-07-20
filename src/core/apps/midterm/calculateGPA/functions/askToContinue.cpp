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

bool askToContinue() {
  bool isUserContinued = false;
  char isContinues;
  int reAlignLabelYCoordinate = ALIGNMENTY24,
      reAlignErrorMsgYCoordinate = ALIGNMENTY26;

  std::string labelForAskingToContinue = "Do you want to continue?[Y/N]";

  char expectedArrayOfValueForChar[] = {};
  int arrayLength = 0; // none

  input<char>(labelForAskingToContinue, isContinues,
              expectedArrayOfValueForChar, arrayLength, RESTRICTED_INPUT,
              reAlignLabelYCoordinate, reAlignErrorMsgYCoordinate);

  if (std::tolower(isContinues) == 'y') {
    isUserContinued = true;
  }

  return isUserContinued;
}

#endif