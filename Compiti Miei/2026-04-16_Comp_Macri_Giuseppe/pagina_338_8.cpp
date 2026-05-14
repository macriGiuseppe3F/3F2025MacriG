/*
Supponendo di avere in input i dati relativi a tutte le vendite di una giornata nei 5 reparti di un supermercato,
scrivi un programma che visualizzi i dati relativi alle vendite di ogni reparto e alla sua percentuale rispetto al totale.*/

#include <iostream>
using namespace std;

int main()
{
    const int NUM_REPARTI = 5;
    double vendite[NUM_REPARTI];
    double totale = 0;

    cout << "Inserisci le vendite per ogni reparto:" << endl;
    for (int i = 0; i < NUM_REPARTI; i++)
    {
        cout << "Reparto " << i + 1 << ": ";
        cin >> vendite[i];
        totale += vendite[i];
    }

    cout << "\nDati delle vendite:" << endl;
    for (int i = 0; i < NUM_REPARTI; i++)
    {
        double percentuale = (vendite[i] / totale) * 100;
        cout << "Reparto " << i + 1 << ": " << vendite[i] << " (" << percentuale << "%)" << endl;
    }

    return 0;
}