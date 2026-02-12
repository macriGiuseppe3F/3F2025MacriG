//Esercizio di Laboratorio del 20 Novembre 2025. Pag 79.
/*Calcolare il costo dei servizi di una copisteria. 
--Fotocopie in bianco e nero: 0.10 cent
--Fotocopie a colori: 0.80 cent.
--Rilegare fotocopie: 1.30 euro.
Stampa in output il num delle fotocopie totali acquistate, il costo delle fotocopie in B/N, 
il costo dele fotocopie a colori e il costo totale del fascicolo di fotocopie rilegato.
*/

#include <iostream>
using namespace std;
int main() {
    
    float Costobn, Costocolor, Rilegatura, CostoTotale=0, CostoRilegatura=0;
    int NumFotobn, NumFotocolor, NumFototot, scelta;

    cout<<"\nQuante fotocopie in bianco e nero desideri? ";
    cin>>NumFotobn;
    cout<<"\nQuante fotocopie a colori desideri? ";
    cin>>NumFotocolor;
    cout<<"\nRilegare le fotocopie? (1=Si / 0=No) ";
    cin>>scelta;
    if(scelta==1){
        CostoRilegatura= 1.30;
        Rilegatura = 1;
    }
    Costobn= NumFotobn * 0.10;
    Costocolor=NumFotocolor*0.80;
    CostoTotale=Costobn+Costocolor+CostoRilegatura;

    cout<<"\nHai acquistato "<< NumFotobn<<" fotocopie in bianco e nero";
    cout<<"\nHai acquistato "<<NumFotocolor<<" fotocopie a colori";
    cout<<"\nHai acquistato "<<Rilegatura<<" rilegatura";
    cout<<"\nIl costo totale dei servizi è di $ "<<CostoTotale;

    return 0;
}