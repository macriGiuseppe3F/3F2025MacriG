/*
Crea una matrice che contenga tutti 1 nelle colonne dispari, O nelle altre celle.
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Inserisci la dimensione della matrice: ";
    cin >> n;

    int matrice[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j % 2 == 1)
            {
                matrice[i][j] = 1;
            }
            else
            {
                matrice[i][j] = 0;
            }
        }
    }

    cout << "Matrice risultante:" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << matrice[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}