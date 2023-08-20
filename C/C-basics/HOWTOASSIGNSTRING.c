#include <stdio.h>
#include <string.h>

int main(){
    char name[30]; // INITIALIZE 

    // name = "JAIMIN CHOKHAWALA"  --- ILLEGAL in C PROGRAMMING YOU CAN'T DO THAT;
    // HERE YOU HAVE TO EATHER ASSIGN VALUE WHEN YOU INITIALIZE OR DO IT BY USING strcpy()

    strcpy(name, "JAIMIN CHOKHAWALA");
    printf("%s %d\n", name, strlen(name));

    return 0;
}