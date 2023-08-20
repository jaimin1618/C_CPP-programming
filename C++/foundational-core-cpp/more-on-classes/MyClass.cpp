/*
The implementation of the class and its methods go into the source file (.cpp).
Currently it includes just an empty constructor.

Since destructors can't take parameters, they also can't be overloaded.
Each class will have just one destructor.
*/
/*

The scope resolution operator is used to define a particular
class' member functions, which have already been declared. 
Remember that we defined the constructor prototype in the header file.
:: - this is called scope resolution operator, and it is for contructor defination

So, basically, MyClass::MyClass() refers to the MyClass() member function - or, in this case, constructor - of the MyClass class.

*/

#include <iostream>
#include "MyClass.h"
using namespace std;


MyClass::MyClass(){
	// contructor code
	cout << "CONSTRUCTOR" << endl;
}

MyClass::~MyClass(){
	// destructor code
	cout << "DESTRUCTOR" << endl;
}

