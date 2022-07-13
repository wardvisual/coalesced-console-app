#ifndef CPP_CONTROLLER
#define CPP_CONTROLLER

#include "../components/input.cpp"
#include "./secondsem/menu/showMenu.cpp"

namespace appController {
int userInput;

void seconSem() {
  displaySecondSemMenu();
  input<int>("Input", userInput);
}

} // namespace appController

#endif