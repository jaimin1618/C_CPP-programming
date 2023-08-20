#include<iostream>
#include<functional>
#include<vector>
#include<algorithm>
using namespace std;

template <typename T>
void dispv(vector<T> &vi) {
    if (vi.empty()) return;
    cout << "content: { ";
    for (T ele: vi) { cout << ele << ' '; }
    cout << "};\n";
}



// main -----------------------------------------------------------
int main(int argc, char **argv) {
    vector<int> vi = {2, 4, 2, 5, 2, 8, 3};
    vector<int> vi2 = {5, 3, 7, 2, 6, 8, 4};
    vector<int> out(vi.size(), 0);
    /*
    using arithmatic functors;
    plus<>,
    minus<>,
    multiplies<>,
    divides<>,
    modulus<>
    negate<> __ UNERY (gives negative of int nums)
    */
    plus<int> plus;
    transform(vi.begin(), vi.end(), vi2.begin(), out.begin(), plus);
    dispv(out); // { 7 7 9 7 8 16 7 };
    

    return 0;
}
//-----------------------------------------------------------------
