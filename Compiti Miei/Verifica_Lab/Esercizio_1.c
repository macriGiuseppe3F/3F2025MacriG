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