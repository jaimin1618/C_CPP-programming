#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
	
	srand(time(0)); // it will take present time in sec as seed 
	// seed will change everytime
	for (int i=0; i<10; i++){
		cout << rand()%10 << endl;
	}
	return 0;
}