#include <iostream>
#include <cmath>
using namespace std;

int getlen(int num){
	int count = 0;
	while (num > 0){
		num /= 10;
		count++;		
	}	
	return count;	
}

bool isArmstrong(int num){
	int p = getlen(num);
	int temp = num;
	int sum = 0;
	while (temp > 0){
		sum += pow((temp % 10), p);
		temp /= 10;
	}
	return sum == num;
}


int main(){
	
	for (int i = 0; i < 1000; i++){
		if (isArmstrong(i)){
			cout << i << '\t';
		}
	}
	
	return 0;
}