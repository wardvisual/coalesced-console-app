/**
 * @file /src/core/apps/midterm/functions/getUserDetails.cpp
 * @brief A helper function
 *
 * */

/* A preprocessor directive that prevents the file from being included more than
  once. */
#ifndef CPP_GET_USER_DETAILS_MIDTERM
#define CPP_GET_USER_DETAILS_MIDTERM

/* Constants */
#include "../../../../../includes/constants/alignment.cpp"
#include "../../../../../includes/constants/validation.cpp"

/* Components */
#include "../../../../components/text.cpp"
#include "../../../../components/view.cpp"

void getUserDetails(std::string type, std::string currentMenuItem,
                    std::string &userName, std::string &userCourse,
                    void (&displayCalculateGPAHeading)()) {
  /* variable declaration */
  int reAlignLabelYCoordinate = ALIGNMENTY24,
      reAlignErrorMsgYCoordinate = ALIGNMENTY26;

  std::string labelForName = "Enter your name";
  std::string labelForCourse = "Enter your course";

  std::string expectedArrayOfValue[] = {};
  int arrayLength = 0; // none

  /* It handles user input and prints an error if there is an error. */
  input<std::string>(labelForName, userName, expectedArrayOfValue, arrayLength,
                     !RESTRICTED_INPUT, reAlignLabelYCoordinate,
                     reAlignErrorMsgYCoordinate);

  /* A function that clears the newly updated text on a screen and displays
    the previous screen state. */
  reViewMainScreen(type, currentMenuItem, displayCalculateGPAHeading);

  /* It handles user input and prints an error if there is an error. */
  input<std::string>(labelForCourse, userCourse, expectedArrayOfValue,
                     arrayLength, !RESTRICTED_INPUT, reAlignLabelYCoordinate,
                     reAlignErrorMsgYCoordinate);

  /* It's displaying the user entered details */
  text("Name:" + userName, TEXT_BLUE, ALIGNMENTX38, ALIGNMENTY20);
  text("Course: " + userCourse, TEXT_WHITE, ALIGNMENTX38, ALIGNMENTY22);
}

#endif