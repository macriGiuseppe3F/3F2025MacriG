#include <iostream>
#include <cstdlib> // per rand() e srand()
#include <ctime>   // per time()

using namespace std;

int main()
{

    // numero di elementi del vettore
    const int n = 20;

    // valore massimo dei numeri casuali
    const int MAX_VALUE = 1000;

    // dichiarazione del vettore
    int v[n];

    // inizializzo il generatore di numeri casuali
    // se non lo faccio i numeri sarebbero sempre gli stessi
    srand(time(NULL));

    // riempimento del vettore con numeri casuali
    for (int i = 0; i < n; i++)
    {
        v[i] = rand() % MAX_VALUE + 1; // numeri tra 1 e 1000
    }

    // stampa del vettore prima dell'ordinamento
    cout << "Vettore iniziale:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }

    cout << endl;

    // algoritmo bubble sort
    // uso una variabile booleana per capire se ci sono stati scambi
    bool scambio;

    // ciclo esterno: numero massimo di passaggi
    for (int pass = 0; pass < n - 1; pass++)
    {

        scambio = false; // all'inizio del passaggio assumo che sia già ordinato

        // ciclo interno: confronto gli elementi vicini
        // ad ogni passaggio l'ultimo elemento è già al posto giusto
        for (int i = 0; i < n - 1 - pass; i++)
        {

            // se un numero è maggiore del successivo li scambio
            if (v[i] > v[i + 1])
            {

                int temp = v[i]; // salvo temporaneamente il valore
                v[i] = v[i + 1]; // metto il più piccolo a sinistra
                v[i + 1] = temp; // rimetto il valore salvato a destra

                scambio = true; // almeno uno scambio è avvenuto
            }
        }

        // se non ci sono stati scambi vuol dire che il vettore è ordinato
        if (!scambio)
        {
            break; // esco prima dal ciclo
        }
    }

    // stampa del vettore ordinato
    cout << "Vettore ordinato:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }

    return 0; // fine programma
}
