#include <iostream>
using namespace std;

int main(){
	void *vp = NULL;
	int x = 100;
	vp = &x;
	// cout << *vp << endl; CANNOT DO THIS
	cout << *((int *)vp) << endl; // apply typecasting to get values
	
	
	return 0;
}