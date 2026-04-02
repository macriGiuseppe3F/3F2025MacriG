/*Scrivi un programma in C che prenda in input un numero e verifichi che questo
sia esterno all'intervallo (-5, +10), in tal caso stampi "Il dato è fuori dall'intervallo"
Altrimenti Stampi "ok"*/

#include <stdio.h>
int main()
{
    int numero;

    // Prendere in input un numero
    printf("Inserisci un numero: ");
    scanf("%d", &numero);

    // Verificare se il numero è esterno all'intervallo (-5, +10)
    if (numero < -5 || numero > 10)
    {
        printf("Il dato è fuori dall'intervallo\n");
    }
    else
    {
        printf("ok\n");
    }

    return 0;
}