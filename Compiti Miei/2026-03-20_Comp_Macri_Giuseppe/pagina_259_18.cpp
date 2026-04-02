/*Memorizza in un vetttore l'elenco dei prezzi di listino di alcuni prodotti,Aumenta questi prezzi tenendo
conto che i prezzi inferiori a 5EURO vengono aumentati del 10% , mentre quelli superiori o uguali vengono aumentati del 6%*/

#include <iostream>
#include <vector>
using namespace std;
int main()
{

    // dichiarazione e inizializzazione del vettore contenente i prezzi
    float v[] = {2, 7, 11, 2, 70, 3.30, 1.15};
    float n = 7;

    cout << "Prezzi originali: ";
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }

    vector<float> prezzi; // dichiarazione del vettore per i prezzi aumentati

    // ciclo for per scorrere il vettore dei prezzi e aumentare i prezzi in base alla condizione
    for (int i = 0; i < n; i++)
    {
        if (v[i] < 5)
        {
            prezzi.push_back(v[i] * 1.10); // aumento del 10% per i prezzi inferiori a 5 EURO
        }
        else
        {
            prezzi.push_back(v[i] * 1.06); // aumento del 6% per i prezzi superiori o uguali a 5 EURO
        }
    }
    // stampa dei prezzi aumentati
    cout << "Prezzi aumentati: ";
    for (int i = 0; i < prezzi.size(); i++)
    {
        cout << prezzi[i] << " ";
    }
    cout << endl;

    return 0;
}
