/*Stampa a video tutti i numeri pari compresi tra due estremi a e b letti da tastiera
il programma deve anche dire quanti sono.*/

#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Inserisci il valore dell'estremo inferiore (a): ";
    cin >> a;
    cout << "Inserisci il valore dell'estremo superiore (b): ";
    cin >> b;

    if (a > b)
    {
        cout << "Errore: l'estremo inferiore deve essere minore o uguale all'estremo superiore.";
        return 1;
    }

    int count = 0;
    cout << "I numeri pari compresi tra " << a << " e " << b << " sono:\n";
    for (int i = a; i <= b; ++i)
    {
        if (i % 2 == 0)
        {
            cout << i << " ";
            count++;
        }
    }

    cout << "\nTotale numeri pari trovati: " << count;

    return 0;
}