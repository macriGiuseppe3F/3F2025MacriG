/*dati due vettori V1 e V2, costruisci il loro vettore somma*/

#include <iostream>
using namespace std;
int main()
{

    int v1[] = {1, 2, 3, 4, 5};  // dichiarazione e inizializzazione del primo vettore
    int v2[] = {6, 7, 8, 9, 10}; // dichiarazione e inizializzazione del secondo vettore
    int N = 5;                   // dimensione dei vettori
    int v3[N];                   // vettore somma
    for (int i = 0; i < N; i++)
    {
        v3[i] = v1[i] + v2[i]; // somma elemento per elemento
    }

    cout << "\nIl vettore somma è: ";
    for (int i = 0; i < N; i++)
    {
        cout << " " << v3[i];
    }
    return 0;
}
