#include<iostream>
#include<cstdlib>
#include<cmath>
using namespace std;

int Add(int *a, int *b) {
    static int C = (*a) + (*b);  // now C is in heap, so we can return before it program exit
    cout << C << endl;
    return C;
}

// OR

int *Add_new(int *a, int *b) {
    // int* c = (int *)malloc(sizeof(int));
    int *C = new int;
    *C = (*a) + (*b);
    return C;
}


// main -----------------------------------------------------------
int main(int argc, char **argv) {
    // data
    int a = 10, b = 30;
    int p = Add(&a, &b);
    cout << "10 + 20 = " << p << endl;
    
    int x = 100, y = 300;
    int *np = Add_new(&x , &y);
    cout << "100 + 300 = " << *np << endl;

    return 0;
}
//-----------------------------------------------------------------
/*

NOTE: STACK AND HEAP BOTH ARE IN RAM (PART OF IT), DIFFERENC IS
- STACK IS ORGANIZED, LIKE STACK DATA STRUCTURE
- HEAP IS DYNAMIC ALLOCATION OF MEMORY LIKE PYTHON, JAVASCRIPT

when this function is finished inside main, IT IS DESTROYED
thus all your vars, const etc... all are destroyed before it returns them

SOLUTION CAN BE,
- use static variable, which stays until end of program OR
- use "new" for data allocation in heap
*/