/*Crea una matrice che contenga la tavola pitagorica di ordine N*/

#include <iostream>
using namespace std;

int main()
{
    int N;
    cout << "Inserisci l'ordine della tavola pitagorica: ";
    cin >> N;

    int matrice[10][10];

    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            matrice[i][j] = i * j;
        }
    }

    cout << "\n------- Tavola Pitagorica di ordine " << N << " -------\n";
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            cout << matrice[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}