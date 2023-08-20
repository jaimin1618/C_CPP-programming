#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;

void increment_(int a) {
    ++a;
}

void increment__(int *a) {
    ++(*a); // or ++a[0];
}

void increment___(int &a) {
    ++a;
}

void ptr_and_array() {
    int arr[] = {1, 2, 3, 4, 5};
    void* vp = NULL;
    vp = arr;
    for (int i = 0; i < 5; ++i) cout << ((int *)vp)[i] << ' ';
    cout << endl;
    for (int j = 0; j < 3; ++j) cout << &((int *)vp)[j] << ' ';
}

void changeList(int arr[], int N) {
    // this means arr[] is refernce to that array
    for (int i = 0; i < N; ++i) {
        arr[i] = pow(arr[i], 2) + 1;
    }

}

void characterArray() {
    char name[4];
    name[0] = 'J'; name[1] = 'A'; name[2] = 'K'; name[3] = 'E';
    cout << "see strings without null \\0 - null termination: "<< name << endl;
}

void pointer_to_character() {
    char name[] = "JAIMIN__CHOKHAWALA";
    char* cp = name;
    cout << name << endl; // character pointer gives you one more feature of printing entire array
    cout << name[0] << endl;
    cout << name + 3 << ' ' << name + 7 << ' ' << name + 10 << endl;
    // cout << cp + 5; this also works instead of MAIN ARRAY
}

void capital_case(char* cp) {
    
    int i = 0;
    while (cp[i]) {
        if (cp[i] >= 'a' && cp[i] <= 'z') {
            cp[i] -= 32;
        }
        ++i;
    }
    
}

// main -----------------------------------------------------------
int main(int argc, char **argv) {
    int X = 10;
    increment_(X);
    cout << "after increment: " <<  X << endl;
        
    increment__(&X); // 11
    cout << "after increment: " <<  X << endl;
     
    increment___(X); // 12
    cout << "after increment: " <<  X << endl;
    
    cout << "----------------pointer and arrays----------------\n";
    ptr_and_array();
    
    int arr[] = {1, 2, 3, 4, 5};
    int N = 5;
    changeList(arr, N);
    for (int i = 0; i < N; ++i) cout << arr[i] << ' ';
    cout << "\n\n";
    
    
    cout << "----------------characterArray - strings----------------\n";
    characterArray();
    pointer_to_character();

    cout << "------------it is easy to pass character array in function------------\n";
    char name[] = "jaimin__CHOKHAwala";
    char* cp = name;
    cout << "before: " << cp << endl;
    capital_case(cp);
    cout << "after: " << cp << endl;
    
    char str[] = "hello_world";
    cp = str;
    while (*cp) {
        cout << *cp << " <-> ";
        // ++str; THIS IS INVALID, YOU CANNOT MOVE BASE;
        // BUT YOU CAN USE POINTER TO DO SO
        ++cp;
    }
    cout << "\n\n";
    str[0] = 'Q'; // this works, but NOT in C
    cout << str << endl;




    return 0;
}
//-----------------------------------------------------------------
