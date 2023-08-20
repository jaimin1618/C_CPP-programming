#include <iostream>
using namespace std;

/*
get thire nums

output: max, sum from three nums
*/
void doWork(int a, int b, int c, int *sum, int *max){
	*sum = a + b + c;
	
	if (a > b && a > c){
		*max = a;
	}else if (b > c){
		*max = b;
	}else {
		*max = c;
	}
}



int main(){
	int x = 10, y = 20, z = 15, sum, max ;
	doWork(x, y, z, &sum, &max);
	cout << sum << ' ' << max;
	
	return 0;
}