/*Calcola la somma dei quadrati dei primi X numeri successivi a un numero Y
sia X che Y sono dati in input*/

#include <iostream>
using namespace std;
int main()
{
    int X, Y;
    cout << "Inserisci un numero intero Y: ";
    cin >> Y;
    cout << "Inserisci quanti numeri successivi vuoi considerare (X): ";
    cin >> X;

    int somma = 0;
    for (int i = 1; i <= X; ++i)
    {
        int numeroSuccessivo = Y + i;
        somma += numeroSuccessivo * numeroSuccessivo;
    }

    cout << "La somma dei quadrati dei primi " << X << " numeri successivi a " << Y << " e': " << somma;

    return 0;
}