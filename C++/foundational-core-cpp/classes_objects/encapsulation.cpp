#include <iostream> 
using namespace std;

/*
encapsulation means more than simply combining attributes and behavior together within a class;
it also means restricting access to the inner workings of that class.

											In summary the benefits of encapsulation are:
											- Control the way data is accessed or modified.
											- Code is more flexible and easy to change with new requirements.
											- Change one part of code without affecting other part of code.
*/

/*
													ACCESSING SPECIFIER TO PROTECT DATA 				

The three levels of access specifiers are public, protected, and private. 
*/

// CODE

// understand public class
class Person {
	public: 
	// name attribute can be accessed, modify from outside this class. 
	string name;
};


// understand private class
class BankAcc {
	public:
	void setName(string x){
		name = x;
	}
	void printName(){
		cout << "Owner of this accout is: "<< name << endl;
	}
	// this below function can be used to access acc. handler name
	string getName(){
		return name;
	}
	
	
	private:
	// somewhat predefined and important details
	string name;
	float balance;
	long int adharNum;
	
	protected:
	// extreamly protected details;
	string userName;
	string password;
};



int main(){
	Person person1;
	person1.name = "JAIMIN__CHOKHAWALA";
	cout << person1.name << endl;	
	person1.name = "HACKED";
	cout << person1.name << endl; // it is modified, SECURITY IS LESS HERE
	
	// WORKING WITH BankAcc class
	BankAcc clientIND_GJ_121;
	clientIND_GJ_121.setName("JAIMIN__C"); // sets; name == "JAIMIN__C"	
	clientIND_GJ_121.setName("JAIMIN__CHOKHAWALA"); // TRYING TO CHANGE IT
	clientIND_GJ_121.printName(); // it changed the owner using function, but doesn't allow me to see who is the owner
	cout << "ACC.HANDLER IS: " << clientIND_GJ_121.getName() << endl;
	
	
	
	return 0;
}