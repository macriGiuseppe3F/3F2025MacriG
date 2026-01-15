/*Scriver un programma che calcoli la somma di una serie indefinita di numeri interi.
    chiede ripetutamente un numero
    aggiungere ogni numero inserito a un totale
    Terminiare quando viene inserito -1
    Alla fine stampare la somma di tutti i numeri inseriti escluso -1*/

#include <stdio.h>
#include <stdlib.h>
int main() {

    //Dichiarazione delle variabili
    int numero;
    int somma = 0;

    //Ciclo per chiedere numeri fino a -1
    do {
        printf("Inserisci un numero intero (-1 per terminare): ");
        scanf("%d", &numero);

        //Aggiungere il numero alla somma se non è -1
        if (numero != -1) {
            somma += numero;
        }
    } while (numero != -1);

    //Stampare la somma totale
    printf("La somma totale dei numeri inseriti e': %d\n", somma);

    return 0;
}
