#include<iostream>
#include<cmath>
using namespace std;

class Simple {
public:
	int number;
	void operator() (int n) {
		cout << "input number is: " << n << '\n';
		number = n;
	}

	void operator! () {
		int k = to_string(number).length();

		int tmp = number;
		int result = 0;
		while(tmp > 0) {
			int d = tmp % 10;
			result += (int) d * pow(10, --k);
			tmp /= 10;
		}

		number = result;
	}
};

int main(int argc, char const *argv[]) {
	Simple s;
	s.operator()(100); // behaves as () operator
	s(500); // behaves as ctor

	s.operator!();
	cout << s.number << '\n';


	return 0;
}