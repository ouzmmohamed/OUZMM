#include <stdio.h>
#include <stdlib.h>

int main()
{
    int L , C;
    int i , j;
    printf("entre nombre des linges : ");
    scanf("%d",&L);
    printf("entre nombre des colonnes : ");
    scanf("%d",&C);
    for(i=1;i<=L;i++){
        for(j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
