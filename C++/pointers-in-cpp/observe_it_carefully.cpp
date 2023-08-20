#include<iostream>
#include<cmath>
using namespace std;

void FirstDemoHow() {
    cout << "HOW *(ptr)[3] WORKS\n";
    int (*p)[3] = NULL;  // pointing to an array of size three (having 3 cols)
    
    int demo[3] = {100, 200, 300};
    
    p = &demo;
    // because this (*p)[3] see array just like normal pointer see int variable
    for (int i = 0; i < 3; ++i) cout << *(*p + i) << ' ';
    
}


// main -----------------------------------------------------------
int main(int argc, char **argv) {
    // we will cover difference btw, *ptr[3] AND (*ptr)[3]
    FirstDemoHow();
    
    cout << endl;
    const int R = 2;
    const int C = 3;
    int arr[R][C]{0};
    for (int i = 0; i < R; ++i) { for (int j = 0; j < C; ++j) {arr[i][j] = pow(i, 2) + pow(j, 2) + 1;}};
    
    for (int _ = 0; _ < R; ++_) {
        for (int __ = 0; __ < C; ++__) {
            cout << *(*(arr + _)  + __) << ' ';
        }
        cout << endl;
    }
    






    return 0;
}
//-----------------------------------------------------------------
