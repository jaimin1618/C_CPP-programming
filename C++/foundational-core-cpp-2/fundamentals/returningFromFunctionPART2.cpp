#include <iostream>
#include <string>
using namespace std;

int normalFunc(int n) {
    // n is copied
    cout << "I am normal." << endl;
    return n*n;
}

const string &bigObject() {
    // YOU CANNOT DO THIS WITHOUT USING static.
    // we need const because we have to use static which can change vals
    static string s = "This is big long string";
    return s;
}


int main() {
    // bigObject() function is returning reference to string, base[0];
    // using C++ string lib for c_str(); OR use loops
    string msg = bigObject();
    cout << msg.c_str(); // it is immutable due to const string
    // msg.c_str()[0]+=32; ERROR, you cannot change it // BTW strings are immutable in C++

    
    return 0;
}