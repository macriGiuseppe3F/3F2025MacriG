/*Funzione che stampa un vettore. Senza chiedere nessun input*/

#include <iostream>
using namespace std;

void stampa_vettore(const int v[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{
    int v[] = {1, 2, 3, 4, 5};
    int n = 5;

    stampa_vettore(v, n);

    return 0;
}