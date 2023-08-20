// WE WILL BE USING OUR FILE MYCLASS.CPP AND MYCLASS.H

#include <iostream>
#include "MyClass.h"
using namespace std;

/*
INTRO

Remember constructors? They're special member functions that are automatically called when an object is created.
Destructors are special functions, as well. They're called when an object is destroyed or deleted.

Objects are destroyed when they go out of scope, or whenever the delete expression is applied to a pointer directed at an object of a class.

Destructors can be very useful for releasing resources before coming out of the program. 
This can include closing files, releasing memory, and so on.
*/
/*
The name of a destructor will be exactly the same as the class, only prefixed with a tilde (~).
A destructor can't return a value or take any parameters.

when you see this ~(tilde), IT IS DESTRUCTOR
A destructor can't return a value or take any parameters.
*/

int main(){
	x`MyClass obj;
	
	
	
	return 0;
}