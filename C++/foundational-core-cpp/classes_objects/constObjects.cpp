#include <iostream>
using namespace std;

// Working with const and object;
class Person {
	public:
	string name;
	int age;
	
	Person(string x, int y=18){
		name = x;
		age = y;
	}	
	
	// Making regualr function WHICH DOESN'T WORK WITH const OBJECT;
	void info(){
		cout << this->name << "'s age is about " << this->age << endl;
	}
	
	void constant_info() const {
		cout << "this object is constant that's why we need constant function to work with it." << endl;
	}	
};


int main(){
	const Person person("Jake");
	cout << person.name << " " << person.age << endl;
//	person.name = "JAIMIN";  ERROR becaue  it is const you can't change it
	
	// using regular function
//	person.info();  ERROR
	person.constant_info();
	
	
	
	return 0;
}