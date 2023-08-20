#include <stdio.h>
int main(){
    int age;
    char permission;
    do{
        printf("ENTER YOUR AGE: ");
        scanf("%d", &age);

        if (age >= 13 && age <=18){
            printf("YOU ARE TEEN\n");
        }else {
            printf("YOU ARE NOT TEEN\n");
        }

        printf("DO YOU WANT TO CONTINUE(y OR Y - YES): ");
        scanf(" %c", &permission);
    }while(permission == 'Y' || permission == 'y');

    return 0;
}