/* Including the library that is used in this utility. */
#include <ctime>

#ifndef CPP_GENERATE_ID
#define CPP_GENERATE_ID

/**
 * It returns the current time in seconds. It is basically for generating a
 * unique random integers
 *
 * @return The number of seconds since the Unix Epoch.
 */

int generateId() {
  time_t seconds = time(0);

  return seconds;
}

#endif