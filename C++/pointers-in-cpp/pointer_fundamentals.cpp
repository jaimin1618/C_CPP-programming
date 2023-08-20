#include<iostream>
using namespace std;

void pointers_very_basics() {
    int X = 10;
    void *ptr = NULL; // void pointer
    ptr = &X;
    cout << "address of X is: " << ptr << endl;
    cout << "address of ptr is: " << &ptr << endl;
    cout << *((int *)ptr) << " or " << ((int *)ptr)[0] << endl;
    *(int *)ptr = 17;
    cout << *((int *)ptr) << " or " << ((int *)ptr)[0] << endl;
    // you can also use PTR[0] = *ptr
}

void pointer_arithmatic() {
    int temp = 100;
    int *ptr = NULL;
    ptr = &temp;
    cout << "address of temp: " << &temp << endl; // 0x61fde4
    cout << "address where pointer is pointing: " << ptr << endl; //  0x61fde4
    cout << "address before pointed address: " << ptr - 1 << endl; // 0x61fde0
    cout << "address after pointed address: " << ptr + 1 << endl; // 0x61fde8
}

void pointer_types() {
    int integer = 10;
    char character = 'A';
    int* ip = &integer;
    char* cp = &character;
    void* vp;
    
    cout << ip[0] << ' ' << cp[0] << endl;
    
    vp = &integer;
    cout << ((int*)vp)[0] << endl;
    vp = &character;
    cout << ((char*)vp)[0] << endl;
    
    cout << "using void pointer for unknown array type: " << endl;
    int arr[] = {1, 2, 3, 4, 5};
    vp = arr;
    for (int i = 0; i < 5; ++i) cout << ((int *)vp)[i] << ' ';
}

void ptr_to_ptr() {
    int X = 100;
    int* p = &X;
    int** pp = &p;
    int*** ppp = &pp;
    cout << &X << ' ' << &p << ' ' << &pp << ' ' << &ppp << endl;
    cout << *ppp << ' ' << **ppp << ' ' << ***ppp << endl;
    cout << X << ' ' << *p << ' ' << **pp << ' '<< ***ppp << endl;
}
// main -----------------------------------------------------------
int main(int argc, char **argv) {
    // pointers_very_basics();
    // pointer_arithmatic();
    // pointer_types();
    // ptr_to_ptr();
    
    





    return 0;
}
//-----------------------------------------------------------------
