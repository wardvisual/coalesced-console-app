#include <iomanip>
#include <iostream>

#define MAX_GRADES_LENGTH 11
#define MAX_SUBJECT_LENGTH 9
#define MAX_GRADE 2.25
#define HORIZONTAL "====================================================="

using namespace std;

void getUserDetails();
bool isContinues();
void checkAndValidateGradeResult(float generalPointAverage);
string lowerCaseString(string str);

int main() {
  string userInput;
  float units = 0;
  float generalPointAverage = 0;
  float sumOfGrade = 0;
  float finalGrades[MAX_SUBJECT_LENGTH];
  bool isWhileLoopContinues = false, isGradeDoneInserting = false;
  string subjects[MAX_SUBJECT_LENGTH] = {"GEMATHW",  "GELIFEWR", "GEARTAPP",
                                         "GEKOMFIL", "NTROCOMP", "FPROGLEC",
                                         "FPROGLAB", "GEPEMOVE", "NSTPROG1"};

  /* Just a welcome message. */
  cout << HORIZONTAL;
  cout << "\nWelcome pre para maangas\n";
  cout << HORIZONTAL << endl;

  do {
    getUserDetails();

    cout << "\nEnter grades in each subject\n" << endl;

    for (int i = 0; i < MAX_SUBJECT_LENGTH; i++) {
      cout << subjects[i] << ": ";
      cin >> userInput;

      if (lowerCaseString(userInput) == "drp" ||
          lowerCaseString(userInput) == "inc") {
        cout << "Remarks : DENIED" << endl;

        i = MAX_SUBJECT_LENGTH + i; // stops the for loop

        if (isContinues()) {
          isWhileLoopContinues = true;
        } else {
          isWhileLoopContinues = false;
        }

      } else if (userInput == "1.00" || userInput == "1.25" ||
                 userInput == "1.50" || userInput == "1.75" ||
                 userInput == "2.00" || userInput == "2.25" ||
                 userInput == "2.50" || userInput == "2.75" ||
                 userInput == "3.00" || userInput == "4.00" ||
                 userInput == "5.00") {

        float floatedGrade = stof(userInput);

        if (floatedGrade > MAX_GRADE) {
          cout << "Remarks : DENIED" << endl;
          if (isContinues()) {
            isWhileLoopContinues = true;
          } else {
            isWhileLoopContinues = false;
          }
        } else {
          if (i == MAX_SUBJECT_LENGTH - 1)
            isGradeDoneInserting = true;

          finalGrades[i] = floatedGrade;
        }

      } else {
        cout << "\nInvalid input. Please try again." << endl;

        i = MAX_SUBJECT_LENGTH + i; // stops the for loop

        if (isContinues()) {
          isWhileLoopContinues = true;
        } else {
          isWhileLoopContinues = false;
        }
      }
    }

    if (isGradeDoneInserting == true) {
      int threeUnit = 3, twoUnit = 2, oneUnit = 1;

      /* Calculating the total of inputed grades */
      for (int x = 0; x < MAX_SUBJECT_LENGTH; x++) {
        if (subjects[x] == "GEPEMOVE") {
          sumOfGrade += finalGrades[x] * threeUnit;
          units += threeUnit;
        } else {
          sumOfGrade += finalGrades[x] * twoUnit;
          units += twoUnit;
        }
      }

      /* Calculating the average of the grades. */
      generalPointAverage = sumOfGrade / units;

      checkAndValidateGradeResult(generalPointAverage); // validate the result

      if (isContinues()) {
        isWhileLoopContinues = true;
      } else {
        isWhileLoopContinues = false;
      }
    }

  } while (isWhileLoopContinues == true);

  cout << "\nThank you for using the program!";

  return 0;
}

void getUserDetails() {
  string name, course;

  cout << "\n";
  cout << "Please Enter Your Name: ";
  cin >> name;

  cout << "Please Enter Your Course: ";
  cin >> course;
}

bool isContinues() {
  bool isContinues = false;
  char isYes;

  cout << "\nDo you want to continue? [Y/N]: ";
  cin >> isYes;

  if (tolower(isYes) == 'y') {
    cout << "\nWelcome again! \n" << endl;
    isContinues = true;
  } else
    isContinues = false;

  return isContinues;
}

void checkAndValidateGradeResult(float generalPointAverage) {
  string remarks;

  if (generalPointAverage > MAX_GRADE) {
    remarks = "DENIED";
  } else {
    remarks = "ACCEPTED";
  }

  cout << endl << endl << HORIZONTAL << endl;
  cout << "Your average is " << fixed << setprecision(2) << generalPointAverage
       << endl;
  cout << "Remarks : " << remarks << endl;

  if (generalPointAverage > MAX_GRADE) {
    cout << "\nSorry! But, you are not qualified to be an honor student";
  } else {
    cout << "\nCongrats! You are qualified to be an honor student";
  }

  generalPointAverage = 0;

  cout << endl << HORIZONTAL << endl;
}

string lowerCaseString(string str) {
  int counter = 0;

  while (counter < str.length()) {
    if (isupper(str[counter])) {
      str[counter] = tolower(str[counter]);
    }

    counter++;
  }

  return str;
}