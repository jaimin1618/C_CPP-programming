// INTRO
/*
CONTAINERS BY STL

1. vector
2. lists & linked lists
3. Set
4. Map ~ Dictionary
5. Stack(LIFO), Queue(FIFO) and deque(Double ended)
6. string ~ like python string datatype
7. IO stream for files and IO devices
*/
#include <iostream>
#include <vector> // IT IS OO ARRAY WITH EXTRA COOL FEATURES
using namespace std;

int main(int argc, char const *argv[]) {
    // init
    vector<int> vi = {1, 2, 3, 4, 5};
    cout << vi.size() << ' ' << vi.front() << ' ' << vi.back() << endl;
    // iteration ~ vector library provides iterator class to iterate over eles , this class must be imported
    
    vector<int>::iterator itBegin = vi.begin(); // IT RETUENS ITERATOR POINTER
    vector<int>::iterator itend = vi.end();
    // YOU CAN ASLO USE AUTO INSTEAS vector  vector<int>::iterator
    for (vector<int>::iterator it = itBegin; it < itend; ++it) {
        // use auto insteas vector<int>::iterator
        cout << *it << ' ';
    }
    cout << endl;
    // OR RANGE BASED FOR LOOP
    for (auto &i : vi) {
        // USE &i it will take reference, otherwise your changes will not be accepted
        cout << i << ' ';
    }
    cout << endl <<  endl;
    
    // INSERT METHOD OF VECTOR
    cout << "Inserting 7 at index = 3" << endl;
    vi.insert(vi.begin()+3, 7); // NOTE VI.begin() = 0 ALWAYS, and vi.end() = N-1
    cout << vi[3] << endl;
    cout << "Size of vi after inserting element: " << vi.size() << endl; // AUTOMATICALLY INCREASES SIZE;
    cout << endl;
    
    // ERASE METHOD OF VECTOR
    cout << "Erasing 5 at index = 5" << endl;
    vi.erase(vi.begin()+5);
    cout << vi[5] << endl; // 4 will be removed now >>> 1, 2, 3, 7, 4 .. size will now size = 5
    cout << endl;
    
    // Push method like STACK use LIFO
    cout << "Push 1000 at last index:" << endl;
    vi.push_back(1000);
    cout << vi[vi.size() - 1] << endl; // 1000 at last
    cout << endl;
    
    
    // ANOTHER WAY TO INIT vector
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    int len = sizeof(arr) / sizeof(arr[0]);
    cout << "Making vector from array." << endl;
    vector<int> vi2(arr, arr + len); // pointer to first and last base in argument
    // looping
    for (auto &i : vi2) {
        cout << i << '-';
    }
    cout << endl <<  endl;
    
    // VECTOR OF STRING, YOU CAN USE ANY TYPE
    cout << "Vector strings" << endl;
    vector<string> vs = {"one", "two", "three", "four", "five"};
    for (string &s : vs) {
        cout << s << '\\';
    }
    
    return 0;
}