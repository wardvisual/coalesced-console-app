/**
 * @file /src/core/apps/secondsem/quizTwo/functions/timeConversion.cpp
 * @brief A helper function
 *
 * */

/* A preprocessor directive that prevents the file from being included more than
  once. */
#ifndef CPP_TIME_CONVERSION_QUIZ_TWO_SECONDSEM
#define CPP_TIME_CONVERSION_QUIZ_TWO_SECONDSEM

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
 * It's a function that converts the number of seconds to hours, minutes and
 * remaining seconds
 *
 * @param type It's the type of the current menu.
 * @param currentMenu It's the current menu that the user is in.
 * @param activityThreeHeading It's a function that displays the heading of the
 * activity.
 */

void renderTimeConversion(std::string type, std::string currentMenu,
                          void (&activityThreeHeading)()) {
  /* variable declaration */
  int reAlignLabelYCoordinate = ALIGNMENTY31;
  int reAlignErrorMsgYCoordinate = ALIGNMENTY35;

  std::string label = "Enter number of seconds";
  int userNumberOfSeconds, toHours, toMinutes, toRemainingSeconds;
  std::string errorMessage = "\n  Input must be a valid number.";

  int expectedArrayOfValue[] = {};
  int arrayLength = 0; // none

  /* It's displaying the type of conversion. */
  text("Type of Conversion: Time Conversion", TEXT_BLUE, ALIGNMENTX38,
       ALIGNMENTY21);

  /* It handles user input and prints an error if there is an error. */
  input<int>(label, userNumberOfSeconds, expectedArrayOfValue, arrayLength,
             !RESTRICTED_INPUT, reAlignLabelYCoordinate,
             reAlignErrorMsgYCoordinate, errorMessage);

  /* A function that clears the screen and displays the main menu. */
  reViewMainScreen(type, currentMenu, activityThreeHeading);

  /* It's displaying the type of conversion. */
  text("Type of Conversion: Time Conversion", TEXT_BLUE, ALIGNMENTX38,
       ALIGNMENTY21);
  text("Result:", TEXT_BLUE, ALIGNMENTX38, ALIGNMENTY23);
  text("Inputted seconds: " + std::to_string(userNumberOfSeconds), TEXT_WHITE,
       ALIGNMENTX38, ALIGNMENTY25);

  /* It's converting the number of days to years, months and days. */
  /* Years */
  toHours = userNumberOfSeconds / ONE_HOUR;
  /* Months */
  toMinutes = (userNumberOfSeconds - (ONE_HOUR * toHours) / ONE_MINUTE);
  /* Days */
  toRemainingSeconds =
      (userNumberOfSeconds - (ONE_HOUR * toHours) / ONE_MINUTE);

  /* It's displaying the type of conversion. */
  text("Type of Conversion: Time Conversion", TEXT_BLUE, ALIGNMENTX38,
       ALIGNMENTY21);
  /* It's displaying the result of the calculation. */
  text("Result:", TEXT_BLUE, ALIGNMENTX38, ALIGNMENTY23);
  text("Inputted seconds: " + std::to_string(userNumberOfSeconds), TEXT_WHITE,
       ALIGNMENTX38, ALIGNMENTY25);

  text("Hour(s): " + std::to_string(toHours), TEXT_WHITE, ALIGNMENTX38,
       ALIGNMENTY27);

  text("Minute(s): " + std::to_string(toMinutes), TEXT_WHITE, ALIGNMENTX38,
       ALIGNMENTY29);

  text("Remaining Second(s): " + std::to_string(toRemainingSeconds), TEXT_WHITE,
       ALIGNMENTX38, ALIGNMENTY31);
}

#endif