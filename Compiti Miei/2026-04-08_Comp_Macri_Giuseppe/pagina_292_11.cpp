/*Forniti i dati relativi a N persone con: cognome, citta di residenza telefono giorno e mese di nascita,
scrivi un progranna che caricati i dati in vettori paralleli, realizzi le seguenti richieste:

-Stampa i nominativi dei residenti in una certa citta nati ad agosto
-stampa i dati relativi ad una persona di cui si conosce il numero di telefono
-visualizza il numero di telefono di una persona di cui si conosce il cognome
-dati in input il giorno e il mese correnti, stampa gli auguri per tutti coloro che compiono gli anni nella forma
Buon compleanno a [nome]!*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    const int N = 100; // Numero massimo di persone
    string cognome[N], citta[N];
    string telefono[N];
    int giorno[N], mese[N];

    int n; // Numero effettivo di persone
    cout << "Inserisci il numero di persone: ";
    cin >> n;

    // Caricamento dei dati
    for (int i = 0; i < n; i++)
    {
        cout << "Inserisci cognome, citta, telefono, giorno e mese di nascita per la persona " << i + 1 << ": ";
        cin >> cognome[i] >> citta[i] >> telefono[i] >> giorno[i] >> mese[i];
    }

    // Stampa dei residenti in una certa città nati ad agosto
    string cittaRicerca;
    cout << "Inserisci la città per cercare i residenti nati ad agosto: ";
    cin >> cittaRicerca;
    cout << "Residenti a " << cittaRicerca << " nati ad agosto:" << endl;
    for (int i = 0; i < n; i++)
    {
        if (citta[i] == cittaRicerca && mese[i] == 8)
        {
            cout << cognome[i] << endl;
        }
    }

    // Stampa dei dati relativi ad una persona di cui si conosce il numero di telefono
    string telefonoRicerca;
    cout << "Inserisci il numero di telefono per cercare la persona: ";
    cin >> telefonoRicerca;
    cout << "Dati della persona con numero di telefono " << telefonoRicerca << ":" << endl;
    for (int i = 0; i < n; i++)
    {
        if (telefono[i] == telefonoRicerca)
        {
            cout << "Cognome: " << cognome[i] << ", Città: " << citta[i]
                 << ", Giorno di nascita: " << giorno[i]
                 << ", Mese di nascita: " << mese[i] << endl;
        }
    }

    // Visualizza il numero di telefono di una persona di cui si conosce il cognome
    string cognomeRicerca;
    cout << "Inserisci il cognome per cercare il numero di telefono: ";
    cin >> cognomeRicerca;
    cout << "Numero di telefono della persona con cognome " << cognomeRicerca << ":" << endl;
    for (int i = 0; i < n; i++)
    {
        if (cognome[i] == cognomeRicerca)
        {
            cout << telefono[i] << endl;
        }
    }

    // Dati in input il giorno e il mese correnti, stampa gli auguri per tutti coloro che compiono gli anni
    int giornoCorrente, meseCorrente;
    cout << "Inserisci il giorno e il mese correnti: ";
    cin >> giornoCorrente >> meseCorrente;
    cout << "Buon compleanno a:" << endl;

    for (int i = 0; i < n; i++)
    {
        if (giorno[i] == giornoCorrente && mese[i] == meseCorrente)
        {
            cout << cognome[i] << "!" << endl;
        }
    }

    return 0;
}
