#include<iostream>
#include<iterator>  /*ITERATOR HEADER FILE*/
using namespace std;

/*
NOTE: OUTPUT ITERATOR IS USED TO READ AND WRITE ELEMENT OF CONTAINER.
*/
int main(int argc, char **argv) {
    
    ostream_iterator<int> output(cout, "\t");
    
    for (int i: {3, 5, 7, 0}) {
        *output++ = i;
    }
    cout << endl; // 3 5 7 0
    
	return 0;
}