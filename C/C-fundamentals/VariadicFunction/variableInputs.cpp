#include <iostream>
#include<cstdarg>
#include<cstring>
using namespace std;

float avg(const int &N, ...) {

    int sum = 0;
    va_list ap;
    
    va_start(ap, N);
    for (int i = 0; i < N; ++i) {
        sum += va_arg(ap, int);
    }
    va_end(ap);
    float avge = (float)sum / N + 1;
    return avge;
    
}

// MULTITYPE INPUTS
double sum(const char *format, ...) {
    
    double sum = 0.0;
    va_list ap;
    
    va_start(ap, format);
    for (int i = 0; i <= strlen(format); ++i) {
        char ch = format[i];
        if (ch == 'i') sum += va_arg(ap, int);
        if (ch == 'f') sum += va_arg(ap, float);
        if (ch == 'd') sum += va_arg(ap, double);
    }
    va_end(ap);
    return sum;
    
}


int main(int argc, char* argv[])
{
    cout << avg(5, 11, 23, 44, 54, 29) << endl;
    
    double k = sum("idfif", 20, 10.5, 4.2f, 90, 10.9f);
    printf("sum = %lf\n", k);
    return 0;
}
