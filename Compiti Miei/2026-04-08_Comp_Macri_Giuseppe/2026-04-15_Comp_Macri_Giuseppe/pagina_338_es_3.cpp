/*Scrivi un programma che crei e visualizzi una matrice di interi in cui ciascun elemento è dato dalla somma
dei propri indici*/

#include <iostream>
using namespace std;
int main()
{
    int matrice[10][10];

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            matrice[i][j] = i + j;
        }
    }

    cout << "\n------- Stampa della matrice:----- \n";
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            cout << matrice[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}