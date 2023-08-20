#include<iostream>
#include<functional>
using namespace std;

int operation(int a, int b, function<int(int,int)> fn) {
	return fn(a, b);
}

int main(int argc, char const *argv[]) {
	int a, b;
	a = 10;
	b = 20;

	int add = operation(a, b, [](int x, int y) -> int {
		return x + y;
	});

	int multiply = operation(a, b, [](int x, int y) -> int {
		return x * y;
	});

	cout << "Addition: " << add << '\n';
	cout << "Multiply: " << multiply << '\n';

	


	return 0;
}