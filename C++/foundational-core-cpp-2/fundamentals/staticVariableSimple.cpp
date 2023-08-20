#include <iostream>
using namespace std;

int staticVarIncrement() {
    // THIS HAPPEND BECAUSE STATIC VARS ARE NOT STORED IN STACK...
    // THEY ARE IN HEAP, THAT'S WHY WE CAN DO THIS.
    // which means, STATIC VARS LIFE TIME = PROGRAMME LIFE
    // AUTO KW is removed from C++, because it is done automatically by compiler.
    static int X = 0;
    X++;
    return X;
}

int main() {
    for (int i = 0; i < 10; i++) {
        cout << staticVarIncrement() << ' ';
    }
    // BTW X is not global, it is still only available in staticVarIncrement() function
    
    
}