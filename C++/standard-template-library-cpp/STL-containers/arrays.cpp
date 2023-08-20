#include <iostream>
#include <array>
using namespace std;

// STL ARRAY TYPE IS FIXED SIZE SEQUENCE CONTAINER;
// YOU CANNOT CHANGE SIZE OF ARRAY.
template<typename T, size_t N>
void printa(array<T, N> &arr) {
    cout << "content: { ";
    for (T &i: arr) cout << i << ' ';
    cout << "}\n\n";
}
void msg(const char *s) { cout << s; }


int main(int argc, char* argv[]){
    cout << "\n\n";
    
    msg("initialization of array: \n");
    array<int, 5> arr = {1, 3, 5, 7, 9};
    printa(arr);
    
    msg("using ctor(params...): \n");
    array<string, 3> arr2({"A", "B", "C"});
    printa(arr2);
    
    // checking SIZE OF ARRAY.
    cout << "size of arr1: " << arr.size() << endl;
    cout << "size of arr2: " << arr2.size() << endl << endl;;
    
    // Random access is possible and easy
    for (int i = 0; i < arr2.size(); ++i) {
        cout << arr2[i] << " has " << arr[i] << " balloons" << endl;
    }

    cout << "\n\n";
    return 0;
}