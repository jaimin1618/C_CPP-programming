#include <iostream>
using namespace std;

void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main(){
	int X = 0;
	int Y = 1;
	cout << X << Y << endl;
	swap(&X, &Y);
	cout << X << Y << endl;
	
	
	return 0;
}