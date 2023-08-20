#include<iostream>
#include<thread>
#include<mutex>
using namespace std;

/**
 * NOTE: Do not forget to use .join() of threads with main thread, 
 * it could cause crash
 */

int num = 0;
mutex m;

void sum() { // num, cout both are shared resources. 
	m.lock();
	num += 1;
	cout << "program called sum() function: " << num << " times\n";
	m.unlock();
}

int main(int argc, char const *argv[]) {
	thread t1(sum);
	thread t2(sum);
	thread t3(sum);

	t1.join();
	t2.join();
	t3.join();	


	return 0;
}