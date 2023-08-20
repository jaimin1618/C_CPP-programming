#include <iostream>
using namespace std;

/*
Class constructors are special member functions of a class. 
They are executed whenever new objects are created within that class.
The constructor's name is identical to that of the class. It has no return type, not even void.

Constructors can be very useful for setting initial values for certain member variables.
A default constructor has no parameters. However, when needed, parameters can be added to a constructor.
This makes it possible to assign an initial value to an object when it's created, as shown in the following example:
*/
class MyClass {
	public:
	// contructor
	MyClass(string nm, int x, float y){
		cout << "This will be printed everytime object is initialized." << endl;
		setName(nm); // calling method of function
		age = x;
		balance = y;
		
	}
	
	int age;
	float balance;
	
	void setName(string x){
		name = x;
	}
	string getName(){
		return name;
	}
	private:
	string name;
	
};

int main(){
	MyClass obj("OBJECT_1", 0, 0);  // init using constructor and args
	cout << obj.getName() << endl;
	MyClass newObj("JAIMIN", 20, 100000000);
	cout << newObj.getName() << " " << newObj.age << " " << newObj.balance << " " << endl;
	
	
	
	
	return 0;
}