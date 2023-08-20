#include <iostream>
#include <cstdarg> /* stdarg.h >> variadic argument library */
using namespace std;

double average(const int count, ...) {
    
    va_list ap; //  // array pointer to base
    double total = 0.0;
    
    /*
    now you need to do
        va_start(ap, count)
        LOOPS;
        va_end(ap)
    */
    va_start(ap, count);
    for (int i = 0; i < count; ++i) {
        total += va_arg(ap, double);// base, type of ele
    }
    va_end(ap); // this tells to stop unpackaging
    return total / count;
    
}


int main() {
    double avg = average(5, 1,2,3,4,5);
    cout << avg;
    
    return 0;
}