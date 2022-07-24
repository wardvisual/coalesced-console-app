/**
 * @file /src/includes/mockData/students.cpp
 * @brief Mock Data
 */

/* A preprocessor directive that prevents the file from being included more than
  once. */
#ifndef CPP_MOCK_DATA_STUDENT
#define CPP_MOCK_DATA_STUDENT

/* Including the library. */
#include <vector>

namespace mockData {
std::vector<std::string> students = {"Edward\n",  "Mark Lim\n", "Fletcher\n",
                                     "Khenjie\n", "Angelika\n", "Williane\n"};
} // namespace mockData

#endif