#include <iostream>
using namespace std;

typedef struct {
    int roll;
    string name;
} Student;


void inputStudent(Student *sp){
    /*
    WE USED Student *sp for WRITE/EXECUTE/CHANGE our input data
    if you don't do that then, you can only READ IT by using
    Student sp > here we haven't used pointer because we can copy
    and print data...
    */
    
    
    cout << "Enter your roll: ";
    cin >> sp->roll;
    cout << "Name: ";
    cin >> sp->name;
}

void printStudent(Student S){
    /*
    WHAT THIS function passing params do is MAKE COPY OF PASSING VALUE
    THEY do not change ACTUAL DATA of that address
    */
    
    cout << "Student " << S.name << " Roll number is " << S.roll << endl;
}

int main(){
    Student S1;
    inputStudent(&S1);
    printStudent(S1);

    return 0;
}