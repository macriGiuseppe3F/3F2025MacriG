/*Realizzare un programma che simula una biglietteria automatica eseguendo i seguenti passi:
Mostra 3 tipi di biglietto con prezzo:
    -Biglietto urbano 2 euro
    -Biglietto extraurbano 3 euro
    -Giornaliero 5 euro
L'utente seleziona il biglietto digitando 1,2 oppure 3
La biglietteria chiede: "Quanti soldi inserisci?" ed esamina l'importo inserito dall'utente
se l'importo è almeno il prezzo stampare "biglietto emesso"
altrimenti stampare "Credito insufficiente"*/

#include <stdio.h>
#include <stdlib.h>
int main() {

    //Dichiarazione delle variabili
    int scelta;
    float importo;

    //Mostrare i tipi di biglietto
    printf("-----MENU DI SCELTA DEI BIGLIETTI-----\n");
    printf("Seleziona il tipo di biglietto:\n");
    printf("1. Biglietto urbano - 2 euro\n");
    printf("2. Biglietto extraurbano - 3 euro\n");
    printf("3. Biglietto giornaliero - 5 euro\n");
    printf("Inserisci 1, 2 o 3: ");
    scanf("%d", &scelta);

    //Determinare il prezzo del biglietto selezionato
    float prezzo;
    switch (scelta) {
        case 1:
            prezzo = 2.0;
            break;
        case 2:
            prezzo = 3.0;
            break;
        case 3:
            prezzo = 5.0;
            break;
        default:
            printf("Scelta non valida.\n");
            return 1;
    }

    //Chiedere l'importo inserito dall'utente
    printf("Quanti soldi inserisci? ");
    scanf("%f", &importo);

    //Verificare se l'importo è sufficiente
    if (importo >= prezzo) {
        printf("Biglietto emesso.\n");
    } else {
        printf("Credito insufficiente.\n");
    }

    return 0;
}