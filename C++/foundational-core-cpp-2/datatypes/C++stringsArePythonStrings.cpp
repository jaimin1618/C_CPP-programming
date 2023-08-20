#include <bits/stdc++.h>
using namespace std;

void casePartition(string str) {
    // STRING IN C++ ARE JUST LIKE PYTHON, THEY COPIED IT.
    // THIS CODE WILL BE JUST LIKE PYTHON ... string += i;
    string smalls = "";
    string capitals = "";
    for (char i = 0; str[i]; ++i) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            capitals += str[i];
        }else if (str[i] >= 'a' && str[i] <= 'z') {
            smalls += str[i];
        }
    }
    cout << "CAPITALS IN MESSAGE: " << capitals << endl;
    cout << "SMALLS IN MESSAGE: " << smalls << endl;
    
}


int main() {
    string input = "AbEsYyQOfKTyCsFaQoPdCtBfjKfWazYaTcHjAqadrcHdCDWh";
    casePartition(input);
    
    
    return 0;
}