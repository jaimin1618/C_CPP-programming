#include <iostream>
using namespace std;

 /*
 auto | static |  register | extern --- four types of storage classes
 bydefautl -- auto
 it is used to change SCOPE, LIFE TIME and INITIAL VALUE OF VARIABLE
*/
int global = 10;

void test(){
	// WHAT YOU NEED TO KNOW US
	// any variable you declare inside {} has the scope only inside that
	// function/
	int var;
	cout << var << endl;
	var++;
	cout << var << endl;
}

int main(){
	extern int global_in_otherFile; // IT IS DECLARED LATER STILL COMPILER IS ABLE TO FIND IT
	// THIS HAPPENS BECAUSE OF EXTERN KW
	cout << global_in_otherFile << endl;
	
	global_in_otherFile = 10;
	cout << global_in_otherFile << endl;
	
	
	return 0;
}

int global_in_otherFile = 100000;