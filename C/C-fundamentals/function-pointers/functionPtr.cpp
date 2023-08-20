#include<iostream>
using namespace std;

void print_it() {
    cout << "SEE MY ADDRSSS USING printf" << endl;
}

void print_this() {
    cout << "MSG: message" << endl;
}
    
int sum(int a, int b) {
    return a + b;
}

int sum_up(int N, int arr[]) {
    
    int sum = 0;
    for (int i = 0; i < N; ++i) {
        sum += arr[i];
    }
    return sum;
    
}



// main -----------------------------------------------------------
int main(int argc, char **argv) {
    
    printf("%p\n", main);  // 00000000004015a4 ADDRESS OF MAIN FUCNTION
    printf("%p\n", print_it); // main | print_it ARE FUNCTION ADDRESS

    // DECLARING FUNCTION POINTER;
    
    void (*vfp)(); // VOID FUNCTION POINTER
    vfp = print_it;
    vfp(); // CALLING print_it;
    vfp = print_this;
    vfp(); // CALLING print_this;
    
    // int fp;
    int (*ifp)(int, int); // ALL THESE TYPE OF FUNCTION CAN BE POINTED
    ifp = sum;
    cout << "10 + 20 = " << ifp(10, 20) << endl;
    
    
    int (*ffp)(int, int[]);
    ffp = sum_up;
    int arr[]{2, 1, 4, 6, 3};
    cout << "SUM OF ELEMENT: " << ffp(5, arr) << endl;
    
    return 0;
}
//-----------------------------------------------------------------
