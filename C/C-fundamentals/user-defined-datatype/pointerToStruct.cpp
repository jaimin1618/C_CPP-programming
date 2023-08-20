#include <iostream>
using namespace std;

typedef struct {
    int rollNum;
    string name;
} Student;

int main(){
    Student S;
    Student *Sp;
    
    Sp = &S;
    Sp->rollNum = 10;
    Sp->name = "JAIMIN__CHOKHAWALA";
    
     cout << S.rollNum << endl;
     cout << S.name << endl;
     cout << sizeof(Sp);
    

    
    return 0;
}