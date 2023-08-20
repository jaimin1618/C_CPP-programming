#include <iostream>
using namespace std;

void printHello(unsigned int n){
	if (n == 0){
		return;
	}
	cout << "Hello! " << '\t';
	n--;
	printHello(n);
}

int main(){
	
	printHello(3);
	
	return 0;
}