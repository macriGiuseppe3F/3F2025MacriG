/*
19 Stampa a video la seguente figura fino al valore N (con N letto da tastiera):
1
22
333
4444
*/

#include <iostream>
using namespace std;
int main()
{
    int N;
    cout << "Inserisci il valore di N: ";
    cin >> N;

    // Ciclo esterno per ogni numero da 1 a N
    for (int i = 1; i <= N; i++)
    {
        // Ciclo interno per stampare il numero i, i volte
        for (int j = 0; j < i; j++)
        {
            cout << i; // Stampa il numero i senza andare a capo
        }
        cout << endl; // Vai a capo dopo aver stampato ogni riga
    }

    return 0;
}