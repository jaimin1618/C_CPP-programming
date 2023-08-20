#include <bits/stdc++.h>
using namespace std;

/*
FUNCTION ARE FUNNDAMENTAL TO C++
OBJECTS ARE FUNNDAMENTAL TO JAVA
SCRIPTING ARE FUNNDAMENTAL TO PYTHON, JAVASCRIPT, PERL, PHP
*/
void callByValue(int num){
    // FOR PRINRING OR READING AND ANALYSIS OF DATA PURPOSES
    float ans = sqrt(num);
    
    cout << "After calling value passing: " << endl ;
    cout << "----------------------------"  << endl;
    cout << "What you passed is: " << num << endl;
    cout << "What you passed current status: " << num << endl;
    cout << "What you made from it: " << ans << endl;
}

void callByReference(int *ptr){
    // IF YOU WANT TO SAY THAT YOU CANNOT CHANGE POINTER THEN USE const int *ptr >>> this won't allow you to do (*ptr)++.
    int temp = (*ptr)++;
    float ans = sqrt(*ptr);
        
    cout << "After calling by reference: " << endl;
    cout << "----------------------------" << endl;
    cout << "What you passed: " << temp << endl;
    cout << "What it has become after passing into function: " << *ptr << endl;
    cout << "What you made from it: " << ans << endl;
}



int main(){
    int x = 10;
    int *ip = &x;
    // POINTER METHOD FOR PASSING REFERENCE VALUE
    callByReference(ip);
    cout << endl;
    // DIRECTLY PASSING REFERENCE TO THE FUNCTION, BETTER THAN POINTER;
    int y = 5;
    callByReference(&y); // IT WORKS SAME AS POINTER BUT you don't need pointrs now
    
    return 0;
}