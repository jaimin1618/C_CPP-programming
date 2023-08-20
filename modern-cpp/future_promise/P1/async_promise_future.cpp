#include<iostream>
#include<thread>
#include<vector>
#include<future>
using namespace std;

long factorial(future<long>& f) {
	long result = 1;

	int N = f.get();
	for(int i = 1; i <= N; ++i)
		result *= i;
	return result;
}

int main(int argc, char const *argv[]) {
	int result;

	promise<long> p;
	future<long> input_value = p.get_future(); // factorial input value WILL arrive in future
	future<long> function_output = async(factorial, std::ref(input_value)); // factorial output value WILL be asynchronous process
	
	cout << "Do something else..." << '\n';
	this_thread::sleep_for(chrono::milliseconds(3000)); // sleep for 3 second

	p.set_value(10); // when you set value to 4 -> child thread (where function is running) will receive value 4 and gives to N
	result = function_output.get();
	cout << result << '\n';

	return 0;
}