#include <stdio.h>

int main(){
    int i, j;    // NOTE if you will need them then declare them globally
    int ARR[3][3];
    for (i=0; i<3; i++){
        for (j=0; j<3; j++){
            ARR[i][j] = i*j;
            /*
            0 0 0 
            0 1 2
            0 2 4          
            */
        }
    }

    printf("THIS IS OUR 2D ARRAY\n");
    for (i=0; i<3; i++){
        for (j=0; j<3; j++){
            printf("%d\t", ARR[i][j]);
        }
        printf("\n");
    }



    return 0;
}