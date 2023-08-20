#include <iostream>
using namespace std;

int main(){
	int *ptr = NULL; // doing this is good practice, int *ptr; is NOT GOOD.
	ptr = new int[20];   // request memory;
	for (int i=0; i<=30; i++){
		*(ptr+i) = i;
	}
	for (int i=0; i<=30; i++){
		// this is dynamic array, even after having 20 allocation it can store 30 elements
		cout << *(ptr + i) << endl;
	}
	
	delete [] ptr;  // delete array pointed by ptr
	
	return 0;
}