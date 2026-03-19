/*Carica random le 100 componenti del vettore v1 con numeri compresi tra 1 e 100
Utilizza un secondo vettore di 10 componenti che contiene quanti numeri sono inferiori a 10 nella prima compoente
quanti sonon compresi tra 10 e 19 nella seconda componente
, quanti sono compresi tra 20 e 29 nella terza componente
e cosi via, stampa il vettore risultante*/

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{

    srand(time(0));   // inizializza il generatore di numeri casuali con il tempo attuale
    int v1[100];      // dichiarazione del vettore principale di 100 componenti
    int v2[10] = {0}; // dichiarazione del vettore per contare i numeri in intervalli specifici, inizializzato a 0
    // carica il vettore v1 con numeri casuali compresi tra 1 e 100
    for (int i = 0; i < 100; i++)
    {
        v1[i] = rand() % 100 + 1; // genera un numero casuale tra 1 e 100
    }
    // conta quanti numeri sono in ciascun intervallo e aggiorna v2 di conseguenza
    for (int i = 0; i < 100; i++)
    {

        if (v1[i] < 10)
        {
            v2[0]++;
        }
        else if (v1[i] < 20)
        {
            v2[1]++;
        }
        else if (v1[i] < 30)
        {
            v2[2]++;
        }
        else if (v1[i] < 40)
        {
            v2[3]++;
        }
        else if (v1[i] < 50)
        {
            v2[4]++;
        }
        else if (v1[i] < 60)
        {
            v2[5]++;
        }
        else if (v1[i] < 70)
        {
            v2[6]++;
        }
        else if (v1[i] < 80)
        {
            v2[7]++;
        }
        else if (v1[i] < 90)
        {
            v2[8]++;
        }
        else
        {
            v2[9]++;
        }
    }
    // stampa il vettore v2 con i conteggi dei numeri in ciascun intervallo
    cout << "Intervallo 0-9: " << v2[0] << endl;
    cout << "Intervallo 10-19: " << v2[1] << endl;
    cout << "Intervallo 20-29: " << v2[2] << endl;
    cout << "Intervallo 30-39: " << v2[3] << endl;
    cout << "Intervallo 40-49: " << v2[4] << endl;
    cout << "Intervallo 50-59: " << v2[5] << endl;
    cout << "Intervallo 60-69: " << v2[6] << endl;
    cout << "Intervallo 70-79: " << v2[7] << endl;
    cout << "Intervallo 80-89: " << v2[8] << endl;
    cout << "Intervallo 90-100: " << v2[9] << endl;

    return 0;
}