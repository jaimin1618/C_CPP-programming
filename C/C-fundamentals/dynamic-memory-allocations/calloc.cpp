#include <iostream>
#include <cstdlib> // malloc, calloc, free, realloc
using namespace std;

/*
malloc() and calloc() both can be used for dyanamic allocation.
difference is: malloc() contains GARBAGE VALUES, on initialization of malloc()
it doesn't care if there is GARBAGE VALS in allocated continous memory

BUT...
calloc() will initialize all allocated memory with ZERO No garage vals if you are 
using calloc()

calloc() syntax >> calloc(number of ele, Size of each element)

of calloc() failure >> return NULL

stores in HEAP like malloc() 

BOTH ARE SAME malloc() calloc() just GARBAGE VALUE AND SYNTAX ARE different
*/

int main(){
	int *ptr = NULL;
	
	// args for calloc
	cout << "How many integers: ";
	int n;
	cin >> n;
	int size = sizeof(int);
	
	ptr = (int *) calloc(n, size);
	if (ptr == NULL){
		// checking..
		cout << "Unable to allocated memory" << endl;
		exit(1); // exceptional out
	}
	
	cout << "Enter your data:" << endl;
	int  i = 0; 
	while (i < n){
		cin >> ptr[i];	
		i++;
	}
	
	cout << "Content of data:" << endl;
	for (int i = 0; i < n; i++){
		cout << ptr[i] << '\t';
	}
	
	free(ptr); // DON'T FORGET THIS
	
	return 0;
}