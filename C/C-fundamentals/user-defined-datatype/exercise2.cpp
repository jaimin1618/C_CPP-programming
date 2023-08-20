#include <iostream>
using namespace std;

typedef struct {
    string name;
    int roll;
    float phy, chem, maths;
} Student;

void inputStudent(Student *sp){
    cout << "Enter name: ";
    getline(cin, sp->name);
    cout << "Enter roll: ";
    cin >> sp->roll;
    cout << "Phy: ";
    cin >> sp->phy;
    cout << "Chemistry: ";
    cin >> sp->chem;
    cout << "Mahts: ";
    cin >> sp->maths;
}

char getGrade(Student s){
    
    int avg = (s.phy + s.chem + s.maths)/3;
    char grade;
    if (avg >= 80 ){
        grade = 'A';
    }else if (avg >= 60 & avg < 80){
        grade = 'B';
    }else if (avg < 60 && avg >= 35){
        grade = 'C';
    } else {
        grade = 'F';
    }
    
    return grade;
    
}

void printStudent(Student s){
    cout << "----------STUDENT EXAM RESULT----------\n";
    cout << "Name: " << s.name << endl;
    cout << "Roll number: " << s.roll << endl;
    cout << "Physics: " << s.phy << endl;
    cout << "Chemisty: " << s.chem << endl;
    cout << "Maths: " << s.maths << endl;
    cout << "Grade: " << getGrade(s) << endl;
    
    if (getGrade(s) == 'F'){
        cout << "You have failed, Try again." << endl;
    }
}



int main(){
    Student s;
    Student *sp;
    
    sp = &s;
    inputStudent(sp);
    getGrade(s);
    printStudent(s);

    return 0;
}