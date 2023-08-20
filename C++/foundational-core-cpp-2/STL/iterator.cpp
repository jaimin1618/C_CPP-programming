#include <iostream>
#include <vector>
using namespace std;


int main(int argc, char const *argv[]) {
    // IN STL, ITERATORS ARE GENERALIZATION OF POINTERS.
    
    // init
    vector<int> vi = {1, 2, 3, 4, 5};
    vector<int>::iterator it;
    
    // input iterator
    cout << "input iterator: " << endl;
    // INPUT ITERATORS WON'T ALLOW US TO CHANGE ELEMENT, we cannot do that using this
    // vi.begin returns pointer SO USE *it to show on console.
    for (it = vi.begin(); it < vi.end(); ++it) {
        cout << *it << ' ';
    }
    cout << endl << endl;
    
    
    // output iterator
    cout << "output iterator: " << endl;
    // To change the element we need to use output iterator
    vector<int>::iterator start =  vi.begin();
    vector<int>:: iterator end = vi.end();
    for (it = start; it < end; ++it) {
        *it = (*it)*2 + 1;
        cout << *it << ' ';
    }
    cout << endl;
    cout << vi[3] << endl << endl;  // now vi = 3, 5, 7, 9, 11
    
    
    // reverse reading
    for (it = end-1; it >= start; --it) {
        cout << *it << ' ';
    }
    
    
    return 0;
}
