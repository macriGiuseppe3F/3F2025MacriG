/*Scrivi un programma in C, che dati in input 2 nummeri, li stampi in ordine crescente*/

#include <stdio.h>
int main()
{

    float numero1, numero2; // Dichiarazione variabili

    printf("Inserisci il primo numero: ");
    scanf("%f", &numero1); // Input del primo numero

    printf("Inserisci il secondo numero: ");
    scanf("%f", &numero2); // Input del secondo numero

    if (numero1 < numero2)
    {
        printf("I numeri in ordine crescente sono: %.2f, %.2f\n", numero1, numero2);
    } // Controllo se il primo numero è minore del secondo
    else if (numero1 > numero2)
    {
        printf("I numeri in ordine crescente sono: %.2f, %.2f\n", numero2, numero1);
    } // Controllo se il secondo numero è minore del primo
    else
    {
        printf("I numeri sono uguali: %.2f e %.2f\n", numero1, numero2);
    } // Output se i numeri sono uguali

    return 0;
}