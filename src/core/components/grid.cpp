/**
 * @file /src/core/components/grid.cpp
 * @brief A component that is used to create a layout
 *
 * */

#ifndef CPP_GRID_COMPONENT
#define CPP_GRID_COMPONENT

#include "../../includes/constants/border.cpp"
#include "../../includes/helpers/border.cpp"

void gridLayoutComponent() { generateBorder(VERTICAL, "|", 17, 32, 8); }

#endif