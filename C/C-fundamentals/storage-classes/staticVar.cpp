#include <iostream>
using namespace std;

void testAuto(){
	int P;   // auto is default and  P = garbage
	cout << P << endl;
	P++;
	cout << P << endl;
}

void testStatic(){
	static int k; // by default k = 0  at init
	cout << k << endl;
	k++;
	cout << k << endl;
}

int main(){
	testAuto();
	testAuto();  // it prints same thing again.

	// STATIC VARIABLE MEANS LIFE OF THE VARIABLE = LIFE OF THE PROGRAM
	// IT WILL ONLY DEALLOCATED WHEN PROGRAMME ENDS
	testStatic(); // 0 and 1 
	
	// now if you use test again it will use your k var as k = 1; and print 1, 2
	// THIS PHENOMENA doesn't happen regularly
	testStatic(); // 1, 2 
	
	// STATIC VARIABLES REMAINS ALIVE UNTIL PROGRAM SHUTS DOWN
	
	
	return 0;
}