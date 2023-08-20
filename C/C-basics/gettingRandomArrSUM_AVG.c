#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int n;
    printf("ENTER THE NUMBER OF ELEMENTS: ");\
    scanf("%d", &n);
    int arr[n], sum=0, t;
    t = time(NULL);
    srand(t); // changes seed of getting RANDOM integer
    for (int i=0; i<n; i++){
        arr[i] = rand() % 10; // only 1 digit number
        printf("%d\t", arr[i]);
        sum += arr[i];
    }
    float avg = (float)sum / n;
    printf("\nTOTAL OF ALL ELEMENTS = %d, AVERAGE IS %0.2f", sum, avg);
    
    return 0;
}