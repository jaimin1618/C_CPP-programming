#include <iostream>
using namespace std;

// preprocessor becomes powerfull when they work as condition, function, big constanct ... generally we use CAPITAL LETTERS to define them
// preprocessor just CHANGE the macron with TEXT, they don't do processes/function OR conditions.. they just change it
// MOST IMPORTANT THING TO NOTICE: preprocessor ONLY REPLACE ITSELF BY GIVEN VALUE>>> x*x > 2+1*2+1 = 5, that's why CONCERN ABOUT IT
 
#define ONE 1
#define MAX(a, b) (a > b ? a : b)
#define SQ(x) (x)*(x)
#define IN cin
#define OUT cout

// defining macro with multiple lines code, which swaps two value
#define SWAP(a, b) do {        \
                        a ^= b;\
                        b ^= a;\
                        a ^= b;\
                    } while(0);


int main(){
    
    OUT << ONE  << endl;
    OUT << MAX(1, 2) << endl;
    
    int X;
    IN >> X;
    OUT << X * X << endl;
    cout << "DONE" << endl;  // even if you have defined cout as OUT, it will allow to use cout
    OUT << SQ(5) << endl;
    
    
    // calling SWAP
    int x = 10;
    int y = 20;
    OUT << "BEFORE SWAP: " << x << ' ' << y << endl;
    SWAP(x, y);
    OUT << "AFTER SWAP: " << x << ' ' << y << endl;
    
 
 

    return 0;
}