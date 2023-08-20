#include <iostream>
using namespace std;

int sum(int a, int b=10){
	return a+b;
}

int volume(int l=1, int b=1, int h=1){
	return l*b*h;
}

int main(){
	int x = 20;
	cout << sum(x);
	cout << volume(2,2);
	
	
	return 0;
}