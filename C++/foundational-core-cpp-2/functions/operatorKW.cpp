#include <iostream>
#include <cstdio>
using namespace std;

/*
OPERATOR OVERLOADING METHODS: CLASS METHODS, FUNCTION METHODS
generally 2 + 2 = 4 >>> but when you work with classes where, 2 + 2 = 22 can be made using OPERATOR
here we will discuss operator overloading using functions.

operator (+ - % / *) does not work with built in data type
2 + 2 = 4, YOU CANNOT MAKE 2 + 2 = 2 - 2 = 0 >>> this is NOT SUPPORTED \
that's why you need user defined data type to work with operator overloading
*/
class A {
    // user defined datatype
    int a;
    public:
    A (const int &a) : a(a)  {}
    
    // METHOD
    const int &value() const {
        return a;
    }
};

int operator + (const A &lhs, const A &rhs) {
    puts("Operator + for class A, which means what to do when we add two objects of class a.\n");
    return lhs.value() + rhs.value() + 1;
}



int main() {
    A a(10);
    A b(20);
    cout << a + b << endl;

    return 0;
}