#include<iostream>
#include<functional>
#include<vector>
#include<algorithm>
using namespace std;

template <typename T>
void dispv(vector<T> &vi) {
    if (!vi.size()) return;
    cout << "content: {";
    for (T ele: vi) { cout << ele << ", "; }
    cout << "};\n\n";
}


// main -----------------------------------------------------------
int main(int argc, char **argv) {
    vector<int> vi = {1, 0, 0, 1, 0};
    vector<int> vi2 = {0, 1, 0, 0, 1};
    vector<int> out(vi.size(), 0);
    
    /*
    logical operators on vectors...
    - logical_and,
    - logical_or,
    - logical_not,
    - logical_xor,
    - logical_nand
    */
    
    logical_and<int> AND;
    transform(vi.begin(), vi.end(), vi2.begin(), out.begin(), AND);
    dispv(out);

    logical_or<int> OR;
    transform(vi.begin(), vi.end(), vi2.begin(), out.begin(), OR);
    dispv(out);

    logical_not<int> NOT;
    transform(vi.begin(), vi.end(), out.begin(), NOT);
    dispv(out);
    
    return 0;
}
//-----------------------------------------------------------------
