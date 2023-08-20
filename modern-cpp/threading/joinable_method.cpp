#include<iostream>
#include<thread>
#include<chrono>
#include<stdlib.h>
using namespace std;

void wait(int&& s) {
	this_thread::sleep_for(chrono::seconds(s));
}

void f() {
	const int n = 5;

	for (int i = 0; i < n; ++i) {
		cout << "second: " << i + 1 << '\n';
		wait(1);
	}
}

int main(int argc, char const *argv[]) {
	bool isJoinable;
	thread t;
	cout << "is current thread joinable: " << t.joinable() << '\n';

	t = thread(f);
	cout << "is current thread joinable: " << (isJoinable = t.joinable()) << '\n';

	if(isJoinable) 
		t.join(); // for safety

	cout << "After joined, is current thread joinable: " << t.joinable() << '\n';



	return 0;
}