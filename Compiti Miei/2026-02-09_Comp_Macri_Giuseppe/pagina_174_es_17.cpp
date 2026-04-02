/*
Genera una serie di numeri. La serie termina quando il numero generato è esterno
all'intervallo a, b dove a e b sono inseriti in input.
Controlla che a sia minore di b; in caso contrario ripeti l'inserimento.
*/

#include <iostream>
using namespace std;
int main()
{
    // Variabili per l'intervallo e il numero generato
    int a, b, numero_generato;
    cout << "Inserisci il valore di a: ";
    cin >> a;
    cout << "Inserisci il valore di b: ";
    cin >> b;

    // Controllo che a sia minore di b
    while (a >= b)
    {
        cout << "Errore: a deve essere minore di b. Inserisci nuovamente." << endl;
        cout << "Inserisci il valore di a: ";
        cin >> a;
        cout << "Inserisci il valore di b: ";
        cin >> b;
    }

    // Generazione della serie di numeri
    do
    {
        cout << "Inserisci un numero generato: ";
        cin >> numero_generato;

        if (numero_generato < a || numero_generato > b)
        {
            cout << "Il numero generato è esterno all'intervallo [" << a << ", " << b << "]. Terminazione della serie." << endl;
            break;
        }
        else
        {
            cout << "Il numero generato è all'interno dell'intervallo [" << a << ", " << b << "]. Continua la serie." << endl;
        }
    } while (true);

    return 0;
}