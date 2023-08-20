/*
In case of regular class templates, the way the class handles different data types is the same;
the same code runs for all data types.
Template specialization allows for the definition of a different implementation of a template
when a specific type is passed as a template argument.
*/
// SEE below why we need speciailization

#include <iostream>
using namespace std;

// generic(NORMAL) template syntax
template <class T>
class MyClass {
	public: 
	MyClass(T x){
		// problesm is if we enter "x" char type then this should not be printed
		// THAT'S WHY WE NEED TEMPLATE SPECIALIZATION
		cout << x << " This is NOT character type." << endl;
	}
};


// SYNTAX FOR MAKING specialized templates for specific dtype
/*
First of all, notice that we precede the class name with template<>,
including an empty parameter list. This is because all types are known and no template arguments are required for this specialization, but still,
it is the specialization of a class template, and thus it requires to be noted as such.
But more important than this prefix, is the <char> specialization parameter after the class template name.
This specialization parameter itself identifies the type for which the template class is being specialized (char).
*/

// specialize template syntax
template <>
class MyClass<char> {
	public:
	MyClass (char x) {
		cout << x << " This is a char type ! " << endl;
	}
};




int main(){
	// let's initialize
	
	// generic works for init.
	MyClass<int> obj1(42);
	MyClass<double> obj2(5.42);
	
	// specialize will work for init
	MyClass<char> obj3('*');
	
	
	
	return 0;
}