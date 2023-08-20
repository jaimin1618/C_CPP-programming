#include <iostream>
using namespace std;

int main() {
    // int ptr[3]  Normal array
    int *ptr[3]; // each element of arr ptr is int pointer
    cout << sizeof(ptr[0]); // int pointer has size 8
    
    // We need pointer to work with pointer to pointer
    int **k = NULL;  // P TO P
    k = ptr;
    
    int X[] = {1, 2, 3};
    int Y[] = {10, 20, 30};
    int Z[] = {100, 200, 300};
    
    ptr[0] = X;
    ptr[1] = Y;
    ptr[2] = Z;   // k -> ptr[0] -> X[0] >>> k[i][j]
    cout << endl;
    for (int i = 0; i < 3; i++ ) {
        for (int j = 0; j < 3; j++) {
            cout << ((ptr + i)+j) << ' ' << k[i][j] << '\t'; // ~ *(*(p+i) + j)
        }
        cout << endl;
    }
    return 0;
}