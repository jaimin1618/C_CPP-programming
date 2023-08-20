#include<iostream>
#include<chrono>
#include<thread>
using namespace std;

void some_time_taking_function() {
	int i = 0;
	while(i < 1e9) 
		++i;
}

int main(int argc, char const *argv[]) {
	chrono::steady_clock::time_point start, end;

	start = chrono::steady_clock::now();
	some_time_taking_function();
	end = chrono::steady_clock::now();

	cout << "Function took " << (chrono::duration_cast<chrono::milliseconds>(end - start)).count() << " MS of time." << '\n';	


	return 0;
}