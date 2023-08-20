// IN C PROGRAM WHEN YOU PROVIDE CHARACTER INPUT AFTER INT/FLOAT INPUT THEN IT WONT ACCEPT CHARACTER INPUT.
// WHAT IT ACTUALLY DOES IS, IT WILL ACCEPT ENTER_KEY AS CHARACTER. YOU CAN IDENTIFY THIS BY WRITING ASCII OF INPUT == ASCII OF ENTER KEY.
// NOW, WE SIMPLE GIVE A SPACE BEFORE ACCEPTING CHARACTER INPUT TO SOLVE THIS PROBLEM SEE...

#include <stdio.h>

int main(){
    int x, y;
    char c;
    printf("\nEnter integer: ");
    scanf("%d", &x);
    printf("\nEnter character: "); 
    // scanf("%c", &c); // HERE IT WILL SHOW BUFFRING INPUT PROBLEM >>> SOLUTION IS DO A SPACE BEFORE ACCEPTING CHAR INPUT
    scanf(" %c", &c);
    // LET'S print ASCII of enter
    printf("%d", c); // ASCII == 10 for ENTER KEY
    printf("\nEnterinteger: ");
    scanf("%d", &y);

    return 0;
}