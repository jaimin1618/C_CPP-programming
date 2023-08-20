#include<iostream>
using namespace std;

// main -----------------------------------------------------------
int main(int argc, char **argv) {
    
    int *ap[3] = {NULL}; // {ptr1, ptr2, ptr3};
    int X[]{1, 2, 3};
    int Y[]{4, 5, 6};
    int Z[]{7, 8, 9};
    
    ap[0] = X; // ap[0] -> {1, 2, 3}..
    ap[1] = Y;
    ap[2] = Z;
    
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            // NOTE here you are using **((ap + i) + j)
            printf("ap[%d][%d] = %d\n", i, j, ap[i][j]);
            printf("ap[%d][%d] = %d\n", i, j, *(*(ap + i) + j));
        }
    }

    return 0;
}
//-----------------------------------------------------------------
