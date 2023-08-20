#include<iostream>
#include<future>
using namespace std;

void asyncFunction() {
	cout << "Async function thread id: " << this_thread::get_id() << '\n';
	cout << "This is Asynchronous function... "
	<< "Called outside of Main thread" << '\n';
}

int main(int argc, char const *argv[]) {
	cout << "Main thread id: " << this_thread::get_id() << '\n';
	future<void> f = async(launch::async, asyncFunction); // returns future object
	// it joins to main thread, automatically. 

	if(f.valid()) 
		f.get();

	return 0;
}