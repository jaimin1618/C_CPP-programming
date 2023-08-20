/*
To be successful as a C++ programmer, it's essential to have a good understanding of how dynamic memory works.
Dynamic programming is very much important part in C++
                                
								     In a C++ program, memory is divided into two parts:
									 
The stack: All of your local variables take up memory from the stack.
The heap: Unused program memory that can be used when the program runs to dynamically allocate the memory.

You can allocate memory at run time within the heap for the variable of a given type using the new operator, 
which returns the address of the space allocated. use:
new int; // this return an addrss which must be accessed by POINTER
*/

#include <iostream>
using namespace std;

int main(){
	int *ptr = new int; // allcated 4 byte to store int in heap
	// this process can be use to make dynamic array.
	// here int *ptr >>> holds memory in STACK as local variable scope
	// but this *ptr has access to memory in HEAP using memory address of heap
	
	*ptr = 5;
	cout << "Before delete" << endl;
	cout << ptr << "::" << *ptr<< endl << endl; // 5 becuse memory is in use
	
	
	/*
	MOST IMPORTANT THING... C++ PROVIDES DYANMIC MEMORY MANAGMENT AS STACK MEMORY 
	AND C++ PROIVDES MANNUAL MEMORY MANAGEMENT AS HEAP...
	AS HEAP is mannual you need to delete it after it is used otherwise it will be stored and your programme can OVERLOAD	
	use delete ptr; to free up memory
	*/
	
	delete ptr; // This statement releases the memory pointed to by pointer.
	cout << "After delete" << endl;	
	cout << ptr << "::" << *ptr << endl;
	// aftering delete ptr;  >>> ptr pointer becomes dangling pointer >>> for better code you can reuse it as new pointer
	
	
	/*
	Forgetting to free up memory that has been allocated with the new keyword will result in memory leaks, 
	because that memory will stay allocated until the program shuts down.
	*/
	
	
	
	
	return 0;
}
