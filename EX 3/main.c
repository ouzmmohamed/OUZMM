#include <stdio.h>
#include <stdlib.h>

int main()
{
    float kilometres , yards;
    printf("donnee la distance en kilometres");
    scanf("%f",&kilometres);
    yards = kilometres * 1093.61 ;
    printf("le resultat est : %f", yards);
    return 0;
}
