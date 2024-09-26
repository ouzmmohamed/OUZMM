#include <stdio.h>
#include <stdlib.h>

int main()
{
    float c ;
    printf("entre la temperature en celsius: ");
    scanf("%f",&c);
    if(c < 0){
            printf("l'etat de l'eau a cette temperature est : solide");
            }else if (c < 100 ){
                printf("l'etat de l'eau a cette temperature est : liquide");
                }else{
                    printf("l'etat de l'eau a cette temprature est : gaz");
                    }
    return 0;
}
