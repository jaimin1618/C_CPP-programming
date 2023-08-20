#include <stdio.h>

/*
input:
number of salesmen
number of item
i th item by i th salesman
...

output:
Report
*/



int main(){
    int NO_SALESPERSON, NO_ITEMS;
    printf("ENTER THE NUMBER OF SALESPERSON: ");
    scanf("%d", &NO_SALESPERSON);
    printf("ENTER THE NUMBER OF ITEMS: ");
    scanf("%d", &NO_ITEMS);
    printf("\n\n\n");

    double SALEDATA[NO_SALESPERSON][NO_ITEMS];

    // getting sale data in 2D array
    for (int i=0; i<NO_SALESPERSON; i++){
        for (int j=0; j<NO_ITEMS; j++){
            printf("Sale amount of salesperson no.%d and item no.%d: ", i+1, j+1);
            scanf("%lf", &SALEDATA[i][j]);
        }
    }

    
    // Display report section
    printf("------------------------------------------------------------------\n");
    printf("SALES DATA\n");
    printf("------------------------------------------------------------------\n");
    double total = 0.0;
    for (int i=0; i<NO_SALESPERSON; i++){
        printf("Sale data for salesperson no.%d\n", i+1);
        printf("---------------------------------\n");
        total = 0.0;
        for (int j=0; j<NO_ITEMS; j++){
            printf("\tITEM no.%d: $%.2lf\n", j+1, SALEDATA[i][j]);
            total += SALEDATA[i][j];
        }
        printf("\tTotal : $%.2lf\n", total);
        printf("\n\n");       
    }

    return 0;
}