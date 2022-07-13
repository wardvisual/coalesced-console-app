/**
 * @file /src/application.cpp
 * @brief sub directory
 *
 */

#include <iostream>
#include <windows.h>

/* Including the files in the component folder. */
#include "./core/components/header.cpp"
#include "./core/components/menu.cpp"

#include "./core/controllers/menu.cpp"

void gridLines() {}

void renderConsoleApplication() {
  /* =============== || COMPONENTS || ============== */
  headerComponent();
  mainMenuHeaderComponent();

  /* =============== || CONTROLLERS || ============== */
  mainMenuController();
}