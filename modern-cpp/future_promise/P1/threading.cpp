#include<iostream>
#include<thread>
#include<vector>
using namespace std;

void factorial(const int N) {
	long long result = 1;
	for(int i = 1; i <= N; ++i)
		result *= i;

	cout << N << "! = " << result << '\n';
}

int main(int argc, char const *argv[]) {
	chrono::steady_clock::time_point start, end;
	// without threading
	start = chrono::steady_clock::now();
	factorial(20);
	end = chrono::steady_clock::now();
	cout << "Without threading: " << (chrono::duration_cast<chrono::microseconds>(end - start)).count() << " us" << '\n';	

	// with 1 thread
	thread t;
	start = chrono::steady_clock::now();
	t = thread(factorial, 20);
	if(t.joinable())
		t.join();
	end = chrono::steady_clock::now();
	cout << "With 1 thread: " << (chrono::duration_cast<chrono::microseconds>(end - start)).count() << " us" << '\n';

	// with 2 thread
	thread t1, t2;
	start = chrono::steady_clock::now();
	t1 = thread(factorial, 20);
	t2 = thread(factorial, 20);
	if(t1.joinable())
		t1.join();
	if(t2.joinable())
		t2.join();
	end = chrono::steady_clock::now();
	cout << "With 2 thread: " << (chrono::duration_cast<chrono::microseconds>(end - start)).count() << " us" << '\n';	


	return 0;
}