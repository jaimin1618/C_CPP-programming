#include<iostream>
using namespace std;

int get_value() {
	return 10;
}

int& get_value_ref() {
	static int storage = 10;
	return storage;
}

// making function which only accepts temp object (or RVALUE) by using &&
void printName(string&& s) {
	cout << s << '\n';
}

void foo(string&& t) {
	cout << t << '\n';
}

// What is rvalue: rvalue simply means it doesn't have memory address or location
// rvalue can be considered constant like 6, PI, 123 and more.
// lvalue is address or location, "&" is lvalue reference where as "&&" is rvalue reference in C++

// lvalue reference example
// int x = 100;
// int& iAmX = x; here iAmX variable is ANOTHER NAME for variable x - this is lvalue reference


// simple EXAMPLE & EXAPLANATION
int prvalue(); // PURE RETURN VALUE
int& lvalue(); // LEFT VALUE (storage) access
int&& xvalue(); // expiring VALUE (temp object)

int main(int argc, char const *argv[]) {
	// LVALUE = RVALUE, but doesn't have to be true
	int x = 1000; // LVALUE is x, RVALUE is 10;

	// now we cannot do below thing
	// get_value() = x;

	// but
	cout << get_value_ref() << '\n';
	get_value_ref() = x;
	cout << get_value_ref() << '\n'; // static variable inside get_value_ref is now storage=x (1000)

	printName("Jaimin");
	string s = "Jane Doe";
	// printName(s); // Error! function only accepts RVALUE OR PLAIN-VALUE input not variable or address input

	const string& t { "Simple test" };
	foo("Just t"); // works!
 	// foo(t); Error 


	return 0;
}