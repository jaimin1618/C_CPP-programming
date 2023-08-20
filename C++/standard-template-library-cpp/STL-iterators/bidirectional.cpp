#include <iostream>
#include<set>
using namespace std;

int main(int argc, char **argv) {
    // inits
    set<int> is = {1, 3, 2, 5, 4};
    set<int>::iterator it;
    
    // forward:
    cout << "content: { ";
    for (it = is.begin(); it != is.end(); ++it) cout << *it << ' ';
    cout << "};\n\n"; // IT WILL SORT ALL ELEMENT IT SELF.
 
    /*
    THIS DOESN'T WORK AS EXPECTED, BECAUSE IT DOESN'T ALLOW SET.END()-1
    // backward:
    cout << "content: { ";
    for (it = is.end() - 1; it != is.begin(); --it) cout << *it << ' ';
    cout << "};"; // IT WILL SORT ALL ELEMENT IT SELF.
    */
    // backward:
    cout << "content: { ";
    for (it = is.end(); it != is.begin();) cout << *--it << ' ';
    cout << "};\n\n"; // IT WILL SORT ALL ELEMENT IT SELF.
    // SIMPLE WORDS, --it HAPPENS BEFORE DEFERENCE, *it[end - 1] APPLIED
    
    // ranged base for loop:
    for (int i: is) cout << i << ' ';
    
	return 0;
}
