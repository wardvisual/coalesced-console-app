/**
 * @file /src/core/apps/midterm/index.cpp
 * @brief Midterm app
 *
 * */

/* A preprocessor directive that prevents the file from being included more than
  once. */
#ifndef CPP_MIDTERM
#define CPP_MIDTERM

/* Core Application */
#include "calculateGPA/index.cpp"

/**
 * Midterm :: displayMidterm()
 *
 * Instruction:
 *     Write a program that will compute the general point average of a BSCS
    student to determine if he/she is qualified to be an honor student.
 *
  Requirement:
  A BSCS student must complete all of the subject given for a semester. The
  subjects are GEMATHW,GELIFEWR,GEARTAPP,GEKOMFIL, NTROCOMP,FP
  ROGLEC,FPROGLAB,GEPEMOVE,NSTPROG1. All subjects is a 3-unit course except
  GEPEMOVE(2 units). A student must have a grade not lower than 2.25 to be
  consider as academic honor candidate. A grade must be ranging from 1.0
 to 2.25. No dropped or inc grade.

  Specifications:
  There must be your own exception handling to perform when a user enters a
 grade that is out of range. It signifies that the student will not be allowed
 to be a candidate. If the inputs are accepted based on the given requirements,
 compute the student average grade , and an “ACCEPTED” remark. If not, the
 remark will be “DENIED”. To compute for the GPA, get the sum of the products of
 the grade and the corresponding number of units per course. The sum must be
 divided to the total number of units earned
 *
 */
void displayMidterm() { calculateGPA(); }

#endif
