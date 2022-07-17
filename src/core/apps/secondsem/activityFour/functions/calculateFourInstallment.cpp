/**
 * @file
 * /src/core/apps/secondsem/activityFour/functions/calculateFourInstallment.cpp
 * @brief A helper function
 *
 * */

/* A preprocessor directive that prevents the file from being included more than
  once. */
#ifndef CPP_CALCULATE_FOUR_INSTALLEMENT_ACTIVTY_FOUR_SECONDSEM
#define CPP_CALCULATE_FOUR_INSTALLEMENT_ACTIVTY_FOUR_SECONDSEM

/* Constants */
#include "../../../../../includes/constants/alignment.cpp"
#include "../../../../../includes/constants/validation.cpp"

/* Components */
#include "../../../../components/text.cpp"
#include "../../../../components/view.cpp"

/* Activity Four Constants */
#include "../constants.cpp"

/**
 * It calculates the interest and total tuition fee of the student and displays
 * it on the screen
 *
 * @param currentMenu The current menu that the user is in.
 * @param tuitionFee the tuition fee of the student
 * @param heading a function that prints the heading of the program
 */
void calculateFourInstallment(std::string currentMenu, float tuitionFee,
                              void (&heading)()) {
  /* variable declaration */
  int reAlignLabelYCoordinate = ALIGNMENTY31;
  int reAlignErrorMsgYCoordinate = ALIGNMENTY35;
  float expectedArrayOfValue[] = {};
  int arrayLength = 0; // none

  float interest = tuitionFee * TEN_PERCENT_INTEREST;
  float totalTuitionFee = tuitionFee + interest;
  float initialPayment = tuitionFee / FOUR_TRANSACTION_PAYMENT;

  /* It's displaying the result of the calculation. */
  text("Four-Installment [12% Interest]", TEXT_WHITE, ALIGNMENTX38,
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