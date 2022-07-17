/**
 * @file /src/includes/helpers/cleanUp.cpp
 * @brief A helper function for cleaning up the screen
 *
 * */

/* A preprocessor directive that prevents the file from being included more than
  once. */
#ifndef CPP_CLEAN_UP_HELPER
#define CPP_CLEAN_UP_HELPER

/**
 * It takes two functions as arguments and calls them. It is used for clean up.
 *
 * @param retainComponenOne This is the function that will be called to retain
 * the first component.
 * @param retainComponenTwo This is the function that will be called to retain
 * the second component.
 */
void cleanUpScreen(void (&retainComponenOne)(), void (&retainComponenTwo)()) {
  system("cls");

  retainComponenOne();

  retainComponenTwo();
}

#endif