#include <iostream>
using namespace std;

void valuePassing(int x){
	// this won't assign x = 100, rather it will make copy of it 
	x  = 100;
}
void referencePassing(int *x){
	// this will actually change value of x.
	// this will pass address of the variable which say to do action here on that address
	*x = 100;
}


int main(){
	/*
	PASSING VALUE & PASSING REFERENCE TWO WAY TO PASS ARGUMENTS IN FUNCTION
	By default, arguments in C++ are passed by value.
	When passed by value, a copy of the argument is passed to the function.
	*/
	
	/*
	NOTE, THIS IS THE CONCEPT WHERE YOU GET ERROR, WHILE WORKING WITH FUNCTIONS... 
	in swap(int a, int b)  >>> this function only makes new copy of a and b >>> then use it in function >> return NEW answer.
	in swap(int *a, int *b) >>> this function don't make copy of a, b. >>> it use reference(address) of a & b and apply process over there.
	*/
	
	/*
	SUMMARY,
	
	Passing by value: 
	This method copies the actual value of an argument into the formal parameter of the function. 
	In this case, changes made to the parameter inside the function have no effect on the argument.
	IN SHORT: NO CHANGE IN PASSING PARAMETERS

	Passing by reference: 
	This method copies the reference of an argument into the formal parameter. 
	Inside the function, the reference is used to access the actual argument used in the call. 
	So, changes made to the parameter also affect the argument.
	IN SHORT: PASSING PARAMETER WILL BE CHANGED ACCORDING TO PROCESS INSIDE FUNCTION
	*/
	
	// SEE WHAT I WROTE ...
	int x = 10;
	valuePassing(x);
	cout << "VALUE PASSING FUNCTION: "<< x << endl;
	
	referencePassing(&x); // don't forget to use & - assignment operator while passng by referecne
	cout << "REFERENCE PASSING FUNCTION: "<< x << endl;
	
	
	
	return 0;
}