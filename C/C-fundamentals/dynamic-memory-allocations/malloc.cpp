#include <iostream>
#include <cstdlib> // for C++
/*
THERE THREE function for dynamic allocation
malloc(), calloc(), realloc()

This dynamic memory allcation is done in HEAP MEMORY OF RAM
so, ALLOCATION - MAINTENANCE - DELETE ALL ARE MANNUAL

For dynamic allocation of MEMORY we need pointer
*/
 
using namespace std;

int main(){
	int X[5];  // 20 BYTES ALLOCATED IN STACK ONLY DURING RUN TIME
	/*
	 syntax >> malloc(bytes)
	 malloc(100) > 100 char OR 25 int returns base address pointer
	 before using malloc() you need to typecast accoring to your needs.
	
	 Here in C++ we have "new" to use for dynamic allocation
	 instead of using malloc() and others
	*/
	
	// code for dynamic allocation
	int *ptr = NULL;
	int n;  // n = 10
	cout << "How many integers: ";
	cin >> n;
	
	// allocation
	ptr = (int *) malloc(n * sizeof(int));   // 40 bytes are needed
	
	// SOMETIME SYSTEM FAILS TO ALLOCATE MEMORY
	// IN THAT CASE IT WILL RETURN ... NULL
	if (ptr == NULL){
		cout << "Memory allocation failed, existing the program." << endl;
		exit(1);  // 1 means exiting with exception
	}
	
	for (int i = 0; i < n; i++){
		cout << "Enter your data: ";
		cin >> ptr[i];
	}
	
	
	cout << "Your data is: " << endl;
	for (int i = 0; i < n; i++){
		cout << ptr[i] << '\t';
	}
	
	// NOW WHAT !!! THIS IS MANNUAL MEMORY ALLOCATION IF YOU DON'T FREE UP
	// IT WILL REMIAN THERE AND  OVERLOAD THE PROGRAMME
	// SO USE FREE()
	// free(pointer) is usually done after end of programme
	
	free(ptr);
	
	
	
	
	
	return 0;
}