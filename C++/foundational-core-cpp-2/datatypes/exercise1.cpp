#include <iostream>
#include <cstdio>
using namespace std;

void sleep() {
    int i = 0;
    while (i < 1e8) { i++; }
}

int main(int argc, char const *argv[]) {
    char str[] = "JAIMIN__CHOKHAWALA";
    printf("%s", str);
    
    for (int i = 0; str[i]; ++i) {
        printf("\b");
        sleep();
    }
    
    return 0;
}