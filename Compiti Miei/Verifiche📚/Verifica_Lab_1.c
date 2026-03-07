#include <stdio.h>
#include <stdlib.h>
int main()
{

    // Dichiarazione delle variabili
    int voto;

    // Inserimento del voto
    printf("Inserisci il voto (intero da 0 a 30): ");
    scanf("%d", &voto);

    // Serie di IF per determinare l'output
    if (voto >= 28 && voto <= 30)
    {
        printf("Ottimo\n");
    }
    else if (voto >= 24 && voto <= 27)
    {
        printf("Buono\n");
    }
    else if (voto >= 18 && voto <= 23)
    {
        printf("Sufficiente\n");
    }
    else if (voto >= 0 && voto <= 17)
    {
        printf("Insufficiente\n");
    }
    else
    {
        printf("Errore, voto non valido\n");
    }
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
int main()
{

    // Dichiarazione delle variabili
    int scelta;
    float importo;

    // Mostrare i tipi di biglietto
    printf("-----MENU DI SCELTA DEI BIGLIETTI-----\n");
    printf("Seleziona il tipo di biglietto:\n");
    printf("1. Biglietto urbano - 2 euro\n");
    printf("2. Biglietto extraurbano - 3 euro\n");
    printf("3. Biglietto giornaliero - 5 euro\n");
    printf("Inserisci 1, 2 o 3: ");
    scanf("%d", &scelta);

    // Determinare il prezzo del biglietto selezionato
    float prezzo;
    switch (scelta)
    {
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

    // Chiedere l'importo inserito dall'utente
    printf("Quanti soldi inserisci? ");
    scanf("%f", &importo);

    // Verificare se l'importo è sufficiente
    if (importo >= prezzo)
    {
        printf("Biglietto emesso.\n");
    }
    else
    {
        printf("Credito insufficiente.\n");
    }

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
int main()
{

    // Dichiarazione delle variabili
    int numero;
    int somma = 0;

    // Ciclo per chiedere numeri fino a -1
    do
    {
        printf("Inserisci un numero intero (-1 per terminare): ");
        scanf("%d", &numero);

        // Aggiungere il numero alla somma se non è -1
        if (numero != -1)
        {
            somma += numero;
        }
    } while (numero != -1);

    // Stampare la somma totale
    printf("La somma totale dei numeri inseriti e': %d\n", somma);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
int main()
{

    // Dichiarazione delle variabili
    float precipitazione;

    // Ciclo per 5 giorni
    for (int giorno = 1; giorno <= 5; giorno++)
    {
        // Chiedere il valore della precipitazione
        printf("Inserisci le precipitazioni del giorno %d (in millimetri): ", giorno);
        scanf("%f", &precipitazione);

        // Analizzare il valore inserito
        if (precipitazione > 0)
        {
            if (precipitazione > 50)
            {
                printf("Pioggia intensa\n");
            }
            else
            {
                printf("Pioggia normale\n");
            }
        }
        else
        {
            printf("Nessuna Pioggia\n");
        }
    }

    return 0;
}