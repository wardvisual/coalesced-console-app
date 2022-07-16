/**
 * @file /src/core/apps/secondsem/activityOne/index.cpp
 * @brief
 *
 * */

#ifndef CPP_ACTIVTY_A_SECONDSEM
#define CPP_ACTIVTY_A_SECONDSEM

#include "../../../components/input.cpp"
#include "../../../components/text.cpp"

#include "../../../../includes/constants/alignment.cpp"
#include "../../../../includes/constants/color.cpp"
#include "../../../../includes/constants/validation.cpp"

void activityOne() {
  bool isInputRestrictedForSingleValue = false;
  int reAlignLabelYCoordinate = ALIGNMENTY31;
  int reAlignErrorMsgYCoordinate = ALIGNMENTY33;

  std::string username, course;
  std::string getNameLabel = "Enter your name";
  std::string getCourseLabel = "Enter your course";

  // input<std::string>(getNameLabel, username, !RESTRICTED_INPUT,
  //                    reAlignLabelYCoordinate, reAlignErrorMsgYCoordinate);

  // input<std::string>(getCourseLabel, course, !RESTRICTED_INPUT,
  //                    reAlignLabelYCoordinate, reAlignErrorMsgYCoordinate);

  text("\n\nYour details: \nName: " + username, TEXT_GREEN, ALIGNMENTX13,
       ALIGNMENTY13);
}

#endif
