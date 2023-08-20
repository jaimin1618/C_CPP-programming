#include <iostream>
using namespace std;

/*
When overloading functions, the definition of the function must differ from each other by the types
and/or the number of arguments in the argument list.
THIS MEANS WHEN PARAMETER OF  FUNCTION CHANGES, THEN YOU NEED TO REDEFINE NEW FUNCTION FOR IT... DECLARATION REMAINS SAME
PASSING INT AND 
function overloading will allow you to make function for all type of datatype having same name.
*/

void print(int x){
	// PRIBLEMS WITH THIS FUNCTION IS, IT ONLY GETS INT FROM USER;
	cout <<"This is overloading function for int inputs: "<< x << endl;	
}
void print(string name){
	// NOW THIS FUNCTION ALLOWS US TO PASS CHAR/STRINGS AS INPUT
	cout <<"This is overloading function for string inputs: "<< name << endl;
}

/*
NOTE: changing the return type of function, this is NOT overloading..
int print(int n){}
float print(float n) {} 
both have different return type ERROR WILL BE SHOWN FOR DOING THIS

*/

int main(){
	int x = 10;
	string name = "JAIMIN";
	print(x);
	print(name);
	
	return 0;
}