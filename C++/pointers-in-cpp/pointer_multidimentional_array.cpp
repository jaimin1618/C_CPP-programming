#include<iostream>
#include<cmath>
using namespace std;
#define endl "\n"

void normaldim() {
    cout << "1D ARRAY\n";
    int arr[] = {1, 2, 3};
    int *ip = arr;
    cout << ip[0] << ' ' << ip[2] << endl << endl;
}

void multidim() {
    cout << "2D ARRAY\n";
    int arr[2][3]{0};
    cout << "content of 2D array: " << '\n';
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            arr[i][j] = pow(i, 2) + pow(j, 2);
            cout << arr[i][j] << ' ';
        }
        cout << endl;
    }
    cout << endl;
    
    // this is normal
    int *ip = arr[0];
    cout << ip[0] << ' ' << ip[2] << endl; // RIGHT !!!
    
    // now we want it for entire array
    int *ap[2];
    ap[0] = arr[0];
    ap[1] = arr[1];
    cout << ap[0][1] << ' ' << ap[1][2] << endl; // RIGHT !!!
    
    // *ip[3] AND (*ip)[3] checkout "observe_it_carefully.cpp"
}

void ptr_and_array() {
    int ARR[2][3] = {
        {1, 2, 3},
        {11, 12, 13}
    };
    // int *p = ARR; THIS IS INVALID, so pointer to 1D array of three integers can be, int (*p)[3] = ARR;
    cout << "address of first(ARR[0]) 1D array: " << ARR << endl;
    cout << "address of second(ARR[1]) 1D array: " << ARR + 1 << endl;
    cout << "ARR[0][1] = " << ARR[0][1] << " OR " << *(*(ARR + 0) + 1) << endl;
    cout << "printing all elements: \n";
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            printf("ARR[%d][%d] = %d AT ADDRESS = %d OR %p \n", i, j, *(*(ARR + i) + j), (*(ARR + i) + j),  (*(ARR + i) + j));
        }
    }
    
}

void passing_1D_array(int* ptr, const int N) { // OR ptr[]
    cout << "1D array: \n";
    for (int i = 0; i < N; ++i) cout << ptr[i] << ' ';
    cout << "\n\n";
}

// NOTE: you have to pass 1 dimention like this: const int N
// to recieve (int *)[3] ~ 2D array;
void passing_2d_array(int (*ptr)[3], const int N) {  // int ptr[][3] OR int (*ptr)[3];
    // OR ptr[][3] only first dimention can be left empty
    cout << "2D array: \n";
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < 3; ++j) {
            printf("ptr[%d][%d] = %d\t", i, j, ptr[i][j]);
        }
        cout << endl;
    }
    cout << "\n\n";
}

// to recieve (int *)[2][2]
void passing_3d_array(int (*ptr)[2][2], const int N) { // OR ptr[][2][2];
    cout << "3D array: \n";
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < 2; ++j) {
            for (int k = 0; k < 2; ++k) {
                printf("ptr[%d][%d][%d] = %d\t", i, j, k, ptr[i][j][k]);
            }
            cout << '\n';
        }
        cout << "\n\n";
    }
    cout << "\n\n";
}

/*
NOTE:
BEST WAY TO PASS MULTI-DIMETIONAL ARRAY IS:
where: int arr[][2][3] = int (*arr)[2][3]
(int arr[], const int length);
(int arr[][3], const int R);
(int arr[][2][3], const int X);
*/

// main -----------------------------------------------------------
int main(int argc, char **argv) {
    // normaldim();
    // multidim();
    // ptr_and_array();
    const int N = 3;
    int arr1X1[] = {1, 2, 3}; // this returns >> int*
    
    const int R = 2;
    const int C = 3;
    int arr2X3[R][C] = {{1, 2, 3}, {4, 5, 6}}; // this returns >> (int *)[3]
    
    const int X = 3;
    const int Y = 2;
    const int Z = 2;
    int arr3X2X2[3][2][2] = {  // this return >> (int *)[2][2]
        {
            {1, 2},
            {3, 4}
        },
        {
            {5, 6},
            {7, 8}
        },
        {
            {9, 10},
            {11, 12}
        }
    };
    passing_1D_array(arr1X1, N);
    passing_2d_array(arr2X3, R);
    passing_3d_array(arr3X2X2, X);

    return 0;
}
//-----------------------------------------------------------------