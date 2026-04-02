#include <iostream>
using namespace std;

const int N = 3; // Numero di righe
const int M = 4; // Numero di colonne

int TotRiga(int m[N][M], int r);
int TotColonna(int m[N][M], int c);
int Totale(int m[N][M]);

int main()
{
    int mat[N][M] = {
        {2, 3, 4, 5},
        {6, 7, 8, 9},
        {10, 11, 12, 13}};

    int i, j, tot, totr, totc;

    for (i = 0; i < N; i++)
    {
        totr = TotRiga(mat, i);
        cout << "Totale riga " << i << ": " << totr << endl;
    }

    for (j = 0; j < M; j++)
    {
        totc = TotColonna(mat, j);
        cout << "Totale colonna " << j << ": " << totc << endl;
    }

    tot = Totale(mat);
    cout << "Totale generale: " << tot << endl;

    return 0;
}

int TotRiga(int m[N][M], int r)
{
    int tot = 0;
    for (int i = 0; i < M; i++)
        tot += m[r][i];
    return tot;
}

int TotColonna(int m[N][M], int c)
{
    int tot = 0;
    for (int i = 0; i < N; i++)
        tot += m[i][c];
    return tot;
}

int Totale(int m[N][M])
{
    int tot = 0;
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            tot += m[i][j];
    return tot;
}