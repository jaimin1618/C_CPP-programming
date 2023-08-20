#include <iostream>
using namespace std;

void print(int *ptr_arr, int n){
	cout << "Array elements: " <<  endl;
	for (int i = 0; i < n; i++){
		cout << *(ptr_arr + i) << endl;
		cout << ptr_arr[i] << " arr[i] can be also used" << endl;
	}
}

// IN OTHER SENSE Array[i] = *(Array + i) >>> there is NO difference 


int main(){
	int x[] = {1, 2, 3, 4, 5};
	print(x, 5);
	
	
	
	
	return 0;
}