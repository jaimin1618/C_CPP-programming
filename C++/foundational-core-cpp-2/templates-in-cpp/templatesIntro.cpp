/*
C++ TEMPLATES ARE FOR GENERIC PROGRAMMING.
GENERIC PROGRAMMING ~ PROGRAM/FUNCTION/CLASS WHICH WORKS INDEPENDENT OF DATA TYPE.
exmple of GENERIC PROGRAMMING
template <class T>
T max(T a, T b) {
    return (a > b ? a : b);
}

WHAT'S THE CATCH, ACTUALLY C++ IS STRONGLY TYPE, WHICH MEANS SMALL TYPE ERROR OR ANYTHING WITH TYPE OF DATA CAN CAUSE ERROR
BUT C++ TEMPLATES PROVIDES US WAY TO DO THIS, WITHOUT ANY CONCERN

TEMPLATES ARE WIDELY USED IN C++ PROGRAMMING, THAT'S WHY THEY HAVE CREATED NEW BRANCH OF C++ PROGRAMMING CALLED "STL C++"
example use of template;
vector<string> nums = {"one", "two", "three"};
for (string s : nums) { cout << s << endl; }

USING TEMPLATES IN LARGE AMOUNT CAN SLOW DOWN YOUR CODE, HENCE IT IS NOT GOOD FOR TIME-COMPLEXITY.

TEMPLATES ARE USED FOR: IMPLEMENT CONTAINERS(PAIR, VECTOR, ARRAY, TUPLE ... DATA STRUCTURES) AND GENERIC PROGRAMMING.
*/
#include <iostream>
#include <string>
using namespace std;

// LET'S START USING THEM
// TEMPLATES CAN BE USED IN TWO WAYS, 1. TEMPLATES FUNCTIONS, 2. TEMPLATE CLASSES.


// declaration & defination of TEMPLATE FUNCTION
template <class T> // typename OR class both works same, NO DIFFERENCE.
T maxOf(T a, T b) {
    return (a > b ? a : b);
}

int main() {
    // CALLING TEMPLATE FUNCTION
    // SYNTAX: functionName<typeName> (args...). SEE below
    cout << "MAX OF: " << maxOf<int> (10, 7) << endl;
    
    // now we can use this template to compare double and floats
    cout << "MAX OF: " << maxOf<float> (1212.12, 4545.1) << endl;
    cout << "MAX OF: " << maxOf<double> (12121.21343545234414354, 325241.425543534342534314455) << endl;
    
    // function also work with string, not character because string class PROVIDES comparison >= ,  <= , ==;
    cout << "MAX OF: " << maxOf<string> ("JAIMIN", "JAKE") << endl;
    
    return 0;
}