/*
26 Calcola il quadrato di un numero N,
sfruttando il fatto che esso è dato dalla somma dei primi N numeri dispari (per esempio, 3 ^ 2 - 1 + 3 + 5 - 9 ).
*/

#include <iostream>
using namespace std;
int main()
{
    int N, quadrato = 0;
    cout << "Inserisci un numero N: ";
    cin >> N;

    // Calcoliamo il quadrato di N sommando i primi N numeri dispari
    for (int i = 0; i < N; i++)
    {
        quadrato += (2 * i + 1); // Aggiungiamo il numero dispari corrispondente
    }

    cout << "Il quadrato di " << N << " è: " << quadrato << endl;

    return 0;
}