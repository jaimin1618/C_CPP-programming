#include<stdio.h>

int main(){
    for (int i=0; i<3; i++){
			printf("%d\t", i);
    }
    printf("\n");
    int j=0;
    for (;j<3;){
			printf("%d\t", j);
			j++;
    }
		int i, multiplication; // IN ORDER TO USE THIS IN GLOBAL SCOPE YOU HAVE TO INITIALIZE THEM IN GLOBAL
    for (i=1, multiplication=1; i<=5;multiplication*=i, i++);  // LOOP IN ONE LINE
		printf("\n%d", multiplication);

		int k, sum;
		for (k=0, sum=0; k<=10; sum+=k, k++);
		printf("\nsum of %d first integers is %d", k-1, sum);

		printf("\n");
		// DO WHILE LOOP
		int I=0;
		do {
			printf("HELLO");
			printf("\t\b\b");
			I++;
		}while (I<3);
		
    
    
    return 0;
}