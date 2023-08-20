#include<iostream>
#include<cmath>
#include<cstdlib>
using namespace std;

// MAIN USE CASE IS: function pointers can be passed as an argument to another function
void sayHello() {
    cout << "\nHello, world\n";
}

void getHelloMessage(void (*vfp)()) {
    // passing function pointer as param
    // running given function;
    vfp();
}

int forIncreasingOrder(int a, int b) {
    return a > b ? 1:-1;
}
int forDeacreasingOrder(int a, int b) {
    return a < b ? 1:-1;
}
int absoulute_compare(int a, int b) {
    return abs(a) > abs(b) ? 1 : -1;
    
}


// ------------ WE HAVE TO DO THIS BECAUSE QSORT FUNCTION ONLY TAKE VOID POINTER IN ARGS-----
int absoulute_compare(const void *a, const void *b) {
    return abs(*((int *)a)) - abs(*((int *)b));
    
}
int forIncreasingOrder(const void* a, const void* b) {
    return *((int *)a) - *((int *)b);// SORT IN INCREASING ORDER
}
int forDeacreasingOrder(const void* a, const void* b) {
    return *((int *)b) - *((int *)a); // DECREASING SORT
}


// USING FUNCTION POINTER ACTULLY
void bubble_sort(int arr[], const int &N, int (*compare)(int, int)) {
    // passing function inside function
    
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N - 1; ++j) {
            if (compare(arr[j], arr[j + 1]) > 0) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    
}

// main -----------------------------------------------------------
int main(int argc, char **argv) {
    
    getHelloMessage(sayHello); // passing another function inside function
    
    /*
    USE CASE OF FUNCTION POINTER; LET'S SAY WE WANT SORT IN INCREASING/DECREASING ORDER
    BASED ON CERTAIN CONDITION, AND WE DON'T WANT TO DUPLICATE OUR CODE
    SO
    */
    const int N = 5;
    int arr[] = {4, 1, 5, 2, 3};
    bubble_sort(arr, N, forIncreasingOrder); cout << "Increasing order: \n";
    for (int i = 0; i < N; ++i) cout << arr[i] << ' ';
    cout << "\n";
    
    bubble_sort(arr, N, forDeacreasingOrder); cout << "decreasing order: \n";
    for (int i = 0; i < N; ++i) cout << arr[i] << ' ';
    cout << "\n";
    
    const int M = 5;
    int arr_2[] = {-3, -1, 2, -5, 4};
    bubble_sort(arr_2, M, absoulute_compare); cout << "abosolute order: \n";
    for (int i = 0; i < M; ++i) cout << arr_2[i] << ' ';
    cout << "\n";
    
    
    // USING QSORT, syntax(arr[], N, sizeof(ele), functionCompare); // REDUCE OF JAVASCRIPT
    cout << "\nUsing Qsort: \n";
    qsort(arr, N, sizeof(int), forIncreasingOrder);
    for (int i = 0; i < N; ++i) cout << arr[i] << ' '; cout << "\n";
    
    
    qsort(arr, N, sizeof(int), forDeacreasingOrder);
    for (int i = 0; i < N; ++i) cout << arr[i] << ' '; cout << "\n";
    
    
    qsort(arr_2, M, sizeof(int), absoulute_compare);
    for (int i = 0; i < M; ++i) cout << arr_2[i] << ' '; cout << "\n";
    


    return 0;
}
//-----------------------------------------------------------------
