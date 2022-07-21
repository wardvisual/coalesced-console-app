/**
 * @file /src/core/apps/secondsem/quizTwo/functions/getTimeDate.cpp
 * @brief A helper function
 *
 * */

/* A preprocessor directive that prevents the file from being included more than
  once. */
#ifndef CPP_TIME_DATE
#define CPP_TIME_DATE

/* Built-in library */
#include <ctime>

/**
 * It returns a string that contains the current date and time
 *
 * @return A string of the current date and time.
 */
std::string getTimeDate() {
  /* current time and date based on current system */
  time_t dateInSeconds = time(NULL);

  /* converts dateInSeconds to string form */
  char *dateAndTime = ctime(&dateInSeconds);

  return dateAndTime;
}

#endif