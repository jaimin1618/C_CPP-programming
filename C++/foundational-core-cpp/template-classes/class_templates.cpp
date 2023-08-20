#include <iostream>
using namespace std;

// LET'S CREATE AN PAIR HOLDING DATA-STRUCTURE CLASS
/*
Delcaring function for template class
A specific syntax is required in case you define your member functions outside of your class - for example in a separate source file.
You need to specify the generic type in angle brackets after the class name.
For example, to have a member function bigger() defined outside of the class, the following syntax is used:
*/

template <class T>
class Pair {
	private:
	T first, second;
	
	public:
	// ctor
	Pair(T a, T b):first(a), second(b){}
	T bigger();
	
	// otherwise...
	T smaller(){
		cout << "This is inside the class declaration." << endl;
		return (first < second) ? first : second;
	}
	
};

template <class T>
T Pair<T>::bigger(){
	cout << "This is outside the class declaration." << endl;
	return (first > second) ? first : second;
}
	
int main(){
	
	// LET'S MAKE OBJECT
	Pair<int> obj(10, 20);
	cout << endl << obj.smaller() << ' ' << obj.bigger() << endl;
	
	Pair <char> NewObj('!','*');
	cout << NewObj.bigger(); // *
	
	return 0;
}