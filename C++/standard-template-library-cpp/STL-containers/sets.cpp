// ONLY UNIQUE ELEMENT, SORTED

#include <iostream>
#include <set>  // ORDERED
#include <unordered_set>  /* UNORDERED */
using namespace std;

template <typename T>
void printSet(T &s) {
    if(s.empty()) return;
    for (auto x: s) cout << x << ' ';
    cout << "\n\n";
}

void msg(const char *s) { cout << s; }


int main(){
    // init of set;
    msg("this is initialization of set: \n");
    set<string> set1 = {"one", "two", "three"};
    // use multiset for duplicates,
    // use unordered_set for unordered list of set
    // it uses hashes to fine element (UNORDERED SET)
    // unordered set are very good with HASHED SEARCHED, faster searching
    cout << "size: " << set1.size() << endl;
    msg("see this set is ordered: \n");
    printSet(set1);  // one three two
    
    msg("inserting 'six': \n");
    set1.insert("six");
    printSet(set1);
    
    msg("finding and erasing six: \n");
    set<string>::iterator it = set1.find("six");
    if (it != set1.end()) {
        cout << "erasing..." << *it << endl;
        set1.erase(it);
    }else { cout << "cannot find" << endl; }
    
    printSet(set1);  // one two three
        

    return 0;
}