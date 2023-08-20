#include <iostream>
using namespace std;

class MyClass {
	public:
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
	MyClass classObj;
	classObj.setName("OBJECT_1");
	cout << classObj.getName();
	
	
	return 0;
}