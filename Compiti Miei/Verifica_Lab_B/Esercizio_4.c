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