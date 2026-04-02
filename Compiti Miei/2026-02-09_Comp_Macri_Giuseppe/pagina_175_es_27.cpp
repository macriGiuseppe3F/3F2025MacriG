/*
27 Scrivi il termine N della serie di Fibonacci
Per farlo, occorre ricordare che la successione di Fibonacci è una successione di numeri interi positivi
 in cui ciascun numero a cominciare dal terzo è la somma dei due precedenti e i primi due sono 1, 1.
 I primi numeri quindi sono: 1, 1, 2, 3, 5, 8, 13, 21
*/

#include <iostream>
using namespace std;
int main()
{
    int N, a = 1, b = 1, c;
    cout << "Inserisci il termine N della serie di Fibonacci (N > 0): ";
    cin >> N;

    if (N <= 0)
    {
        cout << "Errore: N deve essere maggiore di zero." << endl;
        return 1; // Termina il programma con un codice di errore
    }

    if (N == 1 || N == 2)
    {
        cout << "Il termine " << N << " della serie di Fibonacci è: 1" << endl;
        return 0; // Termina il programma con successo
    }

    for (int i = 3; i <= N; i++)
    {
        c = a + b; // Calcoliamo il termine corrente come la somma dei due precedenti
        a = b;     // Aggiorniamo a al termine precedente
        b = c;     // Aggiorniamo b al termine corrente
    }

    cout << "Il termine " << N << " della serie di Fibonacci è: " << c << endl;

    return 0; // Termina il programma con successo
}