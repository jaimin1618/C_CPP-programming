#include<iostream>
using namespace std;
// FUNCTOR IS CLLASS, WITH SOME BASIC OPERATOR OVERLOADINGS... adv topic.
/*
---------------------THIS IS DEMO OF WHAT IS CALLED FUNCTOR--------------------------
actually C++ STL provides a breif library of OVERLOADED operators that is called,
                                - FUNCTORS -
*/

template <typename T>
class Multiply {
    T var = 0;
    Multiply(); // NOT ALLOW TO USE DEFAULT CTOR;
public:
    Multiply(T var): var(var){}  // ctor
    void changeVar(T newVar) { var = newVar; }  // changes value of priavte variable
    T variableIs() { return var; } // returns private var
    T operator() (T var2) { return var * var2; } // returns multiplication
};


// main -----------------------------------------------------------
int main(int argc, char **argv) {
    // init with ctor
    Multiply<int> multiplier(10);  // DON'T FORGET <int> REMEMBER IT
    
    // getting who is multiplier
    cout << "multiplier is: " << multiplier.variableIs() << endl; // 10
    
    // multiplying 10 with multiplier.
    cout << "Now I am using () operator: var(10): " << multiplier(10) << endl; // 100
    cout << "multiplier is: " << multiplier.variableIs() << endl;
    
    // changing multiplier
    multiplier.changeVar(1000);
    cout << multiplier.variableIs() << endl;
    return 0;
}
//-----------------------------------------------------------------
