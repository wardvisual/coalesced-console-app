#include <iostream>

using namespace std;

/**
 * @name app
 * @brief description about the structure
 * @property {is_readu, render}
 */
struct {
  bool is_ready() { return true; }
  void render() {  }
} app;

/**
 * @brief description about the function
 * @param parameter_name
 * @param parameter_name
 * @returns return data type
 */
void render_application() {
  if (app.is_ready()) {
    app.render();
  }
}


int main() {
  
  render_application();
  
  return 0;
}