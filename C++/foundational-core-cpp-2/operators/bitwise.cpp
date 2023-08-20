#include <iostream>
using namespace std;

#define LL long long

void decToBin(LL num) {
    if (num == 1) {
        cout << '1';
        return;
    }
    // UNLESS THIS RECURSION FINISHES IT WILL NOT ENCOUNTER NEXT STATEMENT.
    decToBin(num/2);
    cout << num % 2;  // THIS IS LAST PROCESS WHEN LAST RECURSION ENDS.
}
void BIN_OPERATIONS(int a, int b) {
    cout << "a & b " << (a & b) << endl;
    cout << "a || b " << (a | b) << endl;
    cout << "!b " << (!b) << endl;
    cout << "a << b " << (a << b) << endl;
    cout << "a >> b " << (a >> b) << endl;
}



int main() {
    decToBin(1e8);  // 101111101011110000100000000 = 1e8
    cout << endl;
    BIN_OPERATIONS(1, 2);
    
    
    
    
    
    
    
    return 0;
}