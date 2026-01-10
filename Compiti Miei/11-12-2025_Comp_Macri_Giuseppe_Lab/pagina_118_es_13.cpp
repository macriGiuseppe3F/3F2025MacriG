/*Scrivi un programma che legga 3 numeri e dica se possono essere le lunghezze
dei lati di un triangolo.*/

#include <iostream>
using namespace std;
int main()
{
    // Dichiarazione delle variabili per i lati del triangolo
    double lato1, lato2, lato3;

    // Richiesta all'utente di inserire i tre lati
    cout << "Inserisci la lunghezza del primo lato: ";
    cin >> lato1;
    cout << "Inserisci la lunghezza del secondo lato: ";
    cin >> lato2;
    cout << "Inserisci la lunghezza del terzo lato: ";
    cin >> lato3;

    // Verifica della condizione per formare un triangolo
    if (lato1 + lato2 > lato3 &&
        lato1 + lato3 > lato2 &&
        lato2 + lato3 > lato1)
    {
        // Se la condizione è soddisfatta, i lati possono formare un triangolo
        cout << "I lati possono formare un triangolo.";
    }
    else
    {
        // Altrimenti, non possono formare un triangolo
        cout << "I lati non possono formare un triangolo.";
    }

    return 0;
}