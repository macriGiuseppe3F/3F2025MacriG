/*In un vettore sono memorizzati caratteri alfanumerici: stampa quante volte compare un carattere dato in input */

#include <iostream>
using namespace std;
int main()
{

    // dichiarazione
    char v[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'};
    int n = 10;
    char x;       // carattere da ricercare
    int cont = 0; // contatore per contare quante volte compare il carattere

    cout << "Inserisci il carattere che vuoi ricercare" << endl;
    cin >> x;

    for (int i = 0; i < n; i++)
    {
        if (v[i] == x)
        {
            cont++;
        }
    }
    if (cont == 0)
    {
        cout << "Il carattere non compare" << endl;
    }
    else
    {
        cout << "Il carattere compare" << " " << cont << " " << "volte";
    }
    return 0;
}