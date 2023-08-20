#include <iostream>
using namespace std;

void sleep(){
	int i=0; 
	while (i < 5e7) { i++; }
}

int main(){
	char name[] = "JAIMIN__CHOKHAWALA";
	int i = 0;
	while (name[i] != '\0'){
		cout << name[i];
		sleep();
		i++;
	}
	return 0;
}