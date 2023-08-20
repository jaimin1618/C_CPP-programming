#include <iostream>
using namespace std;

/*
IN QUEUES, you need to understand that it is not list...
it is FIRST COME FIRST SERVED
IN >> [||||||||||||] >> OUT
---------------------------------------------------------------------

add() >> adde in last
remove() >> removes at first
print() >> prints resulting array
*/

class Queue {
	// attributes
	int size;
	int *ptr;
	
	public:
	Queue(){
		// ON INIT, THIS WILL GIVE ME ARRAY OF 100 ELE, SIZE = 0 initially
		size = 0;
		ptr = new int[100];  // dynmic array;
	}
	
	
	// CODE - methods 
	void remove(){
		if (size == 0){
			cout << "Queue is empty" << endl;
		}else {
			// removes from FIRST
			for (int i=0; i<size-1; i++){
				ptr[i] = ptr[i+1];
			}
			size--;
		}
		
	}
	
	void add(int num){
		// INSERT FROM LAST
		ptr[size] = num;
		size++;
	}
	
	void print(){
		for (int i=0; i<size; i++){
			cout << ptr[i] << " <- ";
		}
		cout << endl;
	}
};

int main(){
	Queue que_one;
	for (int i=0; i<5; i++){
		que_one.add(i);
	}
	que_one.print();
	
	
	return 0;
}