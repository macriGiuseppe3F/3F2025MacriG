/*Scrivere un progrmma che chieda di inserire un voto (intero da 0 a 30)
Analizzare il valore e astampare il giudizio corrispondente:
-Da 28 a 30 stampare "Ottimo"
-Da 24 a 27 stampare "Buono"
-Da 18 a 23 stampare "Sufficiente"
-Da 0 a 17 stampare "insufficiente"
-Per qualsiasi altro valore stampare "errore, voto non valido"*/

#include <stdio.h>
#include <stdlib.h>
int main(){

    //Dichiarazione delle variabili
    int voto;
    
    //Inserimento del voto
    printf("Inserisci il voto (intero da 0 a 30): ");
    scanf("%d", &voto);

    //Serie di IF per determinare l'output
    if (voto >= 28 && voto <= 30) {
        printf("Ottimo\n");
    } else if (voto >= 24 && voto <= 27) {
        printf("Buono\n");
    } else if (voto >= 18 && voto <= 23) {
        printf("Sufficiente\n");
    } else if (voto >= 0 && voto <= 17) {
        printf("Insufficiente\n");
    } else {
        printf("Errore, voto non valido\n");
    }
    return 0;
}