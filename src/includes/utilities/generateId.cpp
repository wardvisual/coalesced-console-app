#include <ctime>

#ifndef CPP_GENERATE_ID
#define CPP_GENERATE_ID

int generateId() {
  time_t seconds = time(0);

  return seconds;
}

#endif