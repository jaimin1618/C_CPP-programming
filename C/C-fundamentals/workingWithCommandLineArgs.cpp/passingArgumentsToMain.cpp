#include<iostream>
#include<cstdlib>
using namespace std;

// main -----------------------------------------------------------
int main(int argc, char **argv) {
    printf("using argument parameter of main() function\n");
    
    if (argc == 1) {
        printf("Insufficient parameters\n");
    }
    double sum = 0.0;
    for (int i = 1; i < argc; ++i) {
        sum += atof(argv[i]);
    }
    printf("sum = %lf\n", sum);
    





    return 0;
}
//-----------------------------------------------------------------
