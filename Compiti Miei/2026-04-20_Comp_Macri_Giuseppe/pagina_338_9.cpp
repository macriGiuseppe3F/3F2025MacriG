/*Date le matrici A e B, scrivere un programma che calcola la matrice C = A + B */
#include <iostream>
using namespace std;

int main()
{
    const int N = 3;
    int A[N][N], B[N][N], C[N][N];

    // Lettura della matrice A
    cout << "Inserisci gli elementi della matrice A:" << endl;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> A[i][j];
        }
    }

    // Lettura della matrice B
    cout << "Inserisci gli elementi della matrice B:" << endl;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> B[i][j];
        }
    }

    // Calcolo della matrice C = A + B
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    // Stampa della matrice C
    cout << "La matrice C = A + B e':" << endl;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}