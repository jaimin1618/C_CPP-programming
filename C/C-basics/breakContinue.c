#include <stdio.h>

int main(){
    int i, j, k;
    int num=0;
    // THIS LOOP IGNORES WHEN i=2;  otherwise prints as it does
    for (i=1; i<=3; i++){
        for(j=1; j<=3;j++){
            if (i==2){
                continue;
            }
            else{
                printf("%d:%d\t", i, j);
            }
        }
    }
    printf("\n\n");
    

    // THIS LOOP ONLY PRINTS WHEN i1==j1==k1;
    int i1, j1, k1;
    for (i1=1; i1<=3; i1++){
        for (j1=1; j1<=3; j1++){
            for (k1=1; k1<=3; k1++){
                if (i1==j1 && j1==k1 && k1==i1){
                    printf("%d:%d:%d\t", i1, j1, k1);
                }else{
                    continue;                    
                }
            }
        }
    }

    return 0;
}
