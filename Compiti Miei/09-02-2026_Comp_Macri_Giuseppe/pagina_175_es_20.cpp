/*
20 Scrivi un programma
che determini il prodotto di due numeri utilizzando solamente l'operazione di somma.
*/

#include <iostream>
using namespace std;
int main()
{
    int num1, num2, prodotto = 0;
    cout << "Inserisci il primo numero: ";
    cin >> num1;
    cout << "Inserisci il secondo numero: ";
    cin >> num2;

    // Calcoliamo il prodotto utilizzando solo la somma
    for (int i = 0; i < num2; i++)
    {
        prodotto += num1; // Aggiungiamo num1 a se stesso num2 volte
    }

    cout << "Il prodotto di " << num1 << " e " << num2 << " è: " << prodotto << endl;

    return 0;
}