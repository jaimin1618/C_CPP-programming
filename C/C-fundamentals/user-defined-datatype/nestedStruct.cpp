#include <iostream>
using namespace std;

typedef struct {
    int day, month, year;
} Date;

typedef struct {
    int no;
    string name;
    double basic;
    Date dob;  // this is USER DEFINED DATATYPE Date and we are using it;
} Employee;

int main(){
    
    Employee e;
    e.name = "Jaimin";
    e.dob.day = 30;
    e.dob.month = 5;
    e.dob.year = 2002;
    
    cout << e.name << "'s birthday is on: " << e.dob.day << '|' << e.dob.month <<'|' << e.dob.year << endl;
    
}