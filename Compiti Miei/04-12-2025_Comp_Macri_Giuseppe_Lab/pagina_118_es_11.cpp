/*Scrivi un Programma per risolvere le equazioni di primo grado
nella forma ax+b=0, dati i valori dei coefficientei A e B*/

#include <iostream>
using namespace std;
int main(){

    float a,b,x;

    cout<<"\nInserisci il coefficiente di A:";
    cin>>a;
    cout<<"\nInserisci il coefficiente di B:";
    cin>>b;
    if(a==0 && b==0){
        cout<<"\nL'equazione ha infinite soluzioni";
    }
    else if(a==0 && b!=0){
        cout<<"\nL'equazione non ha soluzioni";
    }
    else{
        x=-b/a;
        cout<<"\nL'equazione ha come soluzione x="<<x;
    }
    

    return 0;
}