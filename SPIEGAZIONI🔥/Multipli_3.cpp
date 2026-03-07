/*Scrivere una funzione che stampi tutti gli elementi multipli di 3 di un vettore.
.*/

#include <iostream>
using namespace std;

void stampaMultipliDi3(int v[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (v[i] % 3 == 0)
        {
            cout << v[i] << " ";
        }
    }
    cout << endl;
}

int main()
{
    int v[] = {2, 3, 5, 6, 9, 10, 12};
    int n = sizeof(v) / sizeof(v[0]);

    stampaMultipliDi3(v, n);

    return 0;
}
