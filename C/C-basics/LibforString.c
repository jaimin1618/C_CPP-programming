#include <stdio.h>
#include <string.h>

int main(){
    char name[30] = "JAIMIN CHOKHAWALA";
    char copyName[30];

    // strcpy()
    strcpy(copyName, name);
    printf(" %s\n", copyName);
    
    // concat()
    strcat(name, "__");
    strcat(name, copyName);
    printf("%s\n", name);

    // strcmp()
    printf("%d %d %d", strcmp("abc", "abc"), strcmp("abc", "xyz"), strcmp("xyz", "abc"));  // THIS USES LEXICOGRAPHY TO COMPARE STRINGS # SOMETHING LIKE DICTIONARY
    
    return 0;
}