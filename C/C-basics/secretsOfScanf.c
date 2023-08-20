/*
USING SCANF() WE CAN ALSO KNOW HOW MANY INPUT RECEIVED BY SCANF
just use this: 
int i = scanf("%d %d", var_one, var_two);
printf("%d", i); == 2

*/

#include <stdio.h>
int main(){
    int x, y, i;
    i = scanf("%d %d", &x, &y);
    printf("%d %d %d", x, y, i);

    return 0;
}