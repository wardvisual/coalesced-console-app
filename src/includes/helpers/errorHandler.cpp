#ifndef CPP_ERROR_HANDLER_HELPER
#define CPP_ERROR_HANDLER_HELPER

/**
 * It takes a string as an argument and prints it to the console
 *
 * @param message The message to be displayed.
 */
void errorHandler(std::string message) {
  cout << "\n--------------------";
  cout << "\n" << message;
  cout << "\n--------------------";
}

#endif