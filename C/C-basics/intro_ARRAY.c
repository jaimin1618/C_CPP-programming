// NOTE: ARRAY IS CONTIGUOUS MEMORY ALLOCATION, ALL 100 WILL BE ALLOCATED IN CONTIGUOUS WAY

#include <stdio.h>

int main(){
    int x[5] = {0};         // makes every elem = 0
    
    // LET'S ASSIGN VALUES
    
    for (int i=0; i<5; i++){
        printf("%d ", x[i]);
    }
}