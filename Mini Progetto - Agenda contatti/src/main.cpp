#include <iostream>
#include "funzioni.h"

using namespace std;

int main()
{
    Contatto c1 = {"Mario", "Rossi", "111"};
    Contatto c2 = {"Luca", "Bianchi", "222"};
    Contatto c3 = {"Anna", "Verdi", "333"};

    inserisciOrdinato(c1);
    inserisciOrdinato(c2);
    inserisciOrdinato(c3);

    char cognome[30];
    cin >> cognome;

    int pos = ricercaBinaria(cognome);

    if (pos != -1)
    {
        stampa(pos);
    }

    return 0;
}