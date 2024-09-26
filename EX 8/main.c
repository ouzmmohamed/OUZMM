#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a , b , c , MG;
    printf("entre les nombres : ");
    scanf("%f %f %f",&a,&b,&c);
    MG=pow(a * b * c,1/3);
    printf("valeur est : %f", MG );
    return 0;
}
