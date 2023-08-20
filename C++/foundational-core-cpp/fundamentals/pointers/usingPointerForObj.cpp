#include <iostream>
using namespace std;

class Person {
	public:
	string name;
	int age;
	float balance;
	
	void info(){
		cout << this->name << ' ' << this->age << ' ' << this->balance << endl;
	}
};

int main(){
	Person john;
	Person *ptr = &john;
	ptr->name = "JOHN DOE";
	ptr->age = 20;
	ptr->balance = 10000000;
	ptr->info();
	
	
	
	return 0;
}