#include <iostream>
using namespace std;

void doublePointers() {
	
	int X = 10;
	int *p; // single pointer
	int **k; // pointer to pointer
	p = &X;  // controlling X using p;
	k = &p; // controlling X & p both using k;
	
	cout << X << ' ' << *p << ' ' << *k << ' ' << **k << endl;
 }
 

int main(){
	int X = 100;
	cout << &X << endl; // 0x61fe1c
	
	int z = 50;
	int *p = NULL;
	p = &z;
	*p = 50 + 12;
	cout << z << ' ' << p << ' ' << *p <<  endl;
	
	// double pointer in C++
	doublePointers();
	
	return 0;
}