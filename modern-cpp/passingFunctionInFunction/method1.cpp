#include<iostream>
using namespace std;

// Method 1: Using function pointers 
// Syntax: return_type (*funtion_name)(function_parameters)

inline int add(int a, int b) {
	return a + b;
}

inline int multiply(int a, int b) {
	return a * b;
}

int operation(int a, int b, int (*fn)(int, int)) {
	return fn(a, b);
}

int main(int argc, char const *argv[]) {
	int a, b;
	a = 10;
	b = 20;

	cout << "Addition: " << operation(a, b, &add) << '\n';
	cout << "Multiply: " << operation(a, b, &multiply) << '\n';

	
	


	return 0;
}