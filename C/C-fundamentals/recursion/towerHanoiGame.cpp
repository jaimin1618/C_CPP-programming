#include <iostream>
using namespace std;

void towerHanoi(int n, int src, int aux, int dest){
	if (n == 1){
		cout << "Move the disk from tower no: " << src << " to tower no: " << dest << endl;
		return;
	}
	towerHanoi(n-1, src, dest, aux);
	towerHanoi(1, src, aux, dest);
	towerHanoi(n-1, aux, src, dest);
}



int main(){
	towerHanoi(2, 1, 2, 3);
	
	return 0;
}