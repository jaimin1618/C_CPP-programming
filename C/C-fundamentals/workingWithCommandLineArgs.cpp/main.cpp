#include<iostream>
using namespace std;

// (int argc, char **argv) => passed from CMD OR TERMINAL


// main -----------------------------------------------------------
int main(int argc, char **argv) {
    
    // do >>> $./a.out 100 200
    // doing >>> $./a.out 1000 jaimin__chokhawala 1.123
    printf("ARGC = %d\n", argc);
    /*
    argv[0] -> a.out
    argv[1] -> 100
    ARGv[2] -> 200
    */
    for (int i = 0; i < argc; ++i) {
        printf("argv[%d] = %s\n", i, argv[i]);
    }
    
    /*
    prints...
    // NOTE: EVERYTHING IS STRING / CHARACTER
    argv[0] = Address of this file
    argv[1] = 1000
    argv[2] = jaimin__c hokhawala
    argv[3] = 1.123
    
    
    
    */
    
    






    return 0;
}
//-----------------------------------------------------------------
 