#include <iostream>
using namespace std;

int main(){
	int x = 5;
	int *ip = &x;
	x += 5;
	cout << *ip << ' ' <<  x << endl; // if your variable changes then your pointers value will change
	
	
	return 0;
}