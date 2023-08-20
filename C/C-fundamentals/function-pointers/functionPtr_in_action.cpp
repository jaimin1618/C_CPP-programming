#include<iostream>
using namespace std;

/*
void changeToUpper(char str[]) {
    
    int i = 0;
    while (str[i]) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] -= 32;
        }
        ++i;
    }
    
}

void changeToLower(char str[]) {
    
    int i = 0;
    while (str[i]) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] += 32;
        }
        ++i;
    }
    
}
*/

char toUpperCase(char ch) {
    if (ch >= 'a' && ch <= 'z') {
        return ch - 32;
    }else {
        return ch;
    }
}

char toLowerCase(char ch) {
    if (ch >= 'A' && ch <= 'Z') {
        return ch + 32;
    }else {
        return ch;
    }
}

void changCase(char str[], char (*cfp)(char)) {
    int i = 0;
    while (str[i]) {
        str[i] = cfp(str[i]); // PASSING CHARS TO FUNCTION WE PROVIDED
        ++i;
    }
}

// main -----------------------------------------------------------
int main(int argc, char **argv) {
    
    char name[] = "JaiMIN__chOKHAWala";
    // changeToUpper(name);
    cout << name << endl;
    // changeToLower(name);
    cout << name << endl;
    // FOR ONE SINGLE SAME TASK WE HAD TO USE TWO FUNCTION TO
    // REDUCE THIS WE CAN USE FUNCTION POINTER
    // IF CHECKING IN BOTH CADE IS DIFFERENT, ALL OTHER THINGS ARE SAME
    
    // MAKING ONE FUNCTION TO DO TWO SIMILAR TASKS
    changCase(name, toUpperCase);
    cout << name << endl;
    changCase(name, toLowerCase);
    cout << name << endl;
    
    return 0;
}
//-----------------------------------------------------------------
