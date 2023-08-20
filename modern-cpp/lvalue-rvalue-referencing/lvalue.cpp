#include<iostream>
using namespace std;

// link: https://stackoverflow.com/questions/3601602/what-are-rvalues-lvalues-xvalues-glvalues-and-prvalues#:~:text=An%20rvalue%20(so%2Dcalled%2C,that%20is%20not%20an%20xvalue.

int storage = 0;
int& fn() {
	return storage;
}

int main(int argc, char const *argv[]) {
	cout << fn() << '\n'; // 0
	fn() = 1000;
	cout << fn() << '\n'; // 1000	


	return 0;
}