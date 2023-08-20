#include <stdio.h>

int main(){
    // IT IS BETTER TO USE TERNARY INSTEAD OF if..elses
    int age;
    printf("ENTER YOUR AGE: ");
    scanf("%d", &age);
    age>=13 && age<=19 ? printf("YOU'RE TEENAGER") : printf("YOU'RE NOT TEENAGER");
    return 0; 
}