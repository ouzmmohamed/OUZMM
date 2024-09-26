#include <stdio.h>
#include <stdlib.h>

int main()
{
    float Celsius ,  Kelvin ;
    printf("donne la température en Celsius");
    scanf("%f",&Celsius);
    Kelvin= Celsius + 273.15;
    printf("le resultat est : %f",Kelvin);
    return 0;
}
