/**
 * @file /src/core/apps/secondsem/activityFour/index.cpp
 * @brief Second sem activity four
 *
 * */

/* A preprocessor directive that prevents the file from being included more than
  once. */
#ifndef CPP_ACTIVTY_FOUR_INDEX_SECONDSEM
#define CPP_ACTIVTY_FOUR_INDEX_SECONDSEM

/* Components */
#include "../../../components/input.cpp"
#include "../../../components/text.cpp"
#include "../../../components/view.cpp"

/* Constants */
#include "../../../../includes/constants/alignment.cpp"
#include "../../../../includes/constants/color.cpp"
#include "../../../../includes/constants/menu.cpp"
#include "../../../../includes/constants/validation.cpp"

/* Helpers */
#include "../../../../includes/helpers/cleanUp.cpp"

/* Activity three constants */
#include "constants.cpp"

/* Activity three helpers */
#include "functions/calculateCashPayment.cpp"
#include "functions/calculateFourInstallment.cpp"
#include "functions/calculateThreeInstallment.cpp"
#include "functions/calculateTwoInstallment.cpp"

/* It's a function declaration. */
void activityFourHeading();

/**
 * Activity Three
 *
 * Instruction:
 *    Using C++ create a program that will computes the tuition fee of the
 students based on the given mode of payment below.
 * A. Cash 10% discount
   B. Two-installment 5% discount
   C. Three-installment 10% interest
   D. Four-installment 12% interest
 *
 * @param currentMenu The current menu that the user is in.
 */
void activityFour(std::string currentMenu) {
  /* Declaring variables. */
  int reAlignLabelYCoordinate = ALIGNMENTY31;
  int reAlignErrorMsgYCoordinate = ALIGNMENTY35;

  float expectedArrayOfValueFloat[] = {};
  std::string expectedArrayOfValuePaymentMode[] = {};
  int arrayLength = 0; // none

  float tuitionFee;
  std::string modeOfPayment;
  std::string labelForTuitionFee = "Enter tuition fee";
  std::string labelForModeOfPayment = "Choose mode of payment";

  /* It display the heading */
  activityFourHeading();

  /* It handles user input and prints an error if there is an error. */
  input<float>(labelForTuitionFee, tuitionFee, expectedArrayOfValueFloat,
               arrayLength, !RESTRICTED_INPUT, reAlignLabelYCoordinate,
               reAlignErrorMsgYCoordinate);

  /* A function that review the current screen. */
  reViewMainScreen(currentMenu, activityFourHeading);

  /* It's displaying the result of the user input. */
  text("Tuition Fee: ", TEXT_BLUE, ALIGNMENTX38, ALIGNMENTY15);
  setDecimalValue(tuitionFee, TEXT_WHITE, ALIGNMENTX51, ALIGNMENTY15);

  /* It handles user input and prints an error if there is an error. */
  input<std::string>(labelForModeOfPayment, modeOfPayment,
                     expectedArrayOfValuePaymentMode, arrayLength,
                     RESTRICTED_INPUT, reAlignLabelYCoordinate,
                     reAlignErrorMsgYCoordinate);

  /* A function that review the current screen. */
  reViewMainScreen(currentMenu, activityFourHeading);

  /* It's displaying the result of the user input. */
  text("Tuition Fee: ", TEXT_BLUE, ALIGNMENTX38, ALIGNMENTY15);
  setDecimalValue(tuitionFee, TEXT_WHITE, ALIGNMENTX51, ALIGNMENTY15);

  /* It's a function that will calculate the tuition fee of the students based
  on the given mode of payment. */
  // Cash
  if (modeOfPayment == MENU_ITEM_1) {
    calculateCashPayment(currentMenu, tuitionFee, activityFourHeading);
  }
  // Two-Installment
  if (modeOfPayment == MENU_ITEM_2) {
    calculateTwoInstallment(currentMenu, tuitionFee, activityFourHeading);
  }
  // Three-Installment
  if (modeOfPayment == MENU_ITEM_3) {
    calculateThreeInstallment(currentMenu, tuitionFee, activityFourHeading);
  }
  // Four-Installment
  if (modeOfPayment == MENU_ITEM_4) {
    calculateFourInstallment(currentMenu, tuitionFee, activityFourHeading);
  }
}

/**
 * It displays the heading for the first activity.
 */
void activityFourHeading() {
  /* It's displaying the instruction for the user. */
  text("Instruction: ", TEXT_BLUE, ALIGNMENTX38, ALIGNMENTY10);
  text("Using C++ create a program that will computes the tuition fee of the "
       "students based",
       TEXT_WHITE, ALIGNMENTX38, ALIGNMENTY12);
  text("on the given mode of payment below.", TEXT_WHITE, ALIGNMENTX38,
       ALIGNMENTY13);

  text("Mode of payment: ", TEXT_BLUE, ALIGNMENTX38, ALIGNMENTY17);
  text("[1]: for Cash [10% Discount]", TEXT_WHITE, ALIGNMENTX38, ALIGNMENTY19);
  text("[2]: for Two-Installement [5% Discount]", TEXT_WHITE, ALIGNMENTX38,
       ALIGNMENTY21);
  text("[3]: for Three-Installement [10% Discount]", TEXT_WHITE, ALIGNMENTX80,
       ALIGNMENTY19);
  text("[4]: for Four-Installement [12% Discount]", TEXT_WHITE, ALIGNMENTX80,
       ALIGNMENTY21);
}

#endif
