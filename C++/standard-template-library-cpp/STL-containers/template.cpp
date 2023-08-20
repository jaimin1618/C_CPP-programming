#include <iostream>
#include <vector>
using namespace std;

// how we can use template to print vector elements
template <typename T> // IT IT DOES IS, REPLACES T WITH, PROVIDED <type> when we init an object.
void printv(vector<T> &vec) {
    
    if (vec.empty()) return; // do NOTHING.
    cout << "Content of vector container are: " << endl;
    for (T &i: vec) cout << i << ' ';
    cout << "\n\n";
    
    /*
    VERY IMPORTANT:
    IF YOU SAY, const vector<T> &vec >>> THEN YOU HAVE TO SAT, const T &i : vec
    because, you made VECTOR to constant, but you are saying ELEMENTS are not constant
    THIS WILL CREATE ERROR.
    
    OPTIONS ARE, either both of them are constant OR none of them are const.
    */
}


int main(int argc, char* argv[]){
    vector<int> vec = {1, 2, 3, 4, 5};
    printv(vec);
    

    return 0;
}