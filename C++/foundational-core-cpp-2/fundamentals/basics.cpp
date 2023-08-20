// BASIC SYNTAX
#include <bits/stdc++.h>
#include <iostream>
#include <string.h>
using namespace std;

// RUN THIS FUNCTIONS TO UNDERSTAND TOPICS...

void basicPointers(){
    int x = 10;
    int y = 20;
    
    // FIRST WAY
    int *ip = &x; // works
    cout << *ip;
    // Second WAY
    
    int *ptr = NULL;
    ptr = &x;
    cout << *ptr;
}

void pointersANDreferenes(){
    
    int x = 7;
    int *ip = &x;  // pointer to X;
    int &y = x;  // reference to X;
    y += 100;
    
    cout << "Why we should use reference instead of pointers ???" << endl;
    cout << "reference works exactly same as pointer, even better they don't require * or & to access them." << endl;
    cout << "Just like pointers we can use them, to change  out variable." << endl;
    cout << "x was equal to 7 but now after changing it using y, it is equal to 10." << endl;
    cout << endl << endl;
    cout << "The value of x is: " << x << endl;
    cout << "The value of *ip (pointer to x) is also: " << *ip << endl;
    cout << "The value of y (reference to x) is also also: " << y << endl;
    
}

void arrayWithPointer(){
    int arr[3] = {10, 20, 30};
    int *ip = &arr[0];  // OR *ip = arr;
    cout << ip[1];
}

void stringArray(){
    char str[] = {'S', 'T','R', 'I','N', 'G', 0};
    char STR[] = "STRING"; // assigns '\0' automatically
    
    // You can access all of them using array;
    for (int i = 0; STR[i]; i++) {
        if (str[i+1] == '\0'){
            cout << STR[i];
            break;
        }
        cout << STR[i] << '-';
    }
    cout << endl;
    
    cout << "NOW USING POINTERS TO PRINT STRING. " << endl;
    for (char *cp = STR; *cp; cp++) {
        cout << *cp << endl;
    }
    
}

void rangeBasedLoop(){
    char str[] = "THIS_IS_RANGE_BASED_LOOP";
    for (char c : str) {
        if (c == 0) break;
        cout << c << '|';
    }
    
}

void bubbleSort(int arr[], int n){
    
    for (int i = 0; i < n; i++) {
        for (int j = i; j >= 0; j--) {
            if (arr[i] < arr[j]) {
                swap(arr[i], arr[j]);
            }
        }
    }
    
}

void howToGiveAnsInContests(){
    // CHECK BUBBLE SORT WORKED OR NOT
    int arr[] = {2, 5, 4, 1, 3};
    int sorted[5];
    for (int i = 0; i < 5; i++){
        sorted[i] = arr[i];
    }
    sort(sorted, sorted+5);
    bubbleSort(arr, 5);
    int flag = 0; // THIS IS WHAT I WANT YOU TO UNDERSTAND;
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << ' ' << sorted[i] << endl;
        if (arr[i] != sorted[i]) {
            flag += 1;
        }
    }
    cout << (flag == 0 ? "YES" : "NO"); // THIS IS HOW YOU SHOUDL ANSWER...
    // IT MAY INCREASE TIME COMPLEXITY
}

void FORLOOP(){
    int n = 5;
    cout << "USING i++" << endl;
    for (int i = 0; i < n; i++) {
        cout << i << ' ';
    }
    cout << endl;
    
    cout << "USING ++i" << endl;
    for (int i = 0; i < n; ++i) {
        cout << i << ' ';
    }
    cout << endl;
    cout << "GENERALLY SPEAKING i++ ~ ++i but sometimes ++i is better and faster.";
    cout << endl;
}

void ForLoopForString(){
    char str[] = "JAIMIN__CHOKHAWALA";

    for (char *cp = str; *cp; ++cp) {
        cout << *cp;
    }
    
}

void doArrayReference(int *arr, int n){
    // function(int arr[]) = function(int *arr)
    // both are doing same thing, passing reference
    for (int i = 0; i < n; i++) {
        cout << arr[i] << endl;
    }
    
}


int main(){
    
    int arr[] = {2, 1, 3, 5, 4};
    doArrayReference(arr, 5);

    return 0;
}








