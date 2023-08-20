#include <iostream>
using namespace std;

class Enemy {
	public:
	// when you write virtual, it says use the ATTACK() function of derived class
	// this is now use what you create here, IT WILL USE WHAT IS HAS IN Ninja and Monster
	virtual void attack(){
		// Nothing here
		/*
		
	Do this if you want to say that derived class should define their own attack()
	function
	IT IS CALLED PURE VIRTUAL FUNCTION
	class Enemy {
 		public:
  		virtual void attack() = 0;
	}; 
		
		
		*/
		
	}	
};

class Ninja : public Enemy {
	public:
	void attack(){
		cout << "Ninja ! " << endl;
	}
};

class Monster : public Enemy {
	public:
	void attack(){
		cout << "Monster ! " << endl;
	}
};


int main(){
	Ninja n;
	Monster m;
	
	Enemy *E1 = &n;
	Enemy *E2 = &m;
	
	E1->attack(); // ninja uses it's attack
	E2->attack(); // monster uses  his attack
	
	
	
	
	
	return 0;
}