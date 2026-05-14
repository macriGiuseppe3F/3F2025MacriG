/*Dato un vettore di N numeri interi, raddoppia il valore delle componenti il cui indice
è inserito in input.*/

#include <iostream>
using namespace std;
int main()
{
    int v = {1,2,3,4,5,6,7,8,9,10};
    int n= 10;
    int x;

    cout<<"Inserisci l'indice:";<<endl;
    cin>>x;

    for(int i = 0;i<n; i++){
        v[x] = v[x]*2;
        v[i]=v[x];
        cout<<v[i]<<" ";

        }
    return 0;
}