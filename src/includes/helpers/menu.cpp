/**
 * @file /src/includes/helpers/menu.cpp
 */

#ifndef CPP_MENU_HELPER
#define CPP_MENU_HELPER

#include "../constants/menu.cpp"

char lowerCaseChar(char userInput) {
  char newChar;

  if (userInput == MENU_ITEM_A || userInput == MENU_ITEM_A2) {
    newChar = MENU_ITEM_A;
  }
  if (userInput == MENU_ITEM_B || userInput == MENU_ITEM_B2) {
    newChar = MENU_ITEM_B;
  }
  if (userInput == MENU_ITEM_C || userInput == MENU_ITEM_C2) {
    newChar = MENU_ITEM_C;
  }
  if (userInput == MENU_ITEM_D || userInput == MENU_ITEM_D2) {
    newChar = MENU_ITEM_D;
  }
  if (userInput == MENU_ITEM_E || userInput == MENU_ITEM_E2) {
    newChar = MENU_ITEM_E;
  }
  if (userInput == MENU_ITEM_F || userInput == MENU_ITEM_F2) {
    newChar = MENU_ITEM_F;
  }
  if (userInput == MENU_ITEM_G || userInput == MENU_ITEM_G2) {
    newChar = MENU_ITEM_G;
  }
  if (userInput == MENU_ITEM_H || userInput == MENU_ITEM_H2) {
    newChar = MENU_ITEM_H;
  }
  if (userInput == MENU_ITEM_I || userInput == MENU_ITEM_I2) {
    newChar = MENU_ITEM_I;
  }
  if (userInput == MENU_ITEM_J || userInput == MENU_ITEM_J2) {
    newChar = MENU_ITEM_J;
  }

  return newChar;
}

#endif