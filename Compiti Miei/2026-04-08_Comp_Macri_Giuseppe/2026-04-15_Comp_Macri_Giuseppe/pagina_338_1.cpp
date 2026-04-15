/*Memorizza in una matrice 10x10 dei numeri casuali compresi tra zero e nove, stampane il contenuto e stampa quanti
zeri sono presenti.Ho scelto di inserire la matrice come file esterno e non come creazione casuale di numeri dentro il codice*/

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int matrice[10][10];
    int zeri = 0;

    ifstream file("matrice1.txt");
    if (!file.is_open())
    {
        cout << "Errore, il file non è stato aperto correttamente." << endl;
        return 1;
    }

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            file >> matrice[i][j];
        }
    }

    file.close();

    cout << "\n------- Stampa della matrice:----- \n";
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            cout << matrice[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (matrice[i][j] == 0)
                zeri++;
        }
    }

    cout << "Gli zeri presenti nella matrice sono: " << zeri;

    return 0;
}