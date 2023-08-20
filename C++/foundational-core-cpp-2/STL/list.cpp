#include <iostream>
#include <list>
using namespace std;
/*
List is one type of VECTOR which is fully optimized for SPEEDY INSERT AND DELETE OPERATIONS
AND MOST IMPORTANTLY IT DOES NOT SUPPORT RANDOM ACCESS TO ELEMENT
like list[4] >>> NOT POSSIBLE
*/
int main(int argc, char const *argv[]) {
    // init
    list<int> li = {1, 2, 3, 4, 5};
    
    // simple methods
    cout << li.size() << ' ' << li.front() << ' ' << li.back() << endl;
    li.push_back(1000);// push 1000 at last index + 1
    cout << li.back() << endl; // 1000
    
    // range based for loop
    for (int &i : li) {
        // i += 2; THIS CAN CHANGE ELEMENTS VALUE.
        cout << i << endl;
    }
    
    // INSERT AND ERASE, you have to LOOP through iterators because list doesn't allow random access.
    // 1 2 3 4 5 1000 inserting 786 before 3.
    // IT'S VERY DIFFERENT TO INSERT OR DELETE FROM LIST SEE...
    list<int>::iterator it = li.begin();
    while ((*(++it) != 3) && (it != li.end()));
    if (it != li.end()) {
        cout << "insert 786 before 3." << endl;
        li.insert(it, 786);
    }
    for (int i : li) cout << i << endl;    // 1 2 786 3 4 5 1000
    it = li.begin();
    li.insert(it, 121);
    for (int i : li) cout << i << endl;    // 1 2 786 3 4 5 1000
    
    // erasing 786;
    it = li.begin();
    while ((*(++it) != 786) && (it != li.end()));
    if (it != li.end()) {
        li.erase(it);
    }
    for (it = li.begin(); it != li.end(); ++it) cout << *it << ' ';  // 121 1 2 3 4 5 1000
    
    
    
    
    return 0;
}