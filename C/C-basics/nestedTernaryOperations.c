// WE WILL BE WRITING PROGRAM TO CHECK IF YEAR IS LEAP YEAR OR NOT

#include <stdio.h>

void checkYear(int year);

int main(){
    int year;
    for (int i=0; i<5; i++){
        printf("\nENTER THE YEAR: ");
        scanf("%d", &year);
        checkYear(year);
        printf("\n");
    }
    return 0;  
}

void checkYear(int year){
    printf("%d %d %d\n", year%4, year%100, year%400);
    year%4==0 ? (year%100==0 ? (year%400==0 ? printf("IT IS A LEAP YEAR") : printf("IT IS NOT A LEAP YEAR")) : printf("IT IS A LEAP YEAR")) : printf("IT IS A NOT LEAP YEAR");
}