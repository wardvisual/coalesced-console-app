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

void renderConsoleApplication() {
  headerComponent(" GROUP SIX FINAL PROJECT | CONSOLE APPLICATION ");

  menuComponent();
}