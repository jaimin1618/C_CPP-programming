#include<iostream>
#include<cmath>
using namespace std;

/*
LEFTSHIFT  <<
RIGHTSHIFT  >>
AND &
OR  |
XOR  ^
NOT  ~
*/
void leftRightShift() {
    int X = 5;
    cout << "Multiplies with 2 ^ i: " <<  (X << 1) << endl;
    cout << "dividing with 2 ^ i: " <<  (X >> 1) << endl;
}

void AND(){
    // IT IS USED TO CHECK IF NUMBER IS SET OR UNSET;
    /*
    you have int X = 0000 1010;  WE WANT TO CHECK LAST FOURTH IS SET OR UNSET
    what you can do is, apply & on X using last fourth = 0 ~ int 8
    you just need to do
    int check = X & 8 >>> if answer is 0000 1010 that means it is SET;
    otherwise UNSET
    
    NOTE: if first bit is 1 (SET) -> NUMBER IS ODD
    */
    
    
    int a = 11;
    int b = 7;
    int c = a & b;
    cout << c << endl;
}

bool isOdd(int num) {
    // 0000 1011 & 0000 0001 = 0000 0001 = 0
    if (num & 1 == 1) return true;
    return false;
}

int countingSetBits(int n) {
    
    // WE WILL USE AND
    // NOTE: 0000 0101
    //     & 0000 0100 = 0000 0100 THIS IS KEY AND WE WILL BE SHIFTING THIS
    int count = 0;
    int i = 0;
    while (i <= 32) {
        long long curr = pow(2, i);
        if ((n & curr) == curr) {
            ++count;
        }
        ++i;
    }
    return count;
}

int countingSetBitsBetter(int n) {
    
    int count = 0;
    for (int i = 0; i < sizeof(int) * 8; ++i) {
        if ((n & (1 << i)) == (1 << i)) {
            ++count;
        }
    }
    return count;
    
}


void bin(int n) {
    // k = 1000 0000 0000 0000 0000 0000 0000 0000 2 ^ 31
    unsigned k = 1 << 31;
    cout << "binary of N = " << n << endl;
    for (int i = 0; i < sizeof(int)*8; ++i) {
        if ((n & (k >> i)) == (k >> i)) {
            cout << '1';
        }else {
            cout << '0';
        }
        if ((i + 1) % 8 == 0) cout << " ";
    }
    cout << "\n\n";
}


// main -----------------------------------------------------------
int main(int argc, char **argv) {
    // leftRightShift();
    AND();
    cout << isOdd(7) << isOdd(10) << endl;
    for (int i = 0; i < 10; ++i) cout << (1 & i) << endl; // IS ODD OR NOT
    
    cout << "NUMBER OF SET BITS IN 1 - 10\n";
    for (int i = 0; i < 11; ++i) cout << countingSetBits(i) << endl;
    
    cout << "NUMBER OF SET BITS IN 1 - 10\n";
    for (int i = 0; i < 11; ++i) cout << countingSetBitsBetter(i) << endl;
    
    cout << countingSetBitsBetter(-1) << endl; // -1
    
    bin(-1);
    bin(1);
    bin(10);
    bin(12345678);
    bin(-10);
    return 0;
}
//-----------------------------------------------------------------
