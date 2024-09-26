#include <stdio.h>
#include <stdlib.h>

int main()
{
    float T [5];
    int i ;
    float S ;
    for(i = 0 ; i<5 ; i++){
        printf("donner le nombre num %d:", i+1);
        scanf("%f", &T[i]);
    }
    S = 1 ;
    for(i= 0 ; i<5 ; i++)
       S = S * T[i];
       printf("la Multiplication est : %.2f", S);
    return 0;
}
