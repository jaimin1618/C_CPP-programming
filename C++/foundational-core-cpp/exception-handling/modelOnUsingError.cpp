#include <iostream>
using namespace std;

int main(){
	
	string *err = NULL;
	err = new string[5];
	err[0] = "0 NOT VALID";
	err[1] = "enter in range of 0 - 9";
	err[2] = "you enter negative value";
	

	int var[3] = {-1, 15, 0};
	try {
		int W;
		for (int i = 0; i < 3; i++){
			W = var[i];
			// WHAT I LEARNT FROM DOING THIS IS...
			// throw is like a break, if it is used in loop then it will break 
			// the loop
			if (W  < 0){
				throw 2;
			}else if (W > 9){
				throw 1;
			}else if (W == 0){
				throw 0;
			}
		}
	}
	catch (int a){
		cout << err[a] << endl;
	}
	return 0;
}
