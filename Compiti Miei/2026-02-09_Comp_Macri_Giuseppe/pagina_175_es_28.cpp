/*
28 Scrivi il termine N della serie (N è ottenuto in
input e deve essere > 0):
a_{0} = 3
a i =2* a i - 1 +1
*/

#include <iostream>
using namespace std;
int main()
{
    int N, a = 3;
    cout << "Inserisci il termine N della serie (N > 0): ";
    cin >> N;

    if (N <= 0)
    {
        cout << "Errore: N deve essere maggiore di zero." << endl;
        return 1; // Termina il programma con un codice di errore
    }

    for (int i = 1; i < N; i++)
    {
        a = 2 * a + 1; // Calcoliamo il termine corrente usando la formula data
    }

    cout << "Il termine " << N << " della serie è: " << a << endl;

    return 0; // Termina il programma con successo
}
