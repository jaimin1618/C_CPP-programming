#include <iostream>
using namespace std;

/*
PROBLEM WITH C/C++ functions;
you cannot return BIG OBJECTS using return... it is mean to return one object only
so we use reference to this, MASTERING IN THIS IS REQUIRED TO DO WORK WITH LARGE OBJECTS.

YOU CAN ALSO RETURN CONSTANT STRING OR OUTPUT, WHICH CANNOT BE CHANGED LATTER
*/
int func(int i) {
    // NORMAL FUNCTION WITH VALUE PASSING
    cout << "This is func()" << endl;
    return i * 2;
}

const string &func() {
    static string s = "This is static string.";
    cout << "This is \'const string &func()\'" << endl;
    return s;
}

void changeCase(char &c) {
    // POINTER TECHNIQUE IS IN C
    // REFERENCE TEHCNIQUE IS FOR C++, BETTER WAY TO DO..
    
    if (c >= 'A' && c <= 'Z') {
        c += 32;
    }else if (c >= 'a' && c <= 'z') {
        c -= 32;
    }else {
        // pass
    }
}


int main(){
    string msg = func(); // this reference will be given to msg;
    for (char c : msg) {
        changeCase(c);
        cout << c << ' ';
    }

    
    return 0;
}