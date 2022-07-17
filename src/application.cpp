/**
 * @file /src/application.cpp
 * @brief sub directory
 *
 */

#include <iostream>
#include <windows.h>

/* Components */
#include "./core/components/header.cpp"
#include "./core/components/menu.cpp"

/* Controllers */
#include "./core/controllers/menu.cpp"

void renderConsoleApplication() {
  /* =============== || COMPONENTS || ============== */
  headerComponent();
  mainMenuHeaderComponent();

  /* =============== || CONTROLLERS || ============== */
  mainMenuController();
}