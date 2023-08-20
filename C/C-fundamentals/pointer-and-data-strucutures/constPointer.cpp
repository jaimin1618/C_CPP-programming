#include <iostream>
using namespace std;

// name of array is CONSTANT BASE POINTER of array 
// cannot be changed


// IT IS SUGGESTED TO MAKE POINTER CONST
// NOT ADVISED TO USE DYNAMIC POINTER;

int main(){
	int arr[] = {1, 2, 3, 4, 5};
	// no operation on arr is allowed;
	int *ptr = NULL;
	ptr = arr;
	cout << ptr << ' ' <<  ++ptr << ' ' << *ptr << ' ' << *(++ptr) <<endl;
	for (int i = 0; i < 5; i++){
		cout << ptr[i] << '\t';
	}
	
	
	
	
	
	return 0;
}