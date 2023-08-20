#include <iostream>
#include <set>
using namespace std;

// NO RANDON ACCESS, ALL UNIQUE ELEMENTS ONLY, USE BIIRECTION ITERATOR
int main(int argc, char const *argv[]) {
    // init
    set<string> strset = {"one", "two", "three", "four", "five"};
    
    // basics;
    cout << strset.size() << endl;
    
    // iteration for view only
    // five four one three two BECAUSE SET SORTS THEM ALPHABETICALLY
    for (string s : strset) {
        cout << s << ' ';
    }
    cout << endl << endl;
    
    // YOU CANNOT INSERT SOMETHING WHERE YOU WANT, IT WILL PUT IT ALPHABETICALLY.
    strset.insert("six");
    for (string s : strset) {
        cout << s << ' '; // five four one six three two
    }
    
    // Set uses find() method for replacing one element with another see..
    // find and erase element "six";
    set<string>::iterator it = strset.find("six");  // if it is not there then it will return strset.end() last element.
    if (it != strset.end()) {
        cout << "erasing ... " << *it << endl;
        strset.erase(it);
    }else {
        cout << "not found." << endl;
    }
    for (string s : strset) {
        cout << s << ' ' ; // "Six" will be removed
    }
    
    auto tryInput = strset.insert("five");
    // tryInput return PAIR of two attribute, tryInput.second(SAYS SUCCESS OR FAILED TO DO)
    if (tryInput.second) {
        cout << "Insert succeeded\n";
    }else {
        cout << "Insert failed\n";
    }
    
    
    return 0;
}