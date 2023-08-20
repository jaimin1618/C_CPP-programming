#include <iostream>
using namespace std;

int main(){
	// multi-dimensional initialize by row R {}, {} ...
	int arr[2][3] = {
		{1,2,3},
		{4,5,6}
	};
	
	for (int i=0; i<2; i++){
		for (int j=0; j<3; j++){
			cout << arr[i][j] << '\t';
		}
		cout << "\n------------------\n";
	}
	
	return 0;
}