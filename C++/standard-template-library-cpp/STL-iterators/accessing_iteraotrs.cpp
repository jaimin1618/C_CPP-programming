#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char **argv) {
    // init
    vector<int> vi = {1, 2, 3, 4, 5};
    vector<int>::iterator it;
    
    vector<int>::iterator ib = vi.begin();
    vector<int>::iterator ie = vi.end();
    
    cout << "content: ";
    for (it = ib; it < ie; ++it) { cout << *it << ' ';    }
    cout << "\n\n";
    
    // ANOTHER WAY TO DOING THIS;
    it = vi.begin();
    cout << "content: \n" ;
    for (int i = 0; i < vi.size(); ++i) {
        // HERE, WE ARE USING RANDOM ACCESS ITERATOR.
        cout << vi[i] << ' ' << it[i] << '\n'; // OR it[i] both works same
    }
    cout << endl;
	return 0;
}
