#include <iostream>
#include <cmath>
using namespace std;
/*
NUMBER IS PRIME

- if it has only two divisor 1 and num;
- To get this, If number doesn't have any divisor from range[2 TO sqrt(num)] then,
  that number is said to be prime.
  
*/

bool isPrime(int n){
	
	int  i = 2;
	while (i <= sqrt(n)){
		if (n % i == 0){
			return false;
		}
		i++;
	}
	return true;
	
}

int main(){
	int arr[] = {2,11,13,14,16,21,17,57,67,91};
	for (int  i = 0; i < 10; i++){
		bool ans = isPrime(arr[i]);
		cout << arr[i] << ' ' << ans << endl << endl; 
	}

	cout << "\n\n\n";
	
	for (int i = 10; i <= 100000; i*=10){
		cout << "Numbers prime integer between 0 - " << i << endl;
		int count = 0;
		for (int j = 2; j <= i; j++){
			if (isPrime(j)){
				count++;
			}
		}
		cout << count << endl;
	}
	
	return 0;
}
