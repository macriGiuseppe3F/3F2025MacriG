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