#include<iostream>
#include<iterator>
using namespace std;

/*
INPUT ITERATOR is capable of,
reading but not writing,
forward iteration not backward,
increamenting ++ but not decreamenting --

*/

void msg(const char *s) { cout << s; }

int main(int argc, char **argv) {
    double d1 = 0, d2 = 0;
    
    cout << "Two numeric values: " << flush;
    cin.clear();
    istream_iterator<double> eos;       // default ctor is end-of-stream
    istream_iterator<double> iit(cin);  // stdin iterator
    
    if (iit == eos) {
        msg("no values\n");
    } else {
        d1 = *iit++;
    }
    
    if (iit == eos) {
        msg("no second value\n");
        return 0;
    } else {
        d2 = *iit;
    }
    
    cin.clear();
    cout << d1 << " * " << d2 << " = " << d1 * d2 << endl;
	return 0;
}
