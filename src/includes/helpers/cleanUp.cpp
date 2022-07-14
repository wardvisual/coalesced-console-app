/**
 * @file /src/includes/helpers/cleanUp.cpp
 * @brief A helpers that is used to clean up the screen
 *
 * */

#ifndef CPP_CLEAN_UP_HELPER
#define CPP_CLEAN_UP_HELPER

/**
 * It takes three functions as arguments and calls them in the order they were
 * passed in
 *
 * @param retainComponenOne This is the function that will be called to retain
 * the first component.
 * @param retainComponenTwo This is the function that will be called to retain
 * the second component of the screen.
 * @param retainComponenThree This is the last component to be displayed on the
 * screen.
 */
void cleanUpScreen(void (&retainComponenOne)(), void (&retainComponenTwo)()) {
  system("cls");

  retainComponenOne();

  retainComponenTwo();
}

#endif