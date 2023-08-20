#include <iostream>
#include <cstdint>
using namespace std;

// NOTE >>> 1 bite = 8 bits, 0000 1010 this is ONE BITE

int main() {
    
    // SOME EXTRA THING TO LEARN ABOUT INT AND DIFFERENT FORMS OF REPRESENTING NUMBER;
    long int X = 10; // it is actully int 42
    long int Y = 10L; // to specify number as long int
    long long Z = 10LL;
    long long A = 10U; // unsigned long long int
    
    // YOU CAN ALSO specify OCATAL, HEX, BIN here.
    long int oct = 0223; // because leading ZERO is interpreted as OCTAL BASE 8
    long int hex = 0x93; // HEX;
    long int bin = 0b10010101111;
    cout << bin << endl;

    cout << endl;
    cout << "THESE BELOW DATATYPES ARE PLATFORM DEPENDENT ~ THEY ALLOCATE DIFFERENT BITS ON DIFFERENT PLATFORMS" << endl;
    cout << "SIZE OF CHARACTER (BITS): " << sizeof(char) * 8 << endl;
    cout << "SIZE OF SHORT INT (BITS): " << sizeof(short int) * 8<< endl;
    cout << "SIZE OF INT (BITS): " << sizeof(int ) * 8<< endl;
    cout << "SIZE OF LONG INT (BITS): " << sizeof(long int) * 8 << endl;
    cout << "SIZE OF LONG LONG INT (BITS): " << sizeof(long long int) * 8<< endl << endl;
    
    cout << "USE <CSTDINT>, THEY ARE PLATFORM INDEPENDENT DATATYPES, ALLOCATES SAME MEMORY(BITS) FOR EVERY PLATFORMS" << endl;
    cout << "SIZE OF int8_t: " <<  sizeof(int8_t)*8 << endl;
    cout << "SIZE OF int16_t: " <<  sizeof(int16_t)*8 << endl;
    cout << "SIZE OF int32_t: " <<  sizeof(int32_t)*8 << endl;
    cout << "SIZE OF int64_t: " <<  sizeof(int64_t)*8 << endl;
    
    return 0;
}