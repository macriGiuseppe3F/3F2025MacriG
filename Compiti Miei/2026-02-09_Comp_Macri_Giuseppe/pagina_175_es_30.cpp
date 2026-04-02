/*
30 Data la successione 1-2-4-8-16-32-... in cui ogni elemento è il doppio del precedente,
stabilisci qual è il primo termine maggiore di un valore N inserito in input.
*/

#include <iostream>
using namespace std;
int main()
{
    int N, termine = 1;

    cout << "Inserisci un valore N: ";
    cin >> N;

    // Troviamo il primo termine della successione maggiore di N
    while (termine <= N)
    {
        termine *= 2; // Raddoppiamo il termine per ottenere il successivo
    }

    cout << "Il primo termine della successione maggiore di " << N << " è: " << termine << endl;

    return 0; // Termina il programma con successo
}