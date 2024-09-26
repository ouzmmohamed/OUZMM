#include <stdio.h>
#include <stdlib.h>

int main()
{
    float kilometres_par_heure , metres_par_seconde;
    printf("donnee la vitesse en kilomètres par heure");
    scanf("%f",&kilometres_par_heure);
    metres_par_seconde = kilometres_par_heure  * 0.27778;
    printf("le resultat est : %f", metres_par_seconde);
    return 0;
}
