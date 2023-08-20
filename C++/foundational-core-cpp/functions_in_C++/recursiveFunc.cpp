#include <iostream>
using namespace std;

void Hello(){
	cout << "Hello";
	Hello();
}

void fact(int n){
	int ans = 1;
	
	cout << n << '!' << " = ";
	while (n > 0){
		ans *= n;
		if ( n == 1 ){
			cout << n << ' ';
		}else {
			cout << n << " * ";  	
		}
		n--;
	}
	cout << " = " << ans << endl;
}

int factorial(int n){
	// n = 1 and 0 are called BASE CASE, without them function will run forever
	if (n <= 1){ return 1; }
	else { return n*factorial(n-1);	}
}

int main(){
	
	// Hello(); // infinite time printing 
	fact(5);
	cout << factorial(6) << ' ' << factorial(5);
	
	return 0;
}