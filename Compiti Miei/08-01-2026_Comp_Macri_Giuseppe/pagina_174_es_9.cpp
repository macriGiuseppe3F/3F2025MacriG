/*Stampa N numeri (N è letto in input e deve essere > 0)
in modo tale che il numero stampato sia il doppio del precedente.*/

#include <iostream>
using namespace std;
int main(){

    //dichiarazione di N e N_output
    int N,N_output=1;   

    //Input variabili
    cout<<"\nInserisci un numero N positivo";
    cin>>N;

    //Controllo se N è <0
    if(N<0){
        cout<<"\nErrore, il numero deve essere maggiore di 0";
    }

    //Ciclo for che si ripete finche i non è minore di N, e stampa N_output ripetuto per 2.
    for(int i=0; i<N; i++){
        cout<<"\n"<< N_output;
        N_output = N_output*2;
    }

    return 0;
}