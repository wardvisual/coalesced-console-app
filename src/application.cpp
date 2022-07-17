/**
 * @file /src/application.cpp
 * @brief Entry point
 *
 */

/* A preprocessor directive that prevents the file from being included more than
  once. */
#ifndef CPP_APPLICATION
#define CPP_APPLICATION

/* Built-in libraries */
#include <iostream>
#include <windows.h>

/* Components */
#include "./core/components/header.cpp"
#include "./core/components/menu.cpp"

/* Controllers */
#include "./core/controllers/menu.cpp"

/**
 * It renders the console application
 */
void renderConsoleApplication() {
  /* =============== || COMPONENTS || ============== */
  headerComponent();
  mainMenuHeaderComponent();

  /* =============== || CONTROLLERS || ============== */
  mainMenuController();
}

#endif