/**
 * @file /src/core/apps/midterm/functions/computeGradePointAverage.cpp
 * @brief A helper function
 *
 * */

/* A preprocessor directive that prevents the file from being included more than
  once. */
#ifndef CPP_CALCULATE_GPA
#define CPP_CALCULATE_GPA

/* Constants */
#include "../../../../../includes/constants/alignment.cpp"
#include "../../../../../includes/constants/validation.cpp"

/* Components */
#include "../../../../components/input.cpp"
#include "../../../../components/text.cpp"
#include "../../../../components/view.cpp"

/* Constants */
#define THREE_UNIT 3
#define TWO_UNIT 2

/**
 * It computes the grade point average of a student
 *
 * @param subjects A string of subjects.
 * @param grades An array of grades.
 * @param maxGradeLength The maximum number of grades that can be entered.
 *
 * @return The grade point average of the student.
 */
float computeGradePointAverage(std::string subjects[], float grades[],
                               int maxGradeLength) {
  std::string twoUnitSubject = "GEPEMOVE";

  float sumOfGrades = 0, gradePointAverage = 0;
  int totalUnits;

  for (int i = 0; i < maxGradeLength; i++) {
    if (subjects[i] == twoUnitSubject) {
      sumOfGrades += (grades[i] * TWO_UNIT);
      totalUnits += TWO_UNIT;
    } else {
      sumOfGrades += (grades[i] * THREE_UNIT);
      totalUnits += THREE_UNIT;
    }
  }

  gradePointAverage = sumOfGrades / totalUnits;

  return gradePointAverage;
}

#endif