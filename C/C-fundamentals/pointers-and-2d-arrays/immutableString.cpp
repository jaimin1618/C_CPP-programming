#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
	char str[] = "Hello";
	char *ptr = str; // THIS IS HOW IT IS DONE IN C++
	for (int i = 0; ptr[i] != '\0'; i++){
		cout << ptr[i] << '\t';
	}
	cout << endl;
	
	// CAN YOU CHANGE CONTENT OF CONSTANT STRING ? THEY ARE IMMUTABLE
	*(ptr + 1) = '*'; // YES WE CAN DO SO because we have used another pointer
	cout << str << endl;
	
	// YES YOU CAN CHANGE IT IN C++, I did changed case of all capitals
	for (int j = 0; str[j] != '\0'; j++){
		if (str[j] >= 'A' && str[j] <= 'Z'){
			str[j] += 32;
		}
	}
	cout << str;

	
	
	return 0;
}