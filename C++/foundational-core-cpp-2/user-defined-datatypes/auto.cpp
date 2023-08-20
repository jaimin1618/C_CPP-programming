#include <iostream>
#include <vector>
using namespace std;

auto function(int num) {
    cout << num;
    return num*2;
    // if you don't initially know what to return use auto
}



int main(int argc, char const *argv[]) {
    // AUTO IN C++ is like let in javaScript and dynamic language
    auto x = 123;
    auto y = "jaimin";
    auto p = 'X';
    auto d = 102.232;
    // auto y = "SHOUD BE CHANGED";
    // auto d = 12345.43
    cout << sizeof(x) << ' ' << sizeof(y) << ' ' << sizeof(p) << ' ' << sizeof(d) << endl;
    
    
    
    // ACTUAL USE OF AUTO, WHEN WE DON'T WANT TO USE ACTUAL TYPE OF DATA
    vector<int> vi = {1, 2, 3, 4, 5};
    for (vector<int>::iterator it = vi.begin(); it != vi.end(); ++it) {
        cout << *it << '\t';
    }
    cout << endl;
    // THAT'S WHY AUTO IS SO USEFUL AND POWERFUL TO USE
    for (auto i = vi.begin(); i != vi.end(); ++i) {
        cout << *i << '\t';
    }
    
    // MOST CONVENIENT WAY OF DOING THIS...
    for (auto i : vi) {
        cout << i << '\t';
    }

    return 0;
}