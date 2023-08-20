#include <iostream>
using namespace std;
// NOTE: CLASS IS USED TO CREATE ADT OR USER DEFINED DATATYPES

// classes are defined outside the main function, just like functions in C++
// declaring class
class bankAccount {
	// define properties/attributres and methods/functions here
	// we have private & public for accessing class FOR SECURITY REASONS -- this is called "Access specifier"
	private:
	void sayHi(){
		cout << "Hello, from kotal Mahindra bank" << endl;
	}
	public:
	void sayHello(){
		cout << "This is public hello, visible to all and everyone." << endl;
	}
};



int main(){
	// initializing object
	bankAccount kotak;
	kotak.sayHello();
	
	
	
	
	
	return 0;
}