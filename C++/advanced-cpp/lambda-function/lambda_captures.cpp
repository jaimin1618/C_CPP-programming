#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;

// main -----------------------------------------------------------
int main(int argc, char **argv) {
    char s[] = "this is normal string";
    char str[100]{0};
    char prev = 0;
    
    // ----------------------------- IMPORATING LOCAL SCOPE REFERENCE -------------------
    transform(s, s + strlen(s), str, [&prev](const char& c) -> char {
        // process
        const char r = (prev == 0 || prev == ' ') ? toupper(c) : tolower(c);
        prev = c;
        // returned value is stored inside "str - container"
        return r;
    });
    cout << str << endl;
    
    // ------------------------------- USING LOCAL SCOPE VARS ----------------------------
    
    // WE CAN USE LOCAL SCOPE VARIABLE INSIDE lambda using [=]; see
    // you have to specifically say that you will change this VARIABLE by using "mutable ->"
    prev = 0;
    transform(s, s + strlen(s), str, [=](const char& c) mutable -> char {
        // process
        const char r = (prev == 0 || prev == ' ') ? toupper(c) : tolower(c);
        prev = c;
        // returned value is stored inside "str - container"
        return r;
    });
    
    cout << str << endl;
    
    // -SPECIFY WHICH YOU DON'T WANT TO CAPTURE FROM GLOBAL SCOPE AND ONLY WANT REFERENCE---
    
    prev = 0;
    // here prev is called by REFERENCE but other local vars will be called by REFERENCE
    transform(s, s + strlen(s), str, [=, &prev](const char& c) -> char {
        // process
        const char r = (prev == 0 || prev == ' ') ? toupper(c) : tolower(c);
        prev = c;
        // returned value is stored inside "str - container"
        return r;
    });
    
    cout << str << endl;


    return 0;
}
//-----------------------------------------------------------------
