/*Scrivere una funzione che conti quanti elementi di un vettore v sono maggiori di un valore t passato come parametro in c++.*/#include <iostream>
using namespace std;

/*
 Funzione che conta quanti elementi del vettore
 sono maggiori di un valore t passato come parametro
*/
int contaMaggiori(int v[], int n, int t) {
    
    int cont = 0; // variabile che servirà a contare gli elementi maggiori di t

    // ciclo che scorre tutti gli elementi del vettore
    for(int i = 0; i < n; i++) {
        
        // controlla se l'elemento corrente è maggiore di t
        if(v[i] > t) {
            cont++; // se la condizione è vera aumenta il contatore
        }
    }

    // restituisce il numero totale di elementi maggiori di t
    return cont;
}

int main() {
    // dichiarazione e inizializzazione del vettore
    int v[] = {4, 10, 3, 7, 15, 2}; 
    int n = 6; 
    int t; 

    // richiesta del valore t all'utente
    cout << "Inserisci il valore t: ";
    cin >> t;

    // chiamata della funzione
    int risultato = contaMaggiori(v, n, t);

    // output.
    cout << "Gli elementi maggiori di " << t << " sono: " << risultato;

    return 0;
}