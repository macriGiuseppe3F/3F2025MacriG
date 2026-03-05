/*Scrivere una funzione che inserisca un valore, passato come parametro,
in una posizione pos del vettore passata come paranetro, spostando prima tutti gli elementi dalla posizione pos a fine vettore a destra
(quindi eliminando quello che era l'ultimo elemento del vettore)*/

#include <iostream>
using namespace std;

void inserisci(int v[], int n, int pos, int valore) {
    // sposta gli elementi a destra
    for (int i = n - 1; i > pos; i--) {
        v[i] = v[i - 1];
    }

    // inserisce il nuovo valore, assegna pos a v
    v[pos] = valore;
}

int main() {

    //dichiarazione e inizializzazione vettore.
    int v[6] = {1, 2, 3, 4, 5, 6};
    int n = 6;

    inserisci(v, n, 2, 99);

    // ciclo per output.
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }

    return 0;
}