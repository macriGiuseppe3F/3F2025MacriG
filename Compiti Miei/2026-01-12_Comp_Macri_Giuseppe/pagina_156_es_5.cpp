/*Scrivi un programma che, inserite in input N coppie di numeri, determini la coppia con la media maggiore.*/

#include <iostream>
using namespace std;

int main()
{
    int N;
    float n1, n2, media;
    float maxmedia = 0;
    float max_n1 = 0, max_n2 = 0; // per salvare la coppia con media maggiore

    cout << "Quante coppie di numeri vuoi inserire? ";
    cin >> N; // inserimento N coppie

    for (int i = 1; i <= N; i++)
    {
        cout << "Inserisci il primo numero della coppia #" << i << ": ";
        cin >> n1;
        cout << "Inserisci il secondo numero della coppia #" << i << ": ";
        cin >> n2; // inserimento coppia di numeri

        media = (n1 + n2) / 2;
        cout << "La media della coppia #" << i << " è: " << media << endl; // calcolo media e output

        if (media > maxmedia)
        { // confronto con la media massima trovata finora
            maxmedia = media;
            max_n1 = n1;
            max_n2 = n2;
        }
    } // Fine ciclo for

    cout << "\nLa coppia con la media maggiore è: (" << max_n1 << ", " << max_n2 << ")";
    cout << "\nLa media massima è: " << maxmedia; // output della coppia con media maggiore e della media stessa

    return 0;
}
