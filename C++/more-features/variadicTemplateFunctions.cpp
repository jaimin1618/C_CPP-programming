#include<iostream>
using namespace std;

// UNTIL NOW WE HAVE TO USE OLD C BASED VARIADIC HEADER, NOW WE CAN USE GENERIC
// TEMPLATE PROOGRAMMING TO PASS VARIADIC ARGUMENTS, THIS MAKES CODE CLEANER AND
// EASY TO UNDERSTAND

// ------------------------------------------------------------------------------
template<typename T> // BASE CASE
T rcatenate(T v) {
    return v;
}
template <typename T, typename ... Args>
T rcatenate(T first, Args ... args) {
    return rcatenate(args ...) + "=" + first;
}
// ------------------------------------------------------------------------------


// ------------------------------------------------------------------------------
// NOTE: YOU HAVE TO PROVIDE BASE CASE LIKE ABOVE FIRST TEMPLATE FOR TERMINATION
// OF RECURSIVE CALLS
template<typename T>
T summer(T v) {
    return v;
}
template <typename T, typename ... Args>
T summer(T first, Args ... args) {
    return first + summer(args ...);
}

// ------------------------------------------------------------------------------
// main -----------------------------------------------------------
int main(int argc, char **argv) {
    string a = "abc", b = "def", c = "ghi";
    string cated = rcatenate(a, b, c);
    cout << "concatenated string: " << cated << endl;
    
    int sum = summer(1, 2, 3, 4, 5);
    cout << sum;


    return 0;
}
//-----------------------------------------------------------------
