#include<iostream>
#include <cstdio> // to work with precisions
#include <cmath>
using namespace std;

// use float absolute fabs() INSTEAD abs()
bool compare_float(float a, float b, float epsilon = 0.01f) {
    if (fabs(a - b) < epsilon) {
        return true;
    }
    return false;
}



int main(int argc, char const *argv[]) {
    float f = 7e4;
    double d;
    long double ld; // 128 bits
    cout << f << endl;
    cout << sizeof(f)*8 <<' '<< sizeof(d)*8 << ' ' << sizeof(ld)*8 << endl;
    
    /*
    NOW WORKING WITH SCALE & PRECISION of floating points.
    SCALE ~ how many number should we use >>> 5.0113, if scale is 2 then >> 5.0 is answer
    PRECISION ~ how many numbers after . >>> 5.1213, if precision is 2 then >> 5.12 is answer, here scale is 3
    
    THERE CAN BE BIG AND LOTS OF ERROR, IF YOU DON'T USE PRECISION AND SCALE IN C++, REMEMBER IS NOT PYTHON
    */
    // code for precision and scale;
    f = 0.1 + 0.1 + 0.1; // it must be 0.3 BUT...
    cout << endl;
    f == 0.3 ? cout << "YES" : cout << "NO"; //NO
    cout << endl;
    // see why ??
    printf("%1.10f", f); // f = 0.3000000119 != 0.3,
    
    // let's do more precision by double
    d = 0.1 + 0.1 + 0.1;
    cout << endl;
    d == 0.3 ? cout << "TRUE" : cout << "FALSE" ;
    cout << endl;
    printf("%1.30f\n", d); // 30 decimal points precision  0.300000000000000044408920985006 != .3
    
    cout << "HOW TO DO PRECISION CHECK ? " << endl;
    cout << floor(d) <<endl;
    
    // SEE HOW WE COMPARE IN C/C++ ...
    cout << compare_float(f, d) << endl; // 1 MEANS TRUE ... WAY TO COMPARE FLOATS 
    
    
    
    
    
    
    return 0;
}