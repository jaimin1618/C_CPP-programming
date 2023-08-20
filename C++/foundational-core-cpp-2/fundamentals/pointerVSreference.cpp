#include <iostream>
#include <string>
using namespace std;

// WE WILL USE pointer->c_str() from string.


void pointer(const string *sp) {
    // YOU CAN USE LOOP TO ITERATE OVER ALL ELEMENT
    cout << sp->c_str();
}

void reference(const string &sp) {
    // YOU CAN USE LOOP TO ITERATE OVER ALL ELEMENT
    cout << sp.c_str(); // sp is reference.
}



int main() {
    // USGIN POINTER, C language
    string name = "JAIMIN__CHOKHAWALA";
    pointer(&name);
    cout << endl;
    // USING REFERENCE, C++
    string scName= "jaimin__chokhawala";
    reference(scName);
    
    
    return 0;
}