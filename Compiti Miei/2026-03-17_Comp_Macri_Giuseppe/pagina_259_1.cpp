/*Dato un vettore di N numeri interi, raddoppia il valore delle componenti il cui indice
è inserito in input.*/

#include <iostream>
using namespace std;
int main()
{

    int v[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int N = 10;
    int x;

    cout << "Inserisci l'indice: ";
    cin >> x;

    if (x >= 0 && x < N)
    {
        v[x] = v[x] * 2;
    }
    else
    {
        cout << "Indice non valido" << endl;
    }

    for (int i = 0; i < N; i++)
    {
        cout << " " << v[i];
    }

    return 0;
}