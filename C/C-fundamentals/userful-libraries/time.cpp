#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

unsigned long long fibo_recursive(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibo_recursive(n - 1) + fibo_recursive(n - 2);
    
}

unsigned long long fibo_memoized(int n) {
    if (n == 0) return 0;
    unsigned long long memo[n + 1]{0};
    memo[1] = 1;
    memo[2] = 1;
    for (int i = 3; i <= n; ++i) {
        memo[i] = memo[i - 1] +  memo[i - 2];
    }
    return memo[n];
    
}

unsigned long  fibo_iterative(int n) {
    if (n == 2) return 1;
    if (n == 1) return 1;
    unsigned long long a = 1, b = 1, c;
    for (int j = 3; j <= n; ++j) {
        c = a + b;
        a = b;
        b = c;
    }
    return c;
    
}

// main -----------------------------------------------------------
int main(int argc, char **argv) {
    // USING CLOCK() FUNCTION TO GET TIME TAKEN BY FUNCTION
    
    unsigned long sum = 0;
    unsigned long long start = clock();
    for (int i = 0; i < 35; ++i) {
        sum += fibo_recursive(i);
    }
    unsigned long long end = clock();
    // THIS METHODS GIVES YOU NUMBER OF CLOCK TICKS DURING THAT PROGRAME
    cout << "taken clock ticks for programme: " << end - start << endl;
    
    double exe_time = (double) (end - start) / CLOCKS_PER_SEC;
    cout << "TAKE TIME BY PROGRAME: " << exe_time << "seconds" << endl;
    
    exe_time = 100;
    const int M = 35;
    // FOR RECURSIVE FIBO
    start = clock();
    for (int i = 1; i < M; ++i) cout << fibo_recursive(i) << "  ";
    end = clock();
    exe_time = (double)(end - start) / CLOCKS_PER_SEC;
    cout << "Time (recursive): " << exe_time << "\n\n";
    
    // FOR ITERATIVE FIBO
    start = clock();
    for (int i = 1; i < M; ++i) cout << fibo_memoized(i) << "  ";
    end = clock();
    exe_time = (double)(end - start) / CLOCKS_PER_SEC;
    cout << "Time (memoized): " << exe_time << "\n\n";
    
    // FOR MEMOIZED FIBO
    start = clock();
    for (int i = 1; i < M; ++i) cout << fibo_iterative(i) << "  ";
    end = clock();
    exe_time = (double)(end - start) / CLOCKS_PER_SEC;
    cout << "Time (iterative): " << exe_time << "\n\n";

    return 0;
}
//-----------------------------------------------------------------
