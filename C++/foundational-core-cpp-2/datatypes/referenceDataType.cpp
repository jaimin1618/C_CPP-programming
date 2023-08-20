#include <iostream>
using namespace std;

int &func(int &i) {
    ++i;
    return i;
}

const int &newFunc(const int &x) {
    static int y = x;
    // Our x (passed variable) NO LONGER GETS change and we can have our answer.
    ++y;
    return y;
}

int main() {
    int num = 0;
    cout << num << ' ' << func(num) << ' ' << num << endl; // function works as if we are incrementing i itself.
    // 0 1 1 which changes our variable itself ... to prevent this.
    
    // num = 1 ^ ;
    cout << num << ' ' << newFunc(num) << ' ' << num << endl; // 1 2 1, num remains same as before
    
    return 0;
}