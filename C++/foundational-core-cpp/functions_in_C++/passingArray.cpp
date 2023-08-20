#include <iostream>
using namespace std;

// MOST IMPORTANT FOR US, PASSING ARRAY;
void print_arr(int arr[], int n){
	for (int i=0; i<n; i++){
		cout << arr[i] << endl;
	}
}

int main(){
	int arr[] = {2,1,3,4,5};
	int n = 5;
	print_arr(arr, n);
	
	return 0;
}