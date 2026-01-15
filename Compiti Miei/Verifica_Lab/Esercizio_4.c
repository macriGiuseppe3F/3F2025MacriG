/*Scrivere un programma che analizza le precipitazioni giornaliere per 5 giorni consecutivi
Per 5 volte chiedere un valore (in millimetri, puo essere anche 0).
Per ogni valore stampa:
-Se il valore è maggiore di 0
    -se è maggiore di 50: stampare "Pioggia intensa"
    -altrimenti stampare "pioggia normale"
    
-Se il valore è minore o uguale a 0
    stampare "nessuna Pioggia"*/

#include <stdio.h>
#include <stdlib.h>
int main() {

    //Dichiarazione delle variabili
    float precipitazione;
    
    //Ciclo per 5 giorni
    for (int giorno = 1; giorno <= 5; giorno++) {
        //Chiedere il valore della precipitazione
        printf("Inserisci le precipitazioni del giorno %d (in millimetri): ", giorno);
        scanf("%f", &precipitazione);
        
        //Analizzare il valore inserito
        if (precipitazione > 0) {
            if (precipitazione > 50) {
                printf("Pioggia intensa\n");
            } else {
                printf("Pioggia normale\n");
            }
        } else {
            printf("Nessuna Pioggia\n");
        }
    }

    return 0;
}