#include <iostream>
using namespace std;

// IN C++11, THEY HAVE ADDED RANGE BASED FOR LOOPS, for simplicity
void rangeBasedLoop(){
    int arr[] = {1, 2, 3, 4, 5};
    /*
    syntax: for ( element_type iterator : container) {
        staments ...
    }
    */
    // JUST LIKE PYTHON, JAVASCRIPT .. for i in array: OR for (i of arr) {}
    for (int i : arr) {
        cout << "element is: " << i << endl;;
    }
    cout << endl << "Works with character strings." << endl;
    char str[] = "JAIMIN";
    for (char c : str) {
        if (c == 0) break;
        cout << "This is " << c << " character." << endl;
    }
    
    cout << endl << "Also works with string, they are not terminated with 0 at end" << endl;
    string S = "JAIMIN__CHOKHAWALA";
    for (char s : S) {
        cout << "This is " << s << " character." << endl;
    }
    
}



int main(){
    
    rangeBasedLoop();
    
    return 0;
}