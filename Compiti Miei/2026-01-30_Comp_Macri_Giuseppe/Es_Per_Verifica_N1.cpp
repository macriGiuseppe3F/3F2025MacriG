/*Scrivere codice che:
- legge una serie di numeri dalla console finchè non viene inserito
un numero non compreso nell'intervallo 2 20
- per ogni numero inserito stampa i suoi multipli minori di 100
*/

#include <iostream>
using namespace std;
int main()
{
    // dichiarazione variabili
    int N, mult, cont = 0;

    // Inserimento del numero
    cout << "Inserisci un numero compreso tra 2 e 20: ";
    cin >> N;

    // Si entra nel ciclo while solo se il numero è compreso tra 2 e 20
    while (N >= 2 && N <= 20)
    {
        cout << "I multipli di " << "\n"
             << N << " minori di 100 sono: ";
        mult = N;
        cont = 1;
        while (mult < 100)
        {
            cout << mult << " ";
            cont++;
            mult = N * cont;
        }

        // chiede di rinserire il numero finchè è compreso tra l'intervallo iniziale
        cout << "\nInserisci un numero compreso tra 2 e 20: ";
        cin >> N;
    }

    return 0;
}
