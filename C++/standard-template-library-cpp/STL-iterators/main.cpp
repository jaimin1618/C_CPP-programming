#include <iostream>
using namespace std;

int main(int argc, char **argv) {
    int arr[] = {1, 2, 3};
    int *ap = arr;
    
    // WORKING MODEL
    cout << "I AM CHEAKING, WHAT HAPPENS FIRST --i OR *i ~ (*--i): " << endl;
    for (ap = arr+3; ap != arr;) cout << *--ap << ' ';
        
    // WHAT IS HAPPENING...
    /*
    here, ap = arr + 3 which is,
    | 1 - 2 - 3 - _ |
    arr + 3 is NOT DEFINED.
    now, arr + 3  >>  *--ap  >>  FIRST --ap HAPPENS, THEN *ap[3 - 1] HAPPENS.
    thus giving us >> *ap[2] = 3;
    continue;
    */
    
	return 0;
}
