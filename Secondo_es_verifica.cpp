/*Scrivere una funzione che stampi tutti gli elementi pari di un vettore.*/
#include <iostream>
using namespace std;

//Funzione cbhe stampa i numeri pari.
void stampaPari(int vettore[], int n) {
    //Ciclo for per la ricerca dell'elemento pari
    for(int i = 0; i < n; i++) {
        //Controllo
        if(vettore[i] % 2 == 0) {
            //Output
            cout <<vettore[i] << " ";
        }
    }
}

int main() {
    //Dichiarazione variabili.
    int v[] = {3, 4, 7, 10, 15, 8};
    int n = 6;
    //richiama la funzione
    stampaPari(v, n);

    return 0;
}







