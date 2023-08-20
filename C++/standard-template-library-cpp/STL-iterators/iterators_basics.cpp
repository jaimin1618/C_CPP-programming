#include <iostream>
#include <vector>
using namespace std;

void msg(const char *S) { cout << S; }

int main(int argc, char **argv) {
    cout << "\n\n";
    
    // init.
    vector<int> vi = {1, 2, 3, 4, 5};
    vector<int>::iterator it; // BETTER OPTION IS TO USE: auto, but not here.
    
    // loop
    cout << "ITERATE FORWARD: \n";
    cout << "content: { ";
    for (it = vi.begin(); it < vi.end(); ++it) {
        cout << *it << ' ';
    }
    cout << "};";
    
    
    cout << "ITERATE BACKWARD: \n";
    cout << "content: { ";
    for (it = vi.end()-1; it >= vi.begin(); --it) {
        cout << *it << ' ';
    }
    cout << "};";
    
    
    cout << "RANGE-BASED FOR LOOP: \n";  // you don't need iterator, if range base for loop.
    cout << "content: { ";
    for (int i: vi) cout << i << ' ';
    cout << "};\n";
    
    // LOOP ITERATION + We have random access of elements
    // use it = vi.begin +- 5;
    cout << "Element at index = 3 | VI[3] = " << vi[3] << endl;
    
    // Check how all works
    it = vi.begin();
    if (*(it + 3) == vi[3]) {
        cout << "Vi[3] == *(vi.begin() + 3)\n";
    }else {
        cout << "Vi[3] != *(vi.begin() + 3)\n\n";
    }
    
    
    
    

    cout << "\n\n";
	return 0;
}
