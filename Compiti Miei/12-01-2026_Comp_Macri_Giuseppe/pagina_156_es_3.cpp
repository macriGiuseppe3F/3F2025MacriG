/* Esercizio 3 - Pagina 156
In un file di testo è caricata una sequenza di numeri .
Scrivi un programma che determini la differenza tra il massimo e il minimo valore. */

#include <iostream>
using namespace std;
int main()
{

    int numeri[] = {34, 5, 67, 23, 2, 45};      // Esempio di sequenza di numeri
    int n = sizeof(numeri) / sizeof(numeri[0]); // Calcolo della dimensione dell'array
    int max = numeri[0];                        // dichiarazione variabile massimo
    int min = numeri[0];                        // dichiarazione variabile minimo
    for (int i = 1; i < n; i++)
    {
        if (numeri[i] > max)
        {
            max = numeri[i];
        }
        if (numeri[i] < min)
        {
            min = numeri[i];
        }
    } // Fine ciclo for per trovare massiumo e minimo

    int differenza = max - min;                                                  // calcolo della differenza
    cout << "La differenza tra il massimo e il minimo valore è: " << differenza; // output del risultato
    return 0;
}