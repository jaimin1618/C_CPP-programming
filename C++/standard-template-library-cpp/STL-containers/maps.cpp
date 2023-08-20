// KEY VALUE PAIR
#include<iostream>
#include<map>
using namespace std;

template <typename T1, typename T2>
void printPair(pair<T1, T2> &P) {
    cout << P.first << " : " << P.second << endl;
}

template <typename T>
void printMap(T &M) {
    if (M.empty()) return;
    for (auto m: M) printPair(m);
}

void msg(const char *s) { cout << s; }

// main()
int main() {
    cout << "\n\n";
    msg("initializing map: \n");
    map<string, int> mapstr = {
        {"Jaimin", 8},
        {"Jake", 5},
        {"cipher", 1}
    };
    cout << "size: " << mapstr.size() << endl;
    
    // accessing key:values;
    printMap(mapstr);
    cout << mapstr["Jake"]  << endl;
    
    // inserting
    mapstr.insert({"Max", 10});
    printMap(mapstr);
    cout << "\n";
    // findind and erasing...
    map<string, int>::iterator it = mapstr.find("Jake");
    if (it != mapstr.end()) {
        cout << "found" << endl;
        cout << "erasing...";
        printPair(*it);
        mapstr.erase(it);
        cout << "erased" << endl;
    }else {
        cout << "Not found" << endl;
    }

    
    cout << "\n\n";
    return 0;
}