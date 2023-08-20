#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// diplaying vector;
template <typename T>
void dispv(vector<T> &vi) {
    if (!vi.size()) return;  // if size == 0, return
    cout << "content: { ";
    for (T ele: vi) { cout << ele << ' '; }
    cout << "};\n";
}

int strsz(const string &s) {
    return s.size();
}


// main -----------------------------------------------------------
int main(int argc, char **argv) {
    int accum = 10;
    // LAMBDA FUNCTION GIVEN BELOW,
    auto LAMBDA = [accum](int d) mutable->int { return accum += d; };
    // using LAMBDA alone;
    cout << LAMBDA(1000) << "\n\n";
        
    vector<int> vi = {1, 2, 3, 4, 5};
    dispv(vi);
    
    // APPLYING LAMBDA FUNCTION USING transformation.
    vector<int> vi2(vi.size());
    transform(vi.begin(), vi.end(), vi2.begin(), LAMBDA);
    dispv(vi2);
    
    // BETTER WAY OF USING TRANSFORMATION AND LAMBDA;
    int X = 1000;
    vector<int> nvi = {10, 20, 30, 40, 50};
    vector<int> nvi2(nvi.size());
    // JavaScript  version of C++
    transform(nvi.begin(), nvi.end(), nvi2.begin(), [&X](int num) mutable->int {
        return X += num;
        /*
        IF YOU DON'T WANT TO CHANGE VALUE OF X, REMOVE &X ---> X;
        X = 1000 + 10 = 1010 (first element);
        X = 1010 + 20 = 1030 (second element);
        ...
        X = 1150 (last element);
        */
    });
    dispv(nvi2);
    cout << "After processes, X = " << X << endl << endl << endl;
    
    
    // TRANSFORMATION  & LAMBDA & STRING..
    vector<string> vs = {"one", "two", "three", "four", "five"};
    dispv(vs);
        
    // we will store string sizes here.
    vector<int> str_size(vs.size());
    vector<int> str_size_func(vs.size());

    // using transform to get sizes of string in str_size;
    // THIS IS TRUE MAPPING, ONLY APPLYING FUNCTION ON DATA, WITHOUT VARIABLE
    transform(vs.begin(), vs.end(), str_size.begin(), [](const string &s) -> int {
        return s.size();
    });
    
    transform(vs.begin(), vs.end(), str_size_func.begin(), strsz); // ANOTHER WAY.
    /*
    MAP SYNTAX:
    [](params...) mutable -> int { processes... return; }
    [](params...) -> int { processes... return; }
    mutable is needed when you processing data, like changing the
    actual value of data, otherwise no need to use that.
    */
    cout << "list of stirng sizes: \n";
    dispv(str_size);
    cout << "\n\n";
    
    cout << "list of string sizes, using function in mapping: \n";
    dispv(str_size_func);
    cout << "\n\n";

    return 0;
}
//-----------------------------------------------------------------

