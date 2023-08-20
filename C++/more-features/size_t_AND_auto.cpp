#include<iostream>
using namespace std;

// auto -> NOTE: all return must have samr type, you cannot return string/char and int from same function
auto sumDowm(int n) {
    if (n <= 0) return 0; // int return
    return n + sumDowm(n - 1); // int return
}


// main -----------------------------------------------------------
int main(int argc, char **argv) {
    cout << sumDowm(10) << '\n';
    const size_t N = 10;
    for (size_t i = 0; i < N; ++i) cout << sumDowm(i) << endl;
    
    return 0;
}
//-----------------------------------------------------------------
