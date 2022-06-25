#include <iostream>

using namespace std;

int main() {
  char user_input;
  char want_to_continue;
  
  
  cout << "n 1 ";
  cin >> user_input;
  
  cout << "\nn 2 ";
  cin >> want_to_continue;
   
  if(user_input && want_to_continue) {
    cout << "hey";    
  } else {
    cout << "zp";    
  }

  return 0;
}



// https://github.com/catchorg/Catch2/blob/devel/examples/010-TestCase.cpp
// https://github.com/eshiofune/100-days-of-code/blob/master/cpp/BlinkingLights/main.cpp