/* Il sistema di riscaldamento di una fabbrica si accende quando
   la media delle temperature registrate in tre punti diversi dell'edificio
   è inferiore a un valore limite. Il programma legge il limite e le tre
   temperature e verifica se il riscaldamento deve accendersi.
*/

#include <stdio.h>

int main()
{
    float temp1, temp2, temp3, media, limite;

    // Input del valore limite
    printf("Inserisci il valore limite di accensione: ");
    scanf("%f", &limite);

    // Input delle tre temperature
    printf("Inserisci le tre temperature registrate (separate da spazio): ");
    scanf("%f %f %f", &temp1, &temp2, &temp3);

    // Calcolo della media
    media = (temp1 + temp2 + temp3) / 3.0;

    // Verifica accensione riscaldamento
    if (media < limite)
    {
        printf("Il riscaldamento deve accendersi\n");
    }
    else
    {
        printf("Il riscaldamento non deve accendersi\n");
    }

    return 0;
}
