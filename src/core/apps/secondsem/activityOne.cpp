/**
 * @file /src/core/apps/secondse,/activityOne.cpp
 * @brief
 *
 * */

#ifndef CPP_ACTIVTY_ONE_SECONDSEM
#define CPP_ACTIVTY_ONE_SECONDSEM

#include "../../components/input.cpp"
#include "../../components/text.cpp"

#include "../../../includes/constants/alignment.cpp"
#include "../../../includes/constants/color.cpp"

void activityOne() {
  std::string username, course;

  input("Enter your name", username);
  input("Enter your course", course);

  text("\n\nYour details: \nName: " + username, TEXT_GREEN, ALIGNMENTX13,
       ALIGNMENTY13);
}

#endif
