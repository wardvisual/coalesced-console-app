/**
 * @file /src/includes/helpers/cleanUp.cpp
 * @brief A helpers that is used to clean up the screen
 *
 * */

#ifndef CPP_CLEAN_UP_HELPER
#define CPP_CLEAN_UP_HELPER

void cleanUpScreen(void (&retainComponenOne)(), void (&retainComponenTwo)()) {
  system("clear");

  retainComponenOne();

  retainComponenTwo();
}

#endif