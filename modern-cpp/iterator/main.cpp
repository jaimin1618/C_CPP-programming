#include<iostream>
#include"iterator.h"
using namespace std;

int main(int argc, char const *argv[]) {
	Simple::Box boxes[] = {
		{"Box 1", 1, 100.0},
		{"Box 2", 2, 200.0},
		{"Box 3", 3, 300.0},
		{"Box 4", 4, 400.0},
		{"Box 5", 5, 500.0},
	};
	const int n = sizeof(boxes) / sizeof(boxes[0]);
	cout << n << '\n';
	std::vector<Simple::Box> v(boxes, boxes + n);
	Simple s = Simple(v);

	std::vector<Simple::Box>::iterator begin = v.begin();
	std::vector<Simple::Box>::iterator end =  v.end();

	getAverageBoxPrice(begin, end, s.averageBoxPrice);
	cout << "Avg price: " << s.averageBoxPrice << '\n';




	return 0;
}