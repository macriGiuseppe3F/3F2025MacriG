/*Scrivere una funzione di ricerca sequenziale che restituisca l'indice della prima occorrenza di un valore x,
passato come parametro, oppure -1 se non trovato in c++*/

#include <iostream>
using namespace std;

//Funzione di ricerca sequenziale
int ricercaSequenziale(int vettore[], int n, int x) {
    for(int i = 0; i < n; i++) {
        if(vettore[i] == x) {
            return i;   // restituisce l'indice della prima occorrenza
        }
    }
    return -1; // se il valore non viene trovato
}

int main() {
    //dichiarazione variabil.
    int v[] = {5, 8, 3, 9, 8, 2};
    int n = 6;
    int x;

    //Inserimento del valore da cercare
    cout << "Inserisci il valore da cercare: ";
    cin >> x;

    //richiama la funzione
    int risultato = ricercaSequenziale(v, n, x);

    //Output finale.
    if(risultato != -1)
        cout << "Valore trovato all'indice: " << risultato;
    else
        cout << "Valore non trovato";

    return 0;
}