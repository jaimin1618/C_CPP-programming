#include <iostream>
using namespace std;

int main(){
	// POINTER TO POINTER IS DENOTED BY **PTR;
	int *p = NULL;
	int var = 10;
	p = &var; // pointer to variable
	int **k = NULL;
	k = &p;  // pointer to pointer p
	
	// NOW USING k we can access p thus we can access var.
	
	/*
		ACCESSING NESTED POINTER 
		
		if *k = p -> accessing first address using k
		if **k thus it is var. -> accessing variables pointed by pointer p using k;	
	
	*/
	
	cout << "Address of k: " << k << endl;
	cout << "Pointer values where k is pointing: " << *(*k) << endl;
	cout << "var value by using pointer k: " << **k << endl;
	
	
	cout << "SIZE OF MY OS IS: " << sizeof(p) << endl;
	
	
	
	return 0;
}