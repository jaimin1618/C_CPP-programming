#include<iostream>
#include<algorithm>
#include<locale>
using namespace std;

// main -----------------------------------------------------------
int main(int argc, char **argv) {
    string str = "I am string";
    cout << str << endl;
     
    string str2(str.size(), '_'); // init with ******
    cout << str2 << endl;
    
    // TRANSFORMING, OUT WILL BE ON STR2
    // NOTE: if ::toupper is CLASS than use >>> className();
    // if it is function than use >>> functionName
    // if it is an object than use >>> objName
    transform(str.begin(), str.end(), str2.begin(), ::toupper);
    
    
    cout << str2 << endl;

    return 0;
}
//-----------------------------------------------------------------
