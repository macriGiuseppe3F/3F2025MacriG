/*Scrivere codice che:
- prende in input n numeri inseriti dall'utente,
- individua il massimo e
- stampa quale percentuale del totale dei numeri è rappresentata dal
massimo. L'utente inserisce n da console all'inizio*/

#include <iostream>
using namespace std;
int main()
{

    // dichiarazione delle variabili
    float N, max = 0, min = 0;

    // Inserimento dei valori
    cout << "\nInserisci il numero di valori";
    cin >> N;

    // ciclo for per il min e il max
    for (int i = 1; i <= N; i++)
    {

        // inserimento del i valore
        float num;
        cout << "\nInserisci il valore " << i << ": ";
        cin >> num;
        if (num > max)
        {
            max = num;
        }
        if (i == 1)
        {
            min = num;
        }
        else if (num < min)
        {
            min = num;
        }
    }

    return 0;
}