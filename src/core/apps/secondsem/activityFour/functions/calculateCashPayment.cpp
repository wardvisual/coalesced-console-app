/**
 * @file
 * /src/core/apps/secondsem/activityFour/functions/calculateCashPayment.cpp
 * @brief A helper function
 *
 * */

/* A preprocessor directive that prevents the file from being included more than
  once. */
#ifndef CPP_CALCULATE_CASH_PAYMENT_ACTIVTY_FOUR_SECONDSEM
#define CPP_CALCULATE_CASH_PAYMENT_ACTIVTY_FOUR_SECONDSEM

/* Constants */
#include "../../../../../includes/constants/alignment.cpp"
#include "../../../../../includes/constants/validation.cpp"
#include "../../../../components/text.cpp"

/* Components */
#include "../../../../components/view.cpp"

/* Activity Four Constants */
#include "../constants.cpp"

/**
 * It calculates the total tuition fee of the student and displays it on the
 * screen
 *
 * @param currentMenu The current menu that the user is in.
 * @param tuitionFee The tuition fee of the student
 * @param heading a function that displays the heading of the program
 */
void calculateCashPayment(std::string currentMenu, int tuitionFee,
                          void (&heading)()) {
  /* variable declaration */
  int reAlignLabelYCoordinate = ALIGNMENTY31;
  int reAlignErrorMsgYCoordinate = ALIGNMENTY35;

  float totalTuitionFee = 0, discount = 0;
  float expectedArrayOfValue[] = {};
  int arrayLength = 0; // none

  /* Displays the discount */
  text("Cash [10% Discount]", TEXT_WHITE, ALIGNMENTX38, ALIGNMENTY25);

  /* Calculate the discount */
  discount = (tuitionFee - TEN_PERCENT_DISCOUNT);
  /* Calculate the total tution fee */
  totalTuitionFee = (tuitionFee * discount);

  /* It's displaying the result of the calculation. */
  text("Result", TEXT_BLUE, ALIGNMENTX38, ALIGNMENTY23);
  text("Discount: ", TEXT_WHITE, ALIGNMENTX38, ALIGNMENTY27);
  setDecimalValue(discount, TEXT_WHITE, ALIGNMENTX48, ALIGNMENTY27);

  text("Total Tuition Fee: ", TEXT_WHITE, ALIGNMENTX38, ALIGNMENTY29);
  setDecimalValue(totalTuitionFee, TEXT_WHITE, ALIGNMENTX58, ALIGNMENTY29);
}

#endif