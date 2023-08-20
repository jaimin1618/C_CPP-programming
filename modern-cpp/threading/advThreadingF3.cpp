#include<iostream>
#include<future>
using namespace std;

// asynchronous programming C++

int num = 0;

const int sum() { // num, cout both are shared resources. 
	int i = 0;
	while(i < 1e9) 
		++i;

	return i;
}

int main(int argc, char const *argv[]) {
	int num = 0;
	cout << "currently num = " << num << '\n';

	auto __future = std::async(std::launch::async, sum);

	if(__future.valid()) { // JS -> promise resolve
		num = __future.get(); // .then()
	}

	cout << num << '\n';
	return 0;
}