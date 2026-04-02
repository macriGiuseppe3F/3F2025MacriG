/*
Determina Il valore di X (Xe Y sono numeri interi) utilizzando moltiplicazioni successive.
*/

#include <iostream>
using namespace std;
int main()
{
    int X, Y, risultato = 0;
    cout << "Inserisci il valore di X: ";
    cin >> X;
    cout << "Inserisci il valore di Y: ";
    cin >> Y;

    // Calcoliamo il prodotto di X e Y utilizzando moltiplicazioni successive
    for (int i = 0; i < Y; i++)
    {
        risultato += X; // Aggiungiamo X a se stesso Y volte
    }

    cout << "Il risultato di " << X << " moltiplicato per " << Y << " è: " << risultato << endl;

    return 0;
}