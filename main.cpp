
/**
 * It takes a function pointer as an argument and calls it
 * 
 * @param render_app This is the function that will be called inside the show_border function.
 */
 /**
  * @file main.cpp
  * @brief This is the entry point of the application.
  */

 #include <iostream>

 /* Custom header files */
 #include "includes/apply_color.h"

 using namespace std;

 void show_border(void (*render_app)()) {
   apply_color(WHITE);
   cout << "\n-------------------------------------------------\n";
   render_app();
   apply_color(WHITE);
   cout << "\n-------------------------------------------------\n";
 }

 void render_app() {
   apply_color(BLUE);
   cout << "Lazada: Order niyo Sir nahulog sa kanal HAHAHAHA";
   apply_color(GREEN);
   cout << "\nCustomer: Luh?";
 }

 int main() {

   show_border(&render_app);

   return 0;
 }

// https://github.com/catchorg/Catch2/blob/devel/examples/010-TestCase.cpp
// https://github.com/eshiofune/100-days-of-code/blob/master/cpp/BlinkingLights/main.cpp