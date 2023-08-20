#include <iostream> 
using namespace std;

/*
A derived class inherits all base class methods with the following exceptions:
- Constructors, destructors
- Overloaded operators
- The friend functions
*/

class Mother {
	public:
	Mother(){};
	void say(){
		cout << "Hi!!" << endl;
	}	
};

// class derivedClass : public baseClass 
class Daughter : public Mother {
	public:
	Daughter(){
		// ctor
	};	
};

int main(){
	
	// We have inherited say() function in daughter class
	Daughter jessica;
	jessica.say();
	
	
	return 0;
}