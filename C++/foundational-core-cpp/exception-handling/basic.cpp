/*
C++ exception handling is built upon three keywords: try, catch, and throw.
throw is used to throw an exception when a problem shows up.

So unlike C: we have TRY CATCH AND THROW KW to do our error business
*/

#include <iostream> 
using namespace std;

int main(){
/*
	int x = 0 ;
	int y = 10;
	long long z = 10 / 0;
	
	cout << z << endl;
*/
	int Mage = 29;
	int Sage = 36;
	try {
		if (Sage > Mage) {
			throw 99;
		}
	}
	catch (int x) {
		cout << "Wrong values of age -- Error No. " << x  << endl;
	}
	

	return 0;	
}