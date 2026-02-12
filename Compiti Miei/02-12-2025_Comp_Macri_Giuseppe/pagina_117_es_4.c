/*Scrivi un programma che permetta di scegliere di trasformare in minuti o in secondi
il numero di ore fornite in input.*/

#include <stdio.h>
int main()
{
    int ore, scelta; // Dichiarazione variabili
    int minuti, secondi;

    printf("Inserisci il numero di ore: ");
    scanf("%d", &ore); // Input del numero di ore

    printf("Scegli l'opzione di conversione:\n");
    printf("1. Converti in minuti\n");
    printf("2. Converti in secondi\n");
    printf("Inserisci la tua scelta (1 o 2): ");
    scanf("%d", &scelta); // Input della scelta

    if (scelta == 1)
    {
        minuti = ore * 60;
        printf("%d ore sono %d minuti.\n", ore, minuti);
    } // Conversione in minuti
    else if (scelta == 2)
    {
        secondi = ore * 3600;
        printf("%d ore sono %d secondi.\n", ore, secondi);
    } // Conversione in secondi
    else
    {
        printf("Scelta non valida. Per favore scegli 1 o 2.\n");
    } // Gestione scelta non valida

    return 0;
}