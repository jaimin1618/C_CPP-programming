#include<iostream>
using namespace std;

// main -----------------------------------------------------------
int main(int argc, char **argv) {
    
    // VOID POINTER == GENERIC POINTER; YOU CAN USE IT WITH ANY TYPE
    // YOU CANNOT DEREFERENCE VOID POINTER;
    // USE CASTING TO DEREFERENCE VALUE
    
    int x = 100;
    void *vp;
    vp = &x; // valid
    
    // cout << *vp << endl // ERROR, YOU CANNOT USE VOID POINTER FOR DEREFERENCING
    // USE;
    cout << *((int *)vp) << endl << endl;
    
    // LET'S SAY YOU DON'T KNOW WHAT IS IN THE ARRAY
    int arr[]{1, 2, 3, 4, 5};
    string sa[]{"one", "two", "three", "four", "five"};
    void *va;
    for (int i = 0; i < 5; ++i) {
        va = arr;
        cout << ((int *)va)[i] << endl;
        va = sa;
        cout << ((string *)va)[i] << endl;
        // I AM USING SAME POINTER TO DEREFERENCE ANOTHER TYPE OF ARRAY
    }


    return 0;
}
//-----------------------------------------------------------------
