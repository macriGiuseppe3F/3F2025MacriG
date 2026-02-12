/*Scrivi un programma che date l'età di tre fratelli. determini la differenza di età
tra il fratello maggiore e il fratello minore*/

#include <iostream>
using namespace std;
int main(){

    //dichiarazione variabili
    float a,b,c,differenza;

    //inserimento variabili
    cout<<"\nInserisci l'età del primo fratello";
    cin>>a;
    cout<<"\nInserisci l'età del secondo fratello";
    cin>>b;
    cout<<"\nInserisci l'età del terzo fratello";
    cin>>c;

    //controlli per determinare il maggiore e il minore
    if(a>=b && a>=c){
        if(b<=c){
            differenza=a-b;
        }
        else{
            differenza=a-c;
        }
    }
    else if(b>=a && b>=c){
        if(a<=c){
            differenza=b-a;
        }
        else{
            differenza=b-c;
        }
    }
    else{
        if(a<=b){
            differenza=c-a;
        }
        else{
            differenza=c-b;
        }
    }
    cout<<"\nLa differenza di età tra il fratello maggiore e il fratello minore è di: "<<differenza<<" anni";


    return 0;
}
