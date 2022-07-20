/**
 * @file /src/core/apps/secondsem/quizTwo/functions/daysConversion.cpp
 * @brief A helper function
 *
 * */

/* A preprocessor directive that prevents the file from being included more than
  once. */
#ifndef CPP_DAYS_CONVERSION_QUIZ_TWO_SECONDSEM
#define CPP_DAYS_CONVERSION_QUIZ_TWO_SECONDSEM

/* Constants */
#include "../../../../../includes/constants/alignment.cpp"
#include "../../../../../includes/constants/color.cpp"
#include "../../../../../includes/constants/validation.cpp"

/* Components */
#include "../../../../components/text.cpp"
#include "../../../../components/view.cpp"

/* Renders days conversion constants */
#include "../constants.cpp"

/**
 * It converts the number of days to years, months and days.
 *
 *  @param type It's the type of the current menu.
 * @param currentMenu It's the current menu that the user is in.
 * @param activityThreeHeading It's a function that displays the heading of the
 * activity.
 */

void renderDaysConversion(std::string type, std::string currentMenu,
                          void (&activityThreeHeading)()) {
  /* variable declaration */
  int reAlignLabelYCoordinate = ALIGNMENTY31;
  int reAlignErrorMsgYCoordinate = ALIGNMENTY35;

  std::string label = "Enter number of days";
  int userNumberOfDays, toYears, toMonths, toRemainingDays;

  int expectedArrayOfValue[] = {};
  int arrayLength = 0; // none

  /* It's displaying the type of conversion. */
  text("Type of Conversion: Days Conversion", TEXT_BLUE, ALIGNMENTX38,
       ALIGNMENTY21);

  /* It handles user input and prints an error if there is an error. */
  input<int>(label, userNumberOfDays, expectedArrayOfValue, arrayLength,
             !RESTRICTED_INPUT, reAlignLabelYCoordinate,
             reAlignErrorMsgYCoordinate);

  /* A function that clears the screen and displays the main menu. */
  reViewMainScreen(type, currentMenu, activityThreeHeading);

  /* It's displaying the type of conversion. */
  text("Type of Conversion: Days Conversion", TEXT_BLUE, ALIGNMENTX38,
       ALIGNMENTY21);
  text("Result:", TEXT_BLUE, ALIGNMENTX38, ALIGNMENTY23);
  text("Inputted days: " + std::to_string(userNumberOfDays), TEXT_WHITE,
       ALIGNMENTX38, ALIGNMENTY25);

  /* It's converting the number of days to years, months and days. */
  /* Years */
  toYears = userNumberOfDays / DAYS_IN_ONE_YEAR;
  /* Months */
  toMonths = ((userNumberOfDays - (DAYS_IN_ONE_YEAR * toYears)) / ONE_MONTH);
  /* Days */
  toRemainingDays = (userNumberOfDays - (DAYS_IN_ONE_YEAR * toYears) -
                     (ONE_MONTH * toMonths));

  /* It's displaying the type of conversion. */
  text("Type of Conversion: Days Conversion", TEXT_BLUE, ALIGNMENTX38,
       ALIGNMENTY21);
  /* It's displaying the result of the calculation. */
  text("Result:", TEXT_BLUE, ALIGNMENTX38, ALIGNMENTY23);
  text("Inputted days: " + std::to_string(userNumberOfDays), TEXT_WHITE,
       ALIGNMENTX38, ALIGNMENTY25);

  text("Year(s): " + std::to_string(toYears), TEXT_WHITE, ALIGNMENTX38,
       ALIGNMENTY27);

  text("Months(s): " + std::to_string(toMonths), TEXT_WHITE, ALIGNMENTX38,
       ALIGNMENTY29);

  text("Remaining Day(s): " + std::to_string(toRemainingDays), TEXT_WHITE,
       ALIGNMENTX38, ALIGNMENTY31);
}

#endif