#include <iostream>
using namespace std;

int main(){
	int *p[3]; // ALL THREE ARE pointer in this array
	int **k; 
	k = p; // k is pointing to value at pointer p
	
	int x[] = {1, 2, 3};
	int y[] = {10, 20, 30};
	int z[] = {100, 200, 300};
	
	p[0] = x;
	p[1] = y;
	p[2] = z;
	
	// k -> p[0 or 1 or 2] -> X or Y or Z;
	cout << "Using pointer notation: " << endl;
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			cout << *(*(k + i)+j) << '\t';
		}
		cout << endl;
	}	
	cout << endl;
	cout << "Using array notation: " << endl;
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			cout << k[i][j] << '\t';
		}
		cout << endl;
	}
	
	return 0;
}