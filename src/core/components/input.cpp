/**
 * @file /src/core/components/input.cpp
 * @brief A component that is used to create a complete input style with generic
 * datatype.
 *
 * */

#ifndef CPP_INPUT_COMPONENT
#define CPP_INPUT_COMPONENT

template <typename T> void input(std::string label, T *referenceValue) {
  T newValue;

  std::cout << label;
  std::cin >> newValue;

  *referenceValue = newValue;
}

#endif
