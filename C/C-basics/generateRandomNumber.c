// WE WILL BE USING RAND()
/*
What actual rand() and srand() is???
here, rand() function is will only print same random number unless you change the seed of function
and how do we do that /// SEE srand() is used to change the seed of rand() function
if you change the seed OR srand() for function THEN you will have different set of random number. 
otherwise it  will print same random again again.
*/
// --------------------------------------------------------------------------------------------------

#include <stdio.h>
#include <stdlib.h> // here is rand()
#include <time.h>

int main(){
    int random;
    int t = time(NULL);
    printf("THREE RANDOM NUMBER\n");
    printf("%d\n", t);
    srand(0);
    srand(1); // random number changes
    srand(2); // random number changes
    srand(t); // THIS t parameter is time(sec) from EPOCH 1970 1st JAN midnight. so it will keep changing seconds thus NEW SEED for every second
    for (int i=0; i<3; i++){
        random = rand() % 100; // two digit number
        int one_digit = rand() % 10;  // to get one digit number
        printf("%d %d\n", random, one_digit);
    }

    return 0;
}