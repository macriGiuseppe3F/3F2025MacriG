/*Scrivere una funzione ricorsiva che calcoli la somma dei primi n numeri interi positivi: 1+2+3...+n.*/

#include <iostream>
using namespace std;

//funzione di somma dei positivi
int somma_positivi(int n) {
    if (n == 1) {          
        return 1;
    } else {               
        return n + somma_positivi(n - 1);
    }
}

int main() {
    
    //dichiarazione
    int n;

    cout << "Inserisci un numero: "; //input
    cin >> n;

    cout << "La somma dei primi " << n << " numeri e': " << somma_positivi(n) << endl;  //Output somma dei positivi

    return 0;
}

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