#include <iostream>
using namespace std;

// Making pure virtual function
class Enemy {
	public:
	virtual void attack() = 0;
};

class Ninja {
	public:
	void attack(){
		cout << "Ninja ! attack" << endl;
	}	
};

class Monster {
	public:
	void attack(){
		cout << "Monster ! attack" << endl;
	}
};


int main(){
	Monster m;
	Ninja n;
	
	m.attack();
	n.attack();
	
	
	
	return 0;
}