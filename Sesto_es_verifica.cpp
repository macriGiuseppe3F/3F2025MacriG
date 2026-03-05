/*Scrivere una funzione che stampi tutti gli elementi di un vettore che non sono
"Vallate ", cioè che non sono minori dei valori nelle posizioni accanto.*/

#include <iostream>
using namespace std;

void stampaNonVallate(int v[], int n) {
    for (int i = 0; i < n; i++) {

        // gli estremi non possono essere vallate
        if (i == 0 || i == n - 1) {
            cout << v[i] << " ";
        }
        else {
            if (!(v[i] < v[i-1] && v[i] < v[i+1])) {
                cout << v[i] << " ";
            }
        }
    }
}

int main() {

    //dichiarazioni e inizializzazione vettore.
    int v[] = {5, 2, 6, 1, 7, 3, 8};
    int n = 7;

    //richiama la funzione
    stampaNonVallate(v, n);

    return 0;
}