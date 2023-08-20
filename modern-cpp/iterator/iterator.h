#include<vector>

#ifndef ITERATOR_CPP
#define ITERATOR_CPP

class Simple {
public: 
	struct Box {
		std::string _boxName;
		int _id;
		double _boxPrice;
		Box(std::string name, int id, double price): _boxName(name), _id(id), _boxPrice(price) {};
	};

	Simple(std::vector<Box>& v): boxes(v) {};
	std::vector<Box> getBoxes() const { return boxes; };
	double averageBoxPrice;

private:
	std::vector<Box> boxes;
};

const double getAverageBoxPrice(
	std::vector<Simple::Box>::iterator& start, 
	std::vector<Simple::Box>::iterator& end, 
	double& averageBoxPrice) {

	auto it = start;
	double avg = 0.0;
	int count = 0;
	for(it; it != end; ++it) {
		avg += (*it)._boxPrice;
		++count;
	}

	averageBoxPrice = avg / count;
	return averageBoxPrice;
}

#endif // ITERATOR_CPP
