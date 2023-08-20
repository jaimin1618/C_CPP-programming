#include<iostream>
using namespace std;

// we will talk about, how pointer can be use to store address of function and use them
// what function does: IT RETURNS POINTER TO FIRST LIKE OF FUNCTION FOR EXECUTION

inline int add(int a, int b) {
    return a + b;
}

inline void printHello(const char *name) {
    cout << "say hello to, " << name << endl;
}


// main -----------------------------------------------------------
int main(int argc, char **argv) {
    // making function pointer syntax: returnType (*ptr)(parans);
    int (*fp)(int, int);
    fp = add; // OR &add;
    int ans = fp(10, 20); // OR (*fp)(10, 20);
    cout << ans << endl;
    
    void (*vfp)(const char*) = printHello;
    vfp("Jaimin");
    




    return 0;
}
//-----------------------------------------------------------------
