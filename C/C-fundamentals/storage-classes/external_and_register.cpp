#include <iostream>
using namespace std;

int globalVar;  // global and accessible to all function

void test(){
	extern int anotherGlobal;
	cout << globalVar << endl;
	globalVar = 100;
	cout << anotherGlobal << endl;
}

int anotherGlobal; // this creates error because compiler has to use it in test();
	// that's why we use extern KW

int main(){
	// PROGRAME EXECUTION STARTS FROM HERE.	
	cout << globalVar << endl;
	globalVar = 20;
	test();
	cout << globalVar << endl; 
	
	// Register is  used to register var directly into REGISTER of CPU rather than using 
	// RAM/stack
	//	just use register before declaring var THAT'S  IT	
}