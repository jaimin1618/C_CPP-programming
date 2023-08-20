#include<iostream>
#include<thread>
#include<vector>
#include<future>
using namespace std;

long factorial(const int N) {
	long result = 1;
	for(int i = 1; i <= N; ++i)
		result *= i;
	return result;
}

int main(int argc, char const *argv[]) {
	long result;
	// async return very important thing -> future
	future<long> f = async(factorial, 5); 

	// we can get return value of function using .get()
	// f.get() is on main thread, it will WAIT until child thread finishes
	result = f.get(); 
	cout << result << '\n';

	return 0;
}