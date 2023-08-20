#include<iostream>
#include<vector>
#include<algorithm>  /* HERE IS TRANSFORM*/
#include <cmath>
using namespace std;

// The transform() function in C++ sequentially applies an operation,
// to the elements of an array(s) and then stores the result in another output array.
// Generally transformations are used to perform and change the container elements

// declaring our own class
// this "accum" - class, just adds numbers into predifined private variable.
// init var = 0 >>> obj(5) >>> var = 5 >>> obj(10) >>> var = 15; >>> ...
template <typename T>
void dispv(vector<T> &vi);


float doRoot(int num) {
    return sqrt(num);
}
// C/C++ do not allow to defined functions inside function (like JAVASCRIPT)
void mapping_in_cpp() {
    // APPLYING FUNCTION ON DATA
    vector<int> squares;
    // giving data;
    for (int i = 0; i <= 100; ++i) squares.push_back(pow(i, 2));
    dispv(squares);
    
    
    vector<int> roots(squares.size());
    transform(squares.begin(), squares.end(), roots.begin(), doRoot);
    cout << "\n\n\n";
    dispv(roots);
}

template <typename T>
class accum {
    accum(){};
public:
    T _acc = 0;
    accum(T n): _acc(n){}
    T operator() (T y) {
         _acc += y;
         return _acc;
    }
    void getVarVal() {
        cout << "current value is: " << _acc << endl;
    }
};
// display vector: to display elements inside vector.

// main -------------------------------------------------------------
int main(int argc, char **argv) {
    // FUNCTION OF TRANSFORMATION
    accum<int> func(7);  // _acc = 7;
    cout << func(10) << endl; // _acc = 17;
    
    // DATA FOR TRANSFORMATION
    vector<int> vi = {1, 2, 3, 4, 5};
    dispv(vi); // {1, 2, 3, 4, 5};
    
    // USE OF TRANSFORM:
    
    // init of new vector
    vector<int> vi2(vi.size());
    dispv(vi2);  // {0, 0, 0, 0, 0}
    // changing elements of VI2 vecots BASED ON FUNCITON + DATA
    transform(vi.begin(), vi.end(), vi2.begin(), func);  // THIS IS LIKE MAPING
    dispv(vi2); // { 18 20 23 27 32 }
    
    mapping_in_cpp();
    return 0;
}
// -----------------------------------------------------------


template <typename T>
void dispv(vector<T> &vi) {
    if (!vi.size()) return; // if size == 0.
    cout << "content: { ";
    for (T ele: vi) {
        cout << ele << ' ';
    }
    cout << "};\n\n";
}






