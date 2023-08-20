#include <iostream>
using namespace std;

/*

Functions and classes help to make programs easier to write, safer,
and more maintainable.
as you know we have to define new function for new parameter and that's why
we have templates
syntax: template <class TempName> outside main()

*/

template <class T>
T sum(T a, T b){
	return a+b;
}

// Making another 
template <class T>
T print(T name){
	return name;
}

template <class T, class U>
T smaller(T num1, U num2){
	return (num1 > num2) ? num2 : num1;
}

int main(){
	int x, y;
	x = 10;
	y = 100;
	cout << sum(x, y) << endl; // 110 see template will also allow you with float
	cout << sum(1.123,7.6543) << endl;
	
	cout << print("Jaimin__chokhawala") << endl; 
	
	cout << smaller(1, 0.7) << "0.7 > 0 because we have defined that way";
return 0;
}