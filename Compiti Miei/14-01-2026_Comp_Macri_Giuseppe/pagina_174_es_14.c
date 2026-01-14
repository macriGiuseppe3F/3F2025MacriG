/*Di N persone sono forniti il peso e l'altezza..
Calcola per ciascuna il rapporto peso/altezza e determina il numero di quelle
 che presentano un rapporto maggiore di quello prefessato, valore K*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    float N, peso, altezza, rapporto, K;
    int cont = 0;

    // input del numero di persone
    printf("\nInserisci il numero di persone: ");
    scanf("%f", &N);

    // input del valore K
    printf("\nInserisci il valore K (rapporto peso/altezza): ");
    scanf("%f", &K);

    // ciclo per l'inserimento dei dati delle persone
    for (int i = 0; i < N; i++)
    {
        printf("\nInserisci il peso della persona %d: ", i + 1);
        scanf("%f", &peso);
        printf("\nInserisci l'altezza della persona %d: ", i + 1);
        scanf("%f", &altezza);

        // calcolo del rapporto peso/altezza
        rapporto = peso / altezza;

        // confronto del rapporto con K
        if (rapporto > K)
        {
            cont++;
        }
    }

    // stampa del risultato
    printf("\nNumero di persone con rapporto peso/altezza maggiore di K: %d", cont);

    return 0;
}