/*
Size Of Si utilizza per stampare queste caratteristiche di un array o di un vettore: 
-Byte totali
-Byte di un singolo elemento
-Elementi totali  

*/

#include <iostream>
using namespace std;
int main(){

    int vettore[] = {10,20,30,40,50};

    cout<<"Byte totali:"          <<sizeof(vettore);
    cout<<"\nByte di un elemento:"<<sizeof(vettore[0]);
    cout<<"\nElementi totali:"    << sizeof(vettore) / sizeof(vettore[0]);
}