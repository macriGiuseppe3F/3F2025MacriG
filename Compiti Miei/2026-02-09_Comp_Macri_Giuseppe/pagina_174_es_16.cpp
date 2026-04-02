/*Inserire in Input il numero N di clienti
che hanno pagato alla cassa del supermercato.
Per ogni cliente si fornisce il numero di tessera
e l'ammontare della spesa. I dati sono contenutinel file Clienti.txt.
Stampare l'incasso della
cassa e il numero di tessera associata alla spesa minore.
*/

#include <iostream>
using namespace std;
int main()
{
    int N, numero_tessera, ammontare_spesa, incasso_totale = 0, spesa_minima = 999999, tessera_minima;
    cout << "Inserisci il numero di clienti: ";
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cout << "Inserisci il numero di tessera e l'ammontare della spesa per il cliente " << i + 1 << ": ";
        cin >> numero_tessera >> ammontare_spesa;
        incasso_totale += ammontare_spesa;

        if (ammontare_spesa < spesa_minima)
        {
            spesa_minima = ammontare_spesa;
            tessera_minima = numero_tessera;
        }
    }

    cout << "Incasso totale: " << incasso_totale << endl;
    cout << "Numero di tessera associata alla spesa minore: " << tessera_minima << endl;

    return 0;
}