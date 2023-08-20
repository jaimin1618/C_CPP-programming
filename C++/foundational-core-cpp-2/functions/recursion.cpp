#include <iostream>
using namespace std;

// C++ cannot work with int type greater than 20!
// while python can even work with 80! ...

#define LL long long
unsigned LL factorial(unsigned LL n) {
    if (n < 2) return 1;
    return n * factorial(n - 1);
}

int main() {
    LL n = 50;
    
    for (LL i = 0; i < 101; i+=5) {
        cout << i << ' ' << factorial(i) << endl;
    }
}