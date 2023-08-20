#include<iostream>
#include<functional>
using namespace std;

// Method 2: using std::function<>
/**
 * Syntax:
 * std::function<return_type(arg1_type, arg2-type…)> obj_name
 * This object can be use to call the function as below
 * return_type catch_variable = obj_name(arg1, arg2);
 */ 
inline int add(int a, int b) {
	return a + b;
}
inline int multiply(int a, int b) {
	return a * b;
}

int operation(
	int a, 
	int b, 
	function<int(int,int)> fn) {

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