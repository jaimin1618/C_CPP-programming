#include <iostream>
using namespace std;

// SIMPLE DEFINATION OF ABSTRACT CLASS
// A CLASS CONTAINING PURE VIRTUAL FUNCTION: virtual void function() = 0
// IS CALLED ABSTRACT CLASS


class Enemy {
	public:
	virtual void attack() = 0;
};

class Monster {
	public:
	void attack(){
		cout << "Monster attack!" << endl;
	}
};

class Ninja {
	public:
	void attack(){
		cout << "Ninja attack!" << endl;
	}
};

/*
NOTE HERE Enemy class is called abstract class, this abstract class can give you
access to make virtual functions and properties and ...
but they won't allow you to make object of them

like, you can do this...
Monster m;  >> because Monster is not abstract class

but you cannot do this...
Enemy e;  >> Error, because Enemy is abstract class containing virtual function
and that's not possible

*/

