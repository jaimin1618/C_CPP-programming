#include <iostream>
using namespace std;
/*
UNION ARE USED TO SAVE MEMORY IN  PROGRME
WHAT HAPPENS ACTUALLY
lets say there is hotel, where you have option of getting PIZZA, PASTA, BURGER
but you can only get on of three, if you choose one you loose other two.

now that's how unions work, if you want to use only one of those data given by
user and you don't want other empay data sets, so use unions
*/
typedef union {
    int EMP_ID;
    char letter;
    float salary;
} Info;

typedef struct {
    int ID;
    string fullName;
    Info info;
} Employee;



int main(){
    
    Employee E;
    
    E.ID = 123211135;
    E.fullName = "JOHN DOE";
    // YOU CAN ONLY USE ONE OF THESE UNION AT ONE TIME
    E.info.EMP_ID = 717;
    E.info.letter = 'J';
    E.info.salary = 12345635;
    
    cout << E.fullName << " has " << E.info.salary << "$ per annum." << endl;
    // next line will print GARBAGE
    cout << E.info.EMP_ID << ' ' << E.info.letter << ' ' << E.info.salary << endl;
    
    return 0;
}