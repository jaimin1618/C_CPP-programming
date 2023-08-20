#include<iostream>
#include<vector>
#include<string>
#include<map>
using namespace std;

// NOTE: USE size_t instead of others like int, char ... it increases efficiency
// main -----------------------------------------------------------
int main(int argc, char **argv) {
    // vector;
    vector<int> vec({1, 2, 3, 4, 5});
    for (int i: vec) {
        cout << i << ' ';
    }
    cout << '\n';
    
    // un-initialized array;
    for (int var : {1, 2, 3, 4, 5}) {
        cout << var << ' ';
    }
    cout << '\n';
    
    // new initialization of array;
    int arr[]{1, 2, 3, 4, 5}; // USE THIS FOR ARRAY INIT
    for (int a: arr) {
        cout << a << ' ';
    }
    cout << '\n';
    int arr2[] = {1, 2, 3};
    for (int i: arr2) cout << i << ' ';
    cout << '\n';
    
    // iterate over string:
    string str{"I AM JAIMIN__CHOKHAWALA"}; // DO INIT THIS WAY
    for (auto ch: str) {
        cout << ch << "<-";
    }
    cout << '\n';
    
    int a[10]{-1}; // THIS INITIALIZATION WILL MAKE ALL ELEMENT ZERO DEFAULT
    for (int i: a) { cout << i << '\n'; }
    cout << endl;
    
    // map iteration
    map<int, string> myTeam({{1, "Jaimin"}, {2, "Jake"}, {3, "Max"}, {4, "Sam"}});
    for (pair<int, string> ndx: myTeam) {
        cout << ndx.first << " => " << ndx.second << endl;
    }
    
    
    
    
    
    return 0;
}
//-----------------------------------------------------------------
