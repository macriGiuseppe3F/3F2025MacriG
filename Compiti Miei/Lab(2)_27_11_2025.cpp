/*Esercizio di Laboratorio del 27 novembre 2025. Pag 118 es 18.
Un residence  vuole un sistema per calcolare il costo per soggiornare nelle sue camere,
che possono essere affittate solo per una o due settimane.
Scrivi un programma che ricevuti in input il numero di settimane di soggiorno e un indicatore che chieda 
se si desidera un supplemento di lenzuola, effetui il calcolo del costo totale di soggiorno, considerando queste tariffe:
-Quota fissa 100$
-Una settimana 600$
-Due settimane 1100$
-Eventuale supplemento lenzuola: 20$ a settimana. */
#include <iostream>
using namespace std;
int main(){

    const float Quota_fissa = 100;
    float Supplemento = 20, scelta, costo_totale=0,scelta2;

    do{
    cout<<"\nPer quante settimane desideri soggiornare nel residence? (1 o 2 settimane)";
    cin>>scelta;
    if(scelta!=1 && scelta!=2){
        cout<<"\nErrore, è possibile prenotare solo per 1 o 2 settimane.";
    }else{
        if(scelta==1){
            costo_totale=costo_totale +600;
        }else{
            costo_totale=costo_totale+1100;
        }
    }
    }while(scelta!=1 && scelta!=2);

    cout<<"\nDesideri il supplemento di lenzuola extra?(1=si 0=no)";
    cin>>scelta2;
    if(scelta2==1){
        costo_totale= costo_totale +20;
    }

    costo_totale=costo_totale+Quota_fissa;
    cout<<"\nIl prezzo totale del soggiorno è di £: "<<costo_totale;

    return 0;
}