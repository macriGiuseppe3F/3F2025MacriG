/*
32 Scrivi un programma che legga una sequenza di numeri e verifichi
 se la differenza fra il numero inserito e il numero precedente è costante.
Stampa al termine un messaggio di notifica e quanti numeri sono stati inseriti.
La sequenza termina quando viene inserito il valore 999.
*/

#include <iostream>
using namespace std;
int main()
{
    int numero, numero_precedente, differenza, count_numeri = 0;
    bool differenza_costante = true;

    cout << "Inserisci una sequenza di numeri (termina con 999): " << endl;

    while (true)
    {
        cin >> numero;
        if (numero == 999) // Termina l'inserimento quando viene inserito 999
            break;

        count_numeri++; // Incrementa il contatore dei numeri inseriti

        if (count_numeri == 1)
        {
            numero_precedente = numero; // Salva il primo numero come precedente
        }
        else if (count_numeri == 2)
        {
            differenza = numero - numero_precedente; // Calcola la differenza dopo il secondo numero
            numero_precedente = numero;              // Aggiorna il precedente
        }
        else
        {
            if (numero - numero_precedente != differenza)
            {
                differenza_costante = false; // La differenza non è costante
            }
            numero_precedente = numero; // Aggiorna il precedente
        }
    }

    if (differenza_costante)
    {
        cout << "La differenza tra i numeri è costante." << endl;
    }
    else
    {
        cout << "La differenza tra i numeri non è costante." << endl;
    }

    cout << "Numero di numeri inseriti: " << count_numeri << endl;

    return 0;
}