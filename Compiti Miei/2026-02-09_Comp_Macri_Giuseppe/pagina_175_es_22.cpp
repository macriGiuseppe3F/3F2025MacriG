/*
22 Scrivi un programma che determ
ina quoziente e il resto di que numeri interi
utilizzando solamente le operazioni di addizione e di sottrazione.
*/

#include <iostream>
using namespace std;
int main()
{
    int num1, num2, quoziente = 0, resto;

    cout << "Inserisci il primo numero (dividendo): ";
    cin >> num1;
    cout << "Inserisci il secondo numero (divisore): ";
    cin >> num2;

    // Verifichiamo che il divisore non sia zero
    if (num2 == 0)
    {
        cout << "Errore: il divisore non può essere zero." << endl;
        return 1; // Termina il programma con un codice di errore
    }

    // Calcoliamo il quoziente utilizzando solo addizione e sottrazione
    while (num1 >= num2)
    {
        num1 -= num2; // Sottraiamo il divisore dal dividendo
        quoziente++;  // Incrementiamo il quoziente
    }

    // Il resto è ciò che rimane del dividendo dopo le sottrazioni
    resto = num1;

    // Stampiamo i risultati
    cout << "Quoziente: " << quoziente << endl;
    cout << "Resto: " << resto << endl;

    return 0; // Termina il programma con successo
}
