/*Scrivi un programma che, quando l’utente inserisce una matrice (composta da numeri interi),
scambi le righe pari con quelle dispari*/

#include <iostream>
#include <fstream>
using namespace std;
int main()
{

    ifstream file("mat.txt");

    if (!file.is_open())
    {
        cout << "Errore nell'apertura del file." << endl;
        return 1;
    }

    const int N = 3;
    int matrice[N][N];
    // Lettura della matrice dal file
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            file >> matrice[i][j];
        }
    }
    file.close();
    for (int i = 0; i < N - 1; i += 2)
    {
        for (int j = 0; j < N; j++)
        {
            swap(matrice[i][j], matrice[i + 1][j]);
        }
    }
    cout << "Matrice dopo lo scambio delle righe pari con quelle dispari:" << endl;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << matrice[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}