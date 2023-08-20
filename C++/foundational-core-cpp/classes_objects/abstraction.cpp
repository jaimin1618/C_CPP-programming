/* 
Data abstraction is the concept of providing only essential information to the outside world.
It's a process of representing essential features without including implementation details.
 
Abstration is fundamental building block OOP,
Abstraction acts as a foundation for the other object orientation fundamentals, 
such as inheritance and polymorphism.
These will be discussed later in the course.
*/

#include <iostream>
using namespace std;

class person {
	// what you did here is called DATA-ABSTRACTION simple
	public:
	string name;
	int age;
	void info(){
		cout << this->name << " has age around " << this->age << endl;
	}
	
};

int main(){
	person jaimin;
	jaimin.name = "JAIMIN";
	jaimin.age = 20;
	jaimin.info();
	return 0;
}
