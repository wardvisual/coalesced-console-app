/**
 * @file /src/core/apps/midterm/functions/heading.cpp
 * @brief A helper function
 *
 * */

/* A preprocessor directive that prevents the file from being included more than
  once. */
#ifndef CPP_MIDTERM_HEADIN
#define CPP_MIDTERM_HEADIN

/* Constants */
#include "../../../../../includes/constants/alignment.cpp"
#include "../../../../../includes/constants/color.cpp"

/* Components */
#include "../../../../components/text.cpp"

/**
 * It displays the heading for the midterm.
 */
void displayCalculateGPAHeading() {
  /* It's displaying the instruction for the user. */
  text("Instruction: [General Point Average (GPA) Calculator]", TEXT_BLUE,
       ALIGNMENTX38, ALIGNMENTY10);
  text("Write a program that will compute the general point average of a BSCS "
       "student to determine",
       TEXT_WHITE, ALIGNMENTX38, ALIGNMENTY12);
  text("if he/she is qualified to be an honor student.", TEXT_WHITE,
       ALIGNMENTX38, ALIGNMENTY13);

  text("Requirement: ", TEXT_BLUE, ALIGNMENTX38, ALIGNMENTY15);
  text("A BSCS student must complete all of the subject given for a semester."
       "subjects are GEMATHW",
       TEXT_WHITE, ALIGNMENTX38, ALIGNMENTY17);
  text("GELIFEWR,GEARTAPP,GEKOMFIL, NTROCOMP, "
       "FPROGLEC,FPROGLAB,GEPEMOVE,NSTPROG1."
       "All subjects is a ",
       TEXT_WHITE, ALIGNMENTX38, ALIGNMENTY18);
  text("3-unit course except GEPEMOVE(2 units). A student must have a grade "
       "not lower than 2.25",
       TEXT_WHITE, ALIGNMENTX38, ALIGNMENTY19);
  text("to be consider as academic honor candidate. A grade must be ranging "
       "from 1.0 to 2.25.",
       TEXT_WHITE, ALIGNMENTX38, ALIGNMENTY20);
  text("No dropped or inc grade. ", TEXT_WHITE, ALIGNMENTX38, ALIGNMENTY21);
}

#endif