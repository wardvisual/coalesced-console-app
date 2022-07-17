/**
 * @file /src/core/apps/calculations.cpp
 * @brief
 *
 * */

#ifndef CPP_CALCULATE_CASH_PAYMENT_ACTIVTY_FOUR_SECONDSEM
#define CPP_CALCULATE_CASH_PAYMENT_ACTIVTY_FOUR_SECONDSEM

#include "../../../../../includes/constants/alignment.cpp"
#include "../../../../../includes/constants/validation.cpp"
#include "../../../../components/text.cpp"

#include "../../../../components/view.cpp"

#include "../constants.cpp"

void calculateCashPayment(std::string currentMenu, int tuitionFee,
                          void (&heading)()) {
  int reAlignLabelYCoordinate = ALIGNMENTY31;
  int reAlignErrorMsgYCoordinate = ALIGNMENTY35;

  float totalTuitionFee = 0, discount = 0;
  float expectedArrayOfValue[] = {};
  int arrayLength = 0; // none

  text("Cash [10% Discount]", TEXT_WHITE, ALIGNMENTX38, ALIGNMENTY25);

  discount = (tuitionFee - TEN_PERCENT_DISCOUNT);

  totalTuitionFee = (tuitionFee * discount);

  text("Result", TEXT_BLUE, ALIGNMENTX38, ALIGNMENTY23);
  text("Discount: ", TEXT_WHITE, ALIGNMENTX38, ALIGNMENTY27);
  setDecimalValue(discount, TEXT_WHITE, ALIGNMENTX48, ALIGNMENTY27);

  text("Total Tuition Fee: ", TEXT_WHITE, ALIGNMENTX38, ALIGNMENTY29);
  setDecimalValue(totalTuitionFee, TEXT_WHITE, ALIGNMENTX58, ALIGNMENTY29);
}

#endif