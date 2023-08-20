#include <iostream>
using namespace std;

// how to know char is uppercase of lower with prebuild function
// goint from UPPER CASE TO LOWER CASE, add 32 in char to get its lower case

/*
char + 32 >>> UPPER CASE
char - 32 >>> LOWER CASE
*/
bool lower_case(char ch){
	if (ch >= 'a' && ch <= 'z'){
		return true;
	}else {
		return false;
	}
}

char convertToUpper(char ch){
	if (lower_case(ch)){
		// ch + 32 will convert lower case into upper case
		return ch + 32; 	 
	}else {
		return ch;
	}
}

char convertToLower(char ch){
	if (!lower_case(ch)){
		// ch - 32 will convert upper case into lower case
		return (char) ch - 32;
	}else {
		return ch;
	}
}


int main(){
	
	char str;
	while (cin >> str){
		bool ans = lower_case(str);
		cout << convertToLower(str) << endl;
		

	}
	
	return 0;

}