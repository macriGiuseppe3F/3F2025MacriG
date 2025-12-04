/*Scrivi in C o C++ un programma che acquisita l'età di un individuo,
sapendo che dai 14 anni si può guidare con lo scooter con cilindrata di 50cc,
dai 16 anni la moto fino a 125cc, dai 18 anni l'auto fino a 95 cavalli e dai 21 anni
qualsiasi auto o moto senza limitazioni, restituisca l'elenco dei mezzi che l'individuo può  guidare*/

#include <iostream>
using namespace std;

int main() {

    int eta;

    cout << "\nInserisci la tua età: ";
    cin >> eta;

    if (eta == 14 || eta == 15) {
        cout << "\nAttualmente puoi guidare lo scooter 50cc";
    } 
    else if (eta == 16 || eta == 17) {
        cout << "\nPuoi guidare lo scooter 125cc";
    } 
    else if (eta >= 18 && eta <= 20) {
        cout << "\nPuoi guidare le auto (patente B)";
    } 
    else {
        cout << "\nPuoi guidare qualsiasi auto o mezzo senza limitazioni";
    }

    return 0;
}
