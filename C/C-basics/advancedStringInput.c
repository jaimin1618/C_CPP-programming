#include<stdio.h>

int main(){
    char str[30];
    printf("ENTER YOUR NAME: ");
    scanf("%[A-Za-z ]", &str);
    printf("%s", str);

    // PERMITTED SCANNING THAT ACCEPTS ALL SCANS EXCEPT NEW LINE USE ~ "%[^\n]"  
    // NOTE ^ MEANS EVERYTHING EXECPT WHAT IS WRITTEN AFTER THIS "^" SIGN
    // "^" -- THIS SIGN MEANS ANY CHARACTER FROM KEYBOARD
    // NEXT "\n" SAYS PROGRAM WHEN TO TERMINATE THIS STRING GETTING PROCESS
    char name[20];
    printf("\nYour Name please: ");
    scanf(" %[^\n]", name);
    printf("So your name is __%s__.", name);

    char No_C[20];
    printf("\nEnter any charcater except 'C' is not accepted here: ");
    scanf(" %[^C]", No_C);
    printf("%s", No_C);


    return 0;
}