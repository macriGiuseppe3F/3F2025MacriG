/*Esercizio di Laboratorio del 27 Novembre 2025. Pag 118 es 15.
Su alcuni voli aerei il bagaglio fino a 20kg non si paga. Oltre questo limite,
si deve pagare per ogni Kg in più il 2% della tariffa del biglietto aereo.
Scrivi un programma in C++ che, ricevuti in input la tariffa del biglietto e il peso in Kg 
del bagaglio, stampi il prezzo totale del biglietto.
*/

#include <iostream> 
using namespace std;
int main (){
    
    float TariffaBiglietto, PesoBagaglio, CostoBagaglio=0, CostoTotale;
    cout<<"\nInserisci la Tariffa del biglietto aereo: ";
    cin>>TariffaBiglietto;
    cout<<"\nInserisci il peso del bagaglio in Kg: ";
    cin>>PesoBagaglio;
    if(PesoBagaglio>20){
        CostoBagaglio= (PesoBagaglio-20) * (TariffaBiglietto * 0.02);
        cout<<"\nIl costo del bagaglio extra è di: $ "<<CostoBagaglio;
    }
    CostoTotale= TariffaBiglietto + CostoBagaglio;
    cout<<"\nIl costo totale del biglietto è di: $ "<<CostoTotale;

    return 0;
}
