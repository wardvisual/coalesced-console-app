/**
 * @file /src/includes/structures/menuStruct.cpp
 * @brief  A structure that is used to create a menu.
 */

#ifndef CPP_MENU_STRUCT
#define CPP_MENU_STRUCT

struct CleanUpParams {
  void retainComponentOne(std::string) {}
  std::string retainComponentOneParam;
  void retainComponentTwo(std::string) {}
  std::string retainComponentTwoParam;
}

#endif