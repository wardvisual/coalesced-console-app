/**
 * @file /src/core/apps/calculations.cpp
 * @brief
 *
 * */

#ifndef CPP_CALCULATE_THREE_INSTALLEMENT_ACTIVTY_FOUR_SECONDSEM
#define CPP_CALCULATE_THREE_INSTALLEMENT_ACTIVTY_FOUR_SECONDSEM

#include "../../../../../includes/constants/alignment.cpp"
#include "../../../../../includes/constants/validation.cpp"
#include "../../../../components/text.cpp"

#include "../../../../components/view.cpp"

#include "../constants.cpp"

void calculateThreeInstallment(std::string currentMenu, float tuitionFee,
                               void (&heading)()) {
  int reAlignLabelYCoordinate = ALIGNMENTY31;
  int reAlignErrorMsgYCoordinate = ALIGNMENTY35;
  float expectedArrayOfValue[] = {};
  int arrayLength = 0; // none

  float interest = tuitionFee * TEN_PERCENT_INTEREST;
  float totalTuitionFee = tuitionFee + interest;
  float initialPayment = tuitionFee / THREE_TRANSACTION_PAYMENT;

  text("Three-Installment [10% Interest]", TEXT_WHITE, ALIGNMENTX38,
       ALIGNMENTY25);

  text("Result", TEXT_BLUE, ALIGNMENTX38, ALIGNMENTY23);
  text("Interest: ", TEXT_WHITE, ALIGNMENTX38, ALIGNMENTY27);
  setDecimalValue(interest, TEXT_WHITE, ALIGNMENTX48, ALIGNMENTY27);

  text("Total Tuition Fee: ", TEXT_WHITE, ALIGNMENTX38, ALIGNMENTY29);
  setDecimalValue(totalTuitionFee, TEXT_WHITE, ALIGNMENTX58, ALIGNMENTY29);

  text("Initial Payment: ", TEXT_WHITE, ALIGNMENTX38, ALIGNMENTY31);
  setDecimalValue(initialPayment, TEXT_WHITE, ALIGNMENTX57, ALIGNMENTY31);
}

#endif