#include <iostream>
#include <cstdlib>
using namespace std;

/*
realloc() is used to reallocate existing dynamic memory.
something like growing OR reducing the size of dynamic memory

*/
int main(){
	int *ptr = NULL;
	ptr = (int *) malloc(sizeof(int) * 10); // allocating 10 elem int space
	
	/*
	let's say we want to increase size of ptr for 5 int
	syntax >> (int *) realloc(pointer, bytes you want to increase)
	*/
	// 5 int = 20 bytes
	ptr = (int *)realloc(ptr, 15 * sizeof(int)); // you need to specify new size totally
	if (ptr == NULL){
		cout << "unable to allocate memory." <<endl;
		exit(1);
	}
	int i = 0;
	while (i < 15){
		cin >> ptr[i];
		i++;
	}
	cout << "Content of array is: " << endl;
	for (int i = 0; i < 15; i++){
		cout << ptr[i] << '\t';
	}
	
	
	return 0;
}