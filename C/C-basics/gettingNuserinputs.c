#include <stdio.h>

int main(){
  int num;
  int sum = 0;
  printf("\nENTER ANY INT, NEGATIVE FOR TERMINATION: ");
  scanf("%d", &num);
  while (num >= 0){
    sum += num;
    printf("\nENTER YOUR NEXT INT, ELSE NEGATIVE INT FOR TERMINATION: ");
    scanf("%d", &num);
  }
  printf("SUM OF ENTERED NUMBERS IS %d", sum);
  return 0;
}