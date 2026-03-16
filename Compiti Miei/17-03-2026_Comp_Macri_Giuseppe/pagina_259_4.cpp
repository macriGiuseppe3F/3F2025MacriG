/*Dato un vettore contenente i premi pagati da un agenzia assicurativa.
Stampa l'elenco dei premi compresi tra i 2 valori prefissati.*/

#include <iostream>
using namespace std;

int main()
{

    int premi[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000};
    int N = 10;
    int min, max;

    cout << "Inserisci il valore minimo: ";
    cin >> min;
    cout << "Inserisci il valore massimo: ";
    cin >> max;

    cout << "I premi compresi tra " << min << " e " << max << " sono: ";
    for (int i = 0; i < N; i++)
    {
        if (premi[i] >= min && premi[i] <= max)
        {
            cout << " " << premi[i];
        }
        else
        {
            cout << " " << "Nessun premio compreso tra " << min << " e " << max;
            break;
        }
    }

    return 0;
}