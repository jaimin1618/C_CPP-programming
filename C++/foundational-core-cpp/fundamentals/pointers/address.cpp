#include <iostream> 
using namespace std;

int main(){
	int score = 5;
	int *ip = &score;
	cout << "Use ip to get address of variable: " << ip << "\nuse *ip to get value of variable: " << *ip << endl;
	
	return 0;
}