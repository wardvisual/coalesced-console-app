#include <ctime>

using namespace std;

int generateId() {
    time_t seconds = time(0);
    
    return seconds;   
}