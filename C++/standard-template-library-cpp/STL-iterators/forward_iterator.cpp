#include<iostream>
#include<forward_list>
using namespace std;

int main(int argc, char **argv) {
    cout << "\n\n";
    // init
    forward_list<int> li = {1, 2, 3, 4, 5};
    forward_list<int>:: iterator it;
    
    // forward iteration.
    cout << "content: { ";
    for (it = li.begin(); it != li.end(); ++it) {
        cout << *it << ' ';
    }
    cout << "};\n\n";
    
    /*
    
    cout << "content: { ";
    for (it = li.end(); it != li.begin(); --it) {
        cout << *it << ' ';
    }
    cout << "};";
    
    NOTE: this is called forward linked list,
    it doesn't allow it's iterator to go backword;
    here in LOOP, --it is the only thing which does't allow
    to go back. that's why we cannot use this backword loops here.
    
    */
    // Ranged based for loop;
    cout << "using ranged based for loop: \ncontent { ";
    for (int i: li) {
        cout << i << ' ';
    }
    cout << "};\n";
    

    cout << "\n\n";
	return 0;
}