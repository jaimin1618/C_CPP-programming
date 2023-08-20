#include <iostream>
#include <cstdio>
using namespace std;

class Cases {
    public:
    string capitals;
    string smalls;
    Cases(string smalls, string capitals) : smalls(smalls), capitals(capitals)
    {
    }
};

// RETURN TYPE IS USER DEFINED CLASS, Cases CLass is returning from this function
Cases casePartition(char *str) {
    
    // STRING IN C++ ARE JUST LIKE PYTHON, THEY COPIED IT.
    // THIS CODE WILL BE JUST LIKE PYTHON ... string += i;
    string smalls = "";
    string capitals = "";
    // IF YOU USE CHARACTER THEN YOU NEED concatenation
    for (int i = 0; str[i]; ++i) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            capitals += str[i];
        }else if (str[i] >= 'a' && str[i] <= 'z') {
            smalls += str[i];
        }
    }
    
    // OOP:
    Cases example(smalls, capitals);
    return example;
    
}



int main(int argc, char const *argv[]) {
    char str[] = "JAIMIN";  // char string array, ends at '\0'
    
    // looping over chars
    for (int i = 0; str[i]; ++i) {
        printf("%10d: %c\n", i, str[i]); // %10d leaves 10 spaces then  print %c
    }
    
    // char string concatenation: JUST WRITE THEM WITH SPACES...
    char name[] = "Jaimin "
    "Chokhawala "
    " C++ | Python | JavaScript"
    " Expert"
    " Competitive programmer."; // here it ends
    cout << name << endl; // prints >>> Jaimin Chokhawala  C++ | Python | JavaScript Expert Competitive programmer.
    
    // EXERCISE:
    char mixedCase[] = "AbEsYyQOfKTyCsFaQoPdCtBfjKfWazYaTcHjAqadrcHdCDWh"; // DO CATEGORIZE them in CAPITALS AND SMALLS
    Cases obj = casePartition(mixedCase);
    cout << obj.smalls << endl;
    cout << obj.capitals << endl;
    // CAPITALS IN MESSAGE: AEYQOKTCFQPCBKWYTHAHCDW
    // SMALLS IN MESSAGE: bsyfysaodtfjfazacjqadrcdh  is ANSWER
        
    return 0;
}