#include <iostream>
#include <cstring>
using namespace std;

void print(int *arr, int n){
	
	cout << "Array elements are: " << endl;
	for (int i = 0; i < n; i++){
		cout << arr[i] << endl;
	}
	
}

void toggleChar(char *cptr){
	// you can: *(ptr+i) == ptr[i]
	/*
	LOGIC:
	ASCII - from 065 - 090 are A - Z;
	ASCII - from 097 - 122 are a - z;
	*/
	
	for (int i = 0; cptr[i] != '\0'; i++){
		// here we actully compare ASCII 
		if (cptr[i] >= 'A' && cptr[i] <= 'Z'){ // 65 - 90 range
			cptr[i] += 32;
		}else if (cptr[i] >= 'a' && cptr[i] <= 'z'){ // 97 - 122 range
			cptr[i] -= 32;
		}	
	}
}

int main(){
	int arr[] = {1, 2, 3, 4, 5};
	print(arr, 5);
	
	char str[10];
	cout << "Enter your string: ";
	cin >> str;
	
	toggleChar(str);
	cout << "YOUR STRING AFTER MODIFICATION: " << endl;
	for (int i = 0; str[i] != '\0'; i++){
		cout << str[i];
		
	}	
	return 0;
}