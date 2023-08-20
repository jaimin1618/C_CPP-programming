#include<iostream>
#include<future>
using namespace std;

void threadedFunction(promise<int>& prom) {
	// some calculation...
	prom.set_value(1000); // sending data to main thread -> some result
	this_thread::sleep_for(chrono::seconds(3)); // some heavy tasks...
}

int main(int argc, char const *argv[]) {
	promise<int> mypromise;
	future<int> f = mypromise.get_future();

	cout << "Main ..." << '\n';
	thread t = thread(threadedFunction, ref(mypromise));

	cout << "Main thread: " << f.get() << '\n';
	t.join();

	return 0;
}