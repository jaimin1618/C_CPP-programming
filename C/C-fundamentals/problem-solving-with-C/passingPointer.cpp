#include<iostream>
using namespace std;

void print_it(int *ptr, const int &N) {
    
    for (int i = 0; i < N; ++i) {
        cout << *(ptr + i) << "     ";
        printf("ptr[%d] = %d\n", i, ptr[i]);
    }
    cout << "\n\n";
}
void main_print() {
    
    int arr[]{10, 20, 30, 40, 50};
    print_it(arr, 5);
    
}


char *toggleChar(char *str) {
    
    for (int i = 0; str[i] != '\0'; ++i) {
        if ('a' <= str[i] and str[i] <= 'z') {
            str[i] -= 32;
        }else if ('A' <= str[i] and str[i] <= 'Z') {
            str[i] += 32;
        }else {
            continue;
        }
    }
    return str;
    
}
void main_toggleChar() {
    
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    char *t_string = toggleChar(str);
    cout << t_string << endl;
    // YOU HAVE USED POINTER SO YOU DON'T NEED TO USE ANOTHER VAR
    cout << str << endl;
    
}

void constantPointers() {
    
    // IF YOU DON'T WANT TO CHANGE BASE ADDRESS OF POINTER USE CONTANT POINTERS
    // IF YOU DON'T WANT TO CHANGE CONTENT OF ARRAY USE CONTANT VALUE POINTERS
    
    int arr[]{1, 2, 3, 4, 5};
    const int * ele_const = arr; // ELEMENT OF ARRAY ARE CONSTANT | you can change addr
    int * const base_const = arr; // BASE ELEMENT ADDRESS IS STORED IN  CONSTANT POINTER | you can change elements
    
    // ERROS;
    cout << *(ele_const + 2) << endl;
    // ele_const[2] = 10 // ERROR READ ONLY
    
    cout << *(base_const + 2) << endl;
    // base_const++; // ERROR => CONST INT *
}

// main -----------------------------------------------------------
int main(int argc, char **argv) {
    
    // main_print();
    // main_toggleChar();
    constantPointers();

    return 0;
}
//-----------------------------------------------------------------
