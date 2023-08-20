#include <iostream>
using namespace std;

int main() {
    
    int X = 110;
    int *px = &X;
    int &rx = X;
    cout << *px << ' ' << rx << endl; // 110 110
    
    // adding
    *px += 10;
    rx += 10;
    cout << X; // 130 should be answer
    
    int arr[] = {1, 2, 3};
    int *pa = arr; // &(arr[0]);
    int &ra = arr[0];
    cout << endl;
    // LOOPING USING POINTER , REFERENCE... DDK how to use REFERENCE in loops
    for (int i = 0; i < 3; ++i) {
        cout << pa[i] << ' ' << endl;
    }
     
    return 0;
}