#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    char string[] = "JAIMIN__CHOKHAWALA";
    for (int i=0; i<100; i++){
        if (string[i] == '\0'){
            printf("%d\n", i);
            break;
        }else {
            printf("%c\n", string[i]);
        }
    }
    printf("%d", strlen(string));
    return 0;
}