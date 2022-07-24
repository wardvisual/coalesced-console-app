/**
 * @file /src/core/apps/secondsem/getNameCourse/index.cpp
 * @brief Second sem activity one
 *
 * */

/* A preprocessor directive that prevents the file from being included more than
  once. */
#ifndef CPP_ACTIVTY_ONE_SECONDSEM
#define CPP_ACTIVTY_ONE_SECONDSEM

/* Components */
#include "../../../components/input.cpp"
#include "../../../components/text.cpp"
#include "../../../components/view.cpp"

/* Constants */
#include "../../../../includes/constants/alignment.cpp"
#include "../../../../includes/constants/color.cpp"
#include "../../../../includes/constants/validation.cpp"

/* Helpers */
#include "../../../../includes/helpers/cleanUp.cpp"
#include "../../../../includes/helpers/dataType.cpp"

/* It's a function declaration. */
void getNameCourseHeading();

/**
 * Activity One :: getNameCourse()
 *
 * Instruction:
 *    Using C++ write a program that display your name and your course.
 *
 * @param type It's the type of the current menu.
 * @param currentMenu The current menu that the user is in.
 */
void getNameCourse(std::string type, std::string currentMenu) {

  /* It's a variable declaration. */
  int reAlignLabelYCoordinate = ALIGNMENTY31;
  int reAlignErrorMsgYCoordinate = ALIGNMENTY35;

  int arrayLength = 2; // none
  std::string expectedArrayOfValue[2] = {"Edward"};

  std::string username, course;
  std::string nameLabel = "Enter your name";
  std::string courseLabel = "Enter your course";

  /* It display the heading */
  getNameCourseHeading();

  /* It handles user input and prints an error if there is an error. */
  input<std::string>(nameLabel, username, expectedArrayOfValue, arrayLength,
                     !RESTRICTED_INPUT, reAlignLabelYCoordinate,
                     reAlignErrorMsgYCoordinate);

  /* A function that review the current screen. */
  reViewMainScreen(type, currentMenu, getNameCourseHeading);

  /* It's displaying the result of the user input. */
  text("Result: ", TEXT_BLUE, ALIGNMENTX38, ALIGNMENTY14);
  text("Name: " + username, TEXT_WHITE, ALIGNMENTX38, ALIGNMENTY16);

  input<std::string>(courseLabel, course, expectedArrayOfValue, arrayLength,
                     !RESTRICTED_INPUT, reAlignLabelYCoordinate,
                     reAlignErrorMsgYCoordinate);

  /* A function that review the current screen. */
  reViewMainScreen(type, currentMenu, getNameCourseHeading);

  /* It's displaying the result of the user input. */
  text("Result: ", TEXT_BLUE, ALIGNMENTX38, ALIGNMENTY14);
  text("Name: " + username, TEXT_WHITE, ALIGNMENTX38, ALIGNMENTY16);
  text("Course: " + course, TEXT_WHITE, ALIGNMENTX38, ALIGNMENTY18);
}

/**
 * It displays the heading for the first activity.
 */
void getNameCourseHeading() {
  /* It's displaying the instruction for the user. */
  text("Instruction: ", TEXT_BLUE, ALIGNMENTX38, ALIGNMENTY10);
  text("Using C++ write a program that display your name and your course.",
       TEXT_WHITE, ALIGNMENTX38, ALIGNMENTY12);
}

#endif
