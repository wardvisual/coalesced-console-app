/**
 * @file /src/core/apps/secondsem/activityOne/index.cpp
 * @brief
 *
 * */

#ifndef CPP_ACTIVTY_A_SECONDSEM
#define CPP_ACTIVTY_A_SECONDSEM

#include "../../../components/input.cpp"
#include "../../../components/text.cpp"
#include "../../../components/view.cpp"

#include "../../../../includes/constants/alignment.cpp"
#include "../../../../includes/constants/color.cpp"
#include "../../../../includes/constants/validation.cpp"

#include "../../../../includes/helpers/cleanUp.cpp"

void heading();

void activityTwo(char currentMenu) {
  bool isInputRestrictedForSingleValue = false;
  int reAlignLabelYCoordinate = ALIGNMENTY31;
  int reAlignErrorMsgYCoordinate = ALIGNMENTY35;

  std::string expectedArrayOfValue[] = {};
  int stringValueAccepted = 1;

  std::string username, course;
  std::string nameLabel = "Enter your name";
  std::string courseLabel = "Enter your course";

  heading();

  input<std::string>(nameLabel, username, expectedArrayOfValue,
                     stringValueAccepted, !RESTRICTED_INPUT,
                     reAlignLabelYCoordinate, reAlignErrorMsgYCoordinate);

  reViewMainScreen(currentMenu, heading);

  input<std::string>(courseLabel, course, expectedArrayOfValue,
                     stringValueAccepted, !RESTRICTED_INPUT,
                     reAlignLabelYCoordinate, reAlignErrorMsgYCoordinate);

  reViewMainScreen(currentMenu, heading);

  text("Name: " + username, TEXT_GREEN, ALIGNMENTX38, ALIGNMENTY14);
  text("Course: " + course, TEXT_GREEN, ALIGNMENTX38, ALIGNMENTY15);
}

void heading() {
  text("Instruction: ", TEXT_BLUE, ALIGNMENTX38, ALIGNMENTY10);
  text("Using C++ write a program that display your name and your course.",
       TEXT_WHITE, ALIGNMENTX38, ALIGNMENTY12);
}

#endif
