#include <iostream>
using namespace std;

// declaration
/*
WHY DECLARATION ???

Function declaration is required when you define a function in one source file and you call that function in another file.
In such case, you should declare the function at the top of the file calling the function.
*/
int printHello(int n); 

int main(){
	
	// calling
	printHello(5);
	cout << printHello(10) << endl << printHello(20) << endl;

	return 0;
}

// defination
int printHello(int x){
	cout << "Hello, C++ programming" << endl << "You entered :" << x << endl;
	return 200*x;
	
}
