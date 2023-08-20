#include<iostream>
#include<thread>
#include<mutex>
using namespace std;

/**
 * NOTE: if you detach a thread, don't join it it would crash program. 
 * first check if thread is joinable() then join();
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
	// btw some issues with this code!!!
	thread t1(sum);
	thread t2(sum);
	thread t3(sum);

	t1.detach();
	t2.detach();
	t3.detach();

	if(t1.joinable()) 
		t1.join();

	if(t2.joinable())
		t2.join();
	
	if(t3.joinable())
		t3.join();	


	return 0;
}