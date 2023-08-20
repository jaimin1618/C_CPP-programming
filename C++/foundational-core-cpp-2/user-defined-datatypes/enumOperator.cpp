#include <iostream>
using namespace std;

// IF YOU HAVE LIST TYPE DATA STRUCTURE AND YOU NEED TO INDEX THEM FROM ZERO
typedef enum {
    SUN, MON, TUE, WED, THUR, FRI, SAT
//   0    1    2    3     4    5    6
} days_of_week;

typedef enum {
    // BOOL USERDEFINED
    false, true
//     0    1
} boolean;

int main() {
    days_of_week day = SUN;  // day set to SUN;
    
    if (day == SUN || day == SAT) {
        cout << "IT IS HOLIDAY\n";
    }else {
        cout << "WORKING DAY\n"
    }
    
    
    
    
    return 0;
}