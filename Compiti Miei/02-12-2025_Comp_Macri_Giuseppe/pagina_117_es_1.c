/*Determina,  se un dato numero è negativo o positivo*/

#include <stdio.h>
int main()
{
    int numero; // Dichiarazione variabile

    printf("Inserisci un numero intero: ");
    scanf("%d", &numero); // Input del numero

    if (numero < 0)
    {
        printf("Il numero %d è negativo.\n", numero);
    } // Controllo se il numero è negativo
    else if (numero > 0)
    {
        printf("Il numero %d è positivo.\n", numero);
    } // Controllo se il numero è positivo
    else
    {
        printf("Il numero è zero.\n");
    } // Output se il numero è zero

    return 0;
}