/*Dato un vettore di N numeri interi scrivi un programma che generi due nuovi vettore il primo
contenente i soli numeri pari, il secondo contenente i soli numeri dispari
Poi stampa i due vettori generati*/

#include <iostream>
#include <vector>
using namespace std;
int main()
{

    // dichiarazione e inizializzazione vettore principale di interi.
    int v[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int n = 8;

    vector<int> pari;    // dichiarazione vettore per i numeri pari vuoto.
    vector<int> dispari; // dichiarazione vettore per i numeri dispari vuoto.

    // ciclo for per scorrere il vettore principale e dividere i numeri in pari e dispari.
    for (int i = 0; i < n; i++)
    {
        if (v[i] % 2 == 0)
        {
            pari.push_back(v[i]);
        }
        else
        {
            dispari.push_back(v[i]);
        }
    }

    // stampa dei due vettori generati.
    cout << "Vettore dei numeri pari: ";
    for (int i = 0; i < pari.size(); i++)
    {
        cout << pari[i] << " ";
    }
    cout << endl;

    cout << "Vettore dei numeri dispari: ";
    for (int i = 0; i < dispari.size(); i++)
    {
        cout << dispari[i] << " ";
    }

    return 0;
}