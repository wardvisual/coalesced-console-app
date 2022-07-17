/**
 * @file /src/core/apps/secondsem/activityOne/index.cpp
 * @brief
 *
 * */

#ifndef CPP_ACTIVTY_ONE_SECONDSEM
#define CPP_ACTIVTY_ONE_SECONDSEM

#include "../../../components/input.cpp"
#include "../../../components/text.cpp"
#include "../../../components/view.cpp"

#include "../../../../includes/constants/alignment.cpp"
#include "../../../../includes/constants/color.cpp"
#include "../../../../includes/constants/validation.cpp"

#include "../../../../includes/helpers/cleanUp.cpp"

void activityOneHeading();

void activityOne(std::string currentMenu) {
  int reAlignLabelYCoordinate = ALIGNMENTY31;
  int reAlignErrorMsgYCoordinate = ALIGNMENTY35;

  std::string expectedArrayOfValue[] = {};
  int arrayLength = 0; // none

  std::string username, course;
  std::string nameLabel = "Enter your name";
  std::string courseLabel = "Enter your course";

  activityOneHeading();

  input<std::string>(nameLabel, username, expectedArrayOfValue, arrayLength,
                     !RESTRICTED_INPUT, reAlignLabelYCoordinate,
                     reAlignErrorMsgYCoordinate);

  reViewMainScreen(currentMenu, activityOneHeading);
  text("Result: ", TEXT_BLUE, ALIGNMENTX38, ALIGNMENTY14);
  text("Name: " + username, TEXT_WHITE, ALIGNMENTX38, ALIGNMENTY16);

  input<std::string>(courseLabel, course, expectedArrayOfValue, arrayLength,
                     !RESTRICTED_INPUT, reAlignLabelYCoordinate,
                     reAlignErrorMsgYCoordinate);

  reViewMainScreen(currentMenu, activityOneHeading);

  text("Result: ", TEXT_BLUE, ALIGNMENTX38, ALIGNMENTY14);
  text("Name: " + username, TEXT_WHITE, ALIGNMENTX38, ALIGNMENTY16);
  text("Course: " + course, TEXT_WHITE, ALIGNMENTX38, ALIGNMENTY18);
}

void activityOneHeading() {
  text("Instruction: ", TEXT_BLUE, ALIGNMENTX38, ALIGNMENTY10);
  text("Using C++ write a program that display your name and your course.",
       TEXT_WHITE, ALIGNMENTX38, ALIGNMENTY12);
}

#endif
