#include <vector>

#include "../constants/maximumLength.cpp"

#include "menuStruct.cpp"

#ifndef CPP_APP_CONTAINER
#define CPP_APP_CONTAINER

struct ApplicationContainer {
  vector<MenuStruct> menuStruct;
};

#endif