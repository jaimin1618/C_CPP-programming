#include <iostream>
using namespace std;

int main(){
	
	int x, y;
	cout << "Enter your first number: ";
	cin >> x;
	cout << "Enter your second number: ";
	cin >> y;
	try {
		if (y == 0){
			throw 0;
		}
	}
	// (...) ellipsis is CATCHING ANY DATATYPE THROWN by try
	// NOW WE CAN CATCH ANYTHING.
	catch (...){
		cout << "Cannot divide by Zero." << endl;
	}
	cout << endl << x / y << endl;
	
	
	
	return 0;
}