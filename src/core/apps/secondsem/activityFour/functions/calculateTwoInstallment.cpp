/**
 * @file /src/core/apps/calculations.cpp
 * @brief
 *
 * */

/* A preprocessor directive that prevents the file from being included more than
  once. */
#ifndef CPP_CALCULATE_TWO_INSTALLEMENT_ACTIVTY_FOUR_SECONDSEM
#define CPP_CALCULATE_TWO_INSTALLEMENT_ACTIVTY_FOUR_SECONDSEM

/* Constants */
#include "../../../../../includes/constants/alignment.cpp"
#include "../../../../../includes/constants/validation.cpp"

/* Components */
#include "../../../../components/text.cpp"
#include "../../../../components/view.cpp"

/* Activity Four Constants */
#include "../constants.cpp"

/**
 * It calculates the tuition fee of a student who wants to pay in two
 * installments
 *
 * @param currentMenu The current menu that the user is in.
 * @param tuitionFee the tuition fee of the student
 * @param heading a function that displays the heading of the program
 */
void calculateTwoInstallment(std::string currentMenu, float tuitionFee,
                             void (&heading)()) {
  /* variable declaration */
  int reAlignLabelYCoordinate = ALIGNMENTY31;
  int reAlignErrorMsgYCoordinate = ALIGNMENTY35;
  float expectedArrayOfValue[] = {};
  int arrayLength = 0; // none

  /* Variable declaration with computation */
  float discount = (tuitionFee * FIVE_PERCENT_DISCOUNT);
  float totalTuitionFee = (tuitionFee - discount);
  float initialPayment = (tuitionFee / TWO_TRANSACTION_PAYMENT);

  /* Displays the discount */
  text("Two-Installment [5% Discount]", TEXT_WHITE, ALIGNMENTX38, ALIGNMENTY25);

  /* It's displaying the result of the calculation. */
  text("Result", TEXT_BLUE, ALIGNMENTX38, ALIGNMENTY23);
  text("Discount: ", TEXT_WHITE, ALIGNMENTX38, ALIGNMENTY27);
  setDecimalValue(discount, TEXT_WHITE, ALIGNMENTX48, ALIGNMENTY27);

  text("Total Tuition Fee: ", TEXT_WHITE, ALIGNMENTX38, ALIGNMENTY29);
  setDecimalValue(totalTuitionFee, TEXT_WHITE, ALIGNMENTX58, ALIGNMENTY29);

  text("Initial Payment: ", TEXT_WHITE, ALIGNMENTX38, ALIGNMENTY31);
  setDecimalValue(initialPayment, TEXT_WHITE, ALIGNMENTX57, ALIGNMENTY31);
}

#endif