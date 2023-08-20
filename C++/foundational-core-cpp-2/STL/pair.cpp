#include <iostream>
#include <utility> // here is pair
#include <vector>
using namespace std;
/*
To store two numbers
*/
int main(int argc, char const *argv[]) {
    // init
    pair<int, int> p = {0, 1};
    pair<int, string> p2 = {7, "Jaimin"};
    
    // accessing elem
    cout << p.first << ' ' << p.second << endl;
    
    vector<int> vi = {1, 2, 3};
    vector<pair<int, int>> mutant = {{1, 0}, {0, 1}}; // you can do this also
    
    return 0;
}