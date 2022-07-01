#include <iostream>

/* Including the files in the component folder. */
#include "./core/component/header.cpp"
#include "./core/component/menu.cpp"
#include "./core/component/newLine.cpp"

void renderConsoleApplication() {
  const int standardSpace = 3;

  headerComponent("GROUP SIX FINAL PROJECT | CONSOLE APPLICATION");

  menuComponent();
}