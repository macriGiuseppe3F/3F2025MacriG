/*Scrivi un programma che inserite in input N coppie di numeri stampi
quante volte i due numeri della coppia sono uguali fra loro*/

#include <stdio.h>
#include <stdlib.h>
int main()
{

    // dichiarazione delle variabili
    float N, cont = 0, n1, n2;
    do
    {
        // input del numero di coppie
        printf("\nInserisci quante coppie vuoi inserire:");
        scanf("%f", &N);

        // controllo sull'input
        if (N < 0)
        {
            printf("\nErrore, inserisci un numero valido");
        }

    } while (N < 0);

    do
    {
        printf("\nInserisci il primo numero della coppia:");
        scanf("%f", &n1);
        printf("\nInserisci il secondo numero della coppia:");
        scanf("%f", &n2);
        if (n1 == n2)
            cont++;
    } while (--N > 0); // ciclo per l'inserimento delle coppie

    printf("\nLe coppie uguali sono:%f", cont); // stampa del risultato
    return 0;
}
