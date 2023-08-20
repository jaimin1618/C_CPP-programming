#include <iostream>
#include <cstdio>
using namespace std;

/*
in C++ it is possible to get address of function and assign it to pointer
it is called function pointer.
// SYNTAX: typeofFunction (*fptr)() = func;
OR
typeofFunction (*fptr)() = &func;
and then use it >> fp() directly
*/
void func() {
    puts("This is func()");
}

// NOTE THIS CODE IS INCOMPLETE SO, DON'T TRY TO UNDERSTAND

void fa() { puts("This is fa()"); }
void fb() { puts("This is fb()"); }
void fc() { puts("This is fc()"); }
void fd() { puts("This is fd()"); }
void fe() { puts("This is fe()"); }
void ff() { puts("This is ff()"); }

void (*funcs[])() = {fa, fb, fc, fd, fe, ff, nullptr}; // nullptr to end
// this is *ptr[3] >>> [ptr1, ptr2, ptr3] >>> ptr1 points to fa function..
// and when you do (*ptr[0])() >>> this means function pointer to function 0th


int main() {
    // SYNTAX: typeofFunction (*fptr)() = func;
    void (*fptr)() = func;
    puts("This is main()");
    fptr();

    cout << endl << endl;
    cout << "USING FUNCTION POINTER TO RUN MULTIPLE FUNCTION.\n";
    return 0;
}