#include<iostream>
using namespace std;

typedef enum {
    // SO THAT WE CAN USE NAMES INSTEAS OF VALUES LIKE 0, 1, 2,...
    // now we can easily process or compare days
    //   0    1    2     3     4      5   6
    SUN, MON, TUES, WED, THURS, FRI, SAT

} days_of_week ;

// creating bool type
typedef enum {
    False, True
} boolean;

boolean isEven(int n){
    if (n % 2 == 0) {
        return True;
    }else {
        return False;
    }
}


int main(){
    days_of_week day = MON;
    
    if (day == SAT || day == SUN){
        cout << "It is holiday" << endl;
    }else {
        cout << "It is not holiday" << endl;
    }
    
    cout  << "HOW DAYS ARE INDEX BY DEFAULT: " << endl;
    cout << SAT << ' ' << SUN<< ' ' << MON << endl;
    
    cout << isEven(1) << isEven(16) << isEven(17) << endl;
    
    
    
    return 0;
}