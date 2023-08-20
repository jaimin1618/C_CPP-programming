#include<iostream>
#include<future>
using namespace std;
using ull = unsigned long long;

/**
 * When promise/future is used?
 * Let say you created a thread out of main thread, 
 * that thread is exeuting and making some result and storing it inside some variable
 * now you want that result in your main-thread 
 * 
 * if you are using std::thread, 
 * you NEED TO do many things like, 
 * 		- Making mutex because thread and main-thread both have access to that shared variable
 * 		- keeping global vars like mutex and so...
 * 		- passing main thread variable as reference inside function
 * 		- and many more stuff...
 * 
 * That's why we would use std::promise, to get data inside thread into main-thread
 */
void findOddSum(promise<ull>&& oddSumPromise, ull start, ull end) {
	ull oddSum = 0;
	for(ull i = start; i <= end; ++i)
		if(i & 1)
			oddSum += i;

	oddSumPromise.set_value(oddSum);
}

int main(int argc, char const *argv[]) {
	ull start = 0, end = 19e8;

	promise<ull> oddSum;
	future<ull> oddFuture = oddSum.get_future();

	return 0;
}