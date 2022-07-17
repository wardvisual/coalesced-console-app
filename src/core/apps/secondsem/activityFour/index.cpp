/**
 * @file /src/core/apps/secondsem/activityFour/index.cpp
 * @brief
 *
 * */

#ifndef CPP_ACTIVTY_FOUR_INDEX_SECONDSEM
#define CPP_ACTIVTY_FOUR_INDEX_SECONDSEM

#include "../../../components/input.cpp"
#include "../../../components/text.cpp"
#include "../../../components/view.cpp"

#include "../../../../includes/constants/alignment.cpp"
#include "../../../../includes/constants/color.cpp"
#include "../../../../includes/constants/menu.cpp"
#include "../../../../includes/constants/validation.cpp"

#include "../../../../includes/helpers/cleanUp.cpp"

#include "constants.cpp"
#include "functions/calculateCashPayment.cpp"
#include "functions/calculateFourInstallment.cpp"
#include "functions/calculateThreeInstallment.cpp"
#include "functions/calculateTwoInstallment.cpp"

void activityFourHeading();

void activityFour(std::string currentMenu) {
  int reAlignLabelYCoordinate = ALIGNMENTY31;
  int reAlignErrorMsgYCoordinate = ALIGNMENTY35;

  float expectedArrayOfValueFloat[] = {};
  std::string expectedArrayOfValuePaymentMode[] = {};
  int arrayLength = 0; // none

  float tuitionFee;
  std::string modeOfPayment;
  std::string labelForTuitionFee = "Enter tuition fee";
  std::string labelForModeOfPayment = "Choose mode of payment";

  activityFourHeading();

  input<float>(labelForTuitionFee, tuitionFee, expectedArrayOfValueFloat,
               arrayLength, !RESTRICTED_INPUT, reAlignLabelYCoordinate,
               reAlignErrorMsgYCoordinate);

  reViewMainScreen(currentMenu, activityFourHeading);
  text("Tuition Fee: ", TEXT_BLUE, ALIGNMENTX38, ALIGNMENTY15);
  setDecimalValue(tuitionFee, TEXT_WHITE, ALIGNMENTX51, ALIGNMENTY15);

  input<std::string>(labelForModeOfPayment, modeOfPayment,
                     expectedArrayOfValuePaymentMode, arrayLength,
                     RESTRICTED_INPUT, reAlignLabelYCoordinate,
                     reAlignErrorMsgYCoordinate);

  reViewMainScreen(currentMenu, activityFourHeading);
  text("Tuition Fee: ", TEXT_BLUE, ALIGNMENTX38, ALIGNMENTY15);
  setDecimalValue(tuitionFee, TEXT_WHITE, ALIGNMENTX51, ALIGNMENTY15);

  // Cash
  if (modeOfPayment == MENU_ITEM_A) {
    calculateCashPayment(currentMenu, tuitionFee, activityFourHeading);
  }
  // Two-Installment
  if (modeOfPayment == MENU_ITEM_B) {
    calculateTwoInstallment(currentMenu, tuitionFee, activityFourHeading);
  }
  // Three-Installment
  if (modeOfPayment == MENU_ITEM_C) {
    calculateThreeInstallment(currentMenu, tuitionFee, activityFourHeading);
  }
  // Four-Installment
  if (modeOfPayment == MENU_ITEM_D) {
    calculateFourInstallment(currentMenu, tuitionFee, activityFourHeading);
  }
}

void activityFourHeading() {
  text("Instruction: ", TEXT_BLUE, ALIGNMENTX38, ALIGNMENTY10);
  text("Using C++ create a program that will computes the tuition fee of the "
       "students based",
       TEXT_WHITE, ALIGNMENTX38, ALIGNMENTY12);
  text("on the given mode of payment below.", TEXT_WHITE, ALIGNMENTX38,
       ALIGNMENTY13);

  text("Mode of payment: ", TEXT_BLUE, ALIGNMENTX38, ALIGNMENTY17);
  text("[A]: for Cash [10% Discount]", TEXT_WHITE, ALIGNMENTX38, ALIGNMENTY19);
  text("[B]: for Two-Installement [5% Discount]", TEXT_WHITE, ALIGNMENTX38,
       ALIGNMENTY21);
  text("[C]: for Three-Installement [10% Discount]", TEXT_WHITE, ALIGNMENTX80,
       ALIGNMENTY19);
  text("[D]: for Four-Installement [12% Discount]", TEXT_WHITE, ALIGNMENTX80,
       ALIGNMENTY21);
}

#endif
