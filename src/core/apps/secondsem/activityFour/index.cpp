/**
 * @file /src/core/apps/secondsem/activityFour/index.cpp
 * @brief
 *
 * */

#ifndef CPP_ACTIVTY_FOUR_INDEX_SECONDSEM
#define CPP_ACTIVTY_FOUR_INDEX_SECONDSEM

#define TEN_PERCENT 0.10
#define FIVE_PERCENT 0.5
#define TWELVE_PERCENT 0.21
#define TWO_INSTALLMENT 2
#define THREE_INSTALLMENT 3
#define FOUR_INSTALLMENT 4

#include "../../../components/input.cpp"
#include "../../../components/text.cpp"
#include "../../../components/view.cpp"

#include "../../../../includes/constants/alignment.cpp"
#include "../../../../includes/constants/color.cpp"
#include "../../../../includes/constants/validation.cpp"

#include "../../../../includes/helpers/cleanUp.cpp"
#include "../../../../includes/helpers/math.cpp"

void activityFourHeading();

void activityFour(char currentMenu) {
  int reAlignLabelYCoordinate = ALIGNMENTY31;
  int reAlignErrorMsgYCoordinate = ALIGNMENTY35;

  float expectedArrayOfValue[] = {};
  int arrayLength = 0; // none

  float tuitionFee;
  std::string label = "Enter tuition fee";

  activityFourHeading();

  input<float>(label, tuitionFee, expectedArrayOfValue, arrayLength,
               !RESTRICTED_INPUT, reAlignLabelYCoordinate,
               reAlignErrorMsgYCoordinate);

  reViewMainScreen(currentMenu, activityFourHeading);

  text("Tuition Fee: ", TEXT_BLUE, ALIGNMENTX38, ALIGNMENTY15);
  text(std::to_string(roundOff(tuitionFee)), TEXT_WHITE, ALIGNMENTX51,
       ALIGNMENTY15);
}

void activityFourHeading() {
  text("Instruction: ", TEXT_BLUE, ALIGNMENTX38, ALIGNMENTY10);
  text("Using C++ create a program that will computes the tuition fee of the "
       "students based",
       TEXT_WHITE, ALIGNMENTX38, ALIGNMENTY12);
  text("on the given mode of payment below.", TEXT_WHITE, ALIGNMENTX38,
       ALIGNMENTY13);

  text("Mode of payment: ", TEXT_BLUE, ALIGNMENTX38, ALIGNMENTY17);
  text("[A]: for Cash (10% Discount)", TEXT_WHITE, ALIGNMENTX38, ALIGNMENTY19);
  text("[B]: for Two-Installement (5% Discount)", TEXT_WHITE, ALIGNMENTX38,
       ALIGNMENTY21);
  text("[C]: for Three-Installement (10% Discount)", TEXT_WHITE, ALIGNMENTX80,
       ALIGNMENTY19);
  text("[D]: for Four-Installement (12% Discout)", TEXT_WHITE, ALIGNMENTX80,
       ALIGNMENTY21);
}

#endif
