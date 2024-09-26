#include <stdio.h>
#include <stdlib.h>

int main()
{
    int M , i;
    int numbre;

    printf("\nDonner un nombre : ");
    scanf("%d",&numbre);

    for(i=0;i<=10;i++){
        M = numbre*i;
    printf("\n%d X %d = %d \n", i,numbre, M);
        }


    return 0;
}
