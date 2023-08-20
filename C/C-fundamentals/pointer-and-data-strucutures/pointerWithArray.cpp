#include <iostream>
using namespace std;

int main(){
	int arr[] = {1, 2, 3, 4, 5}; 
	// name of array is pointed to base (arr[0])
	// arr + i >>> address of ith elem
	// *(arr+i) >>> value of ith elem
	
	for (int i = 0; i < 5; i++){
		cout << i[arr] << ' ' << endl;
	}

	cout << arr << ' ' << *arr;
	
	return 0;
}