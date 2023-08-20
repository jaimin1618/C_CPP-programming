#include<iostream>
#include<typeinfo>
#include<algorithm>
#include<vector>
using namespace std;

const int mod = 1e9 + 7;

// main -----------------------------------------------------------
int main(int argc, char **argv) {
    long long n = 10000000;
    
    // lambda can be used to make inline functions
    // here, DIFFERENCE IS, WE ARE USING LAMBDA OUTSIDE transform OR for_each/.
    auto fp = [](const auto& n) -> int { return ((n%mod)*(n%mod)*(n%mod)) % mod; };
    auto x = fp(n);
    cout << "value of x: " << x << endl;
    
    
    // ANOTHER WAY TO USE lambda
    auto tp = []<typename T>(const T& n) -> T { return n * 100; };
    // this is not avaible on my compiler it is in C++20
    auto z = tp(n);
    cout << z << endl;





    return 0;
}
//-----------------------------------------------------------------
