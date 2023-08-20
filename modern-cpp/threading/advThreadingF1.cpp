#include<iostream>
using namespace std;

// https://www.acodersjourney.com/top-20-cplusplus-multithreading-mistakes/ visit for more info

int num = 0;
void sum() {
	num += 1;
	cout << "program called sum() function: " << num << " times\n";
}

int main(int argc, char const *argv[]) {
	sum();
	sum();
	sum();
	
	
	


	return 0;
}