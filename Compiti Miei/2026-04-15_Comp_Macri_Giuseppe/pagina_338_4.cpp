/*Crea una matrice quadrata che contenga tutti 1 nella diagonale principale e zeri altrove*/

#include <iostream>
using namespace std;

int main()
{
    int matrice[10][10];

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (i == j)
                matrice[i][j] = 1;
            else
                matrice[i][j] = 0;
        }
    }

    cout << "\n------- Stampa della matrice -----\n";

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            cout << matrice[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}