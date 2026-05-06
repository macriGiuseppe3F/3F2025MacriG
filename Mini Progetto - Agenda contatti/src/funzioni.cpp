#include <iostream>
#include <cstring>
#include "funzioni.h"

using namespace std;

const int MAX = 100;

Contatto rubrica[MAX];
int n = 0;

void inserisciOrdinato(Contatto c)
{
    int i = n - 1;

    while (i >= 0 && strcmp(rubrica[i].cognome, c.cognome) > 0)
    {
        rubrica[i + 1] = rubrica[i];
        i--;
    }

    rubrica[i + 1] = c;
    n++;
}

int ricercaBinaria(char cognome[])
{
    int l = 0, r = n - 1;

    while (l <= r)
    {
        int m = (l + r) / 2;

        int cmp = strcmp(rubrica[m].cognome, cognome);

        if (cmp == 0)
            return m;
        if (cmp < 0)
            l = m + 1;
        else
            r = m - 1;
    }

    return -1;
}

void stampa(int i)
{
    cout << rubrica[i].nome << " "
         << rubrica[i].cognome << " "
         << rubrica[i].telefono << endl;
}