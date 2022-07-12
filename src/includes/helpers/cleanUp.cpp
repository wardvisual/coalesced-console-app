/**
 * @file /src/includes/helpers/cleanUp.cpp
 * @brief A helpers that is used to clean up the screen
 *
 * */

#ifndef CPP_CLEAN_UP_HELPER
#define CPP_CLEAN_UP_HELPER

#include "../../core/components/header.cpp"
#include "../../includes/constants/color.cpp"

void cleanUpScreen() {
  system("clear");

  headerComponent(" GROUP SIX FINAL PROJECT | CONSOLE APPLICATION ");

  mainMenuHeaderComponent(" MAIN MENU ");
}

#endif