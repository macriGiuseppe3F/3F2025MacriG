/*Verifica se un array è ordinato (ogni elemento è maggiore di quello che lo precede)*/

#include <iostream>
using namespace std;
int main()
{

    int arr[] = {1, 5, 2, 7, 9};
    int n = 5;

    bool ordinato = true; // variabile per tenere traccia se l'array è ordinato o meno
    for (int i = 1; i < n; i++)
    {
        if (arr[i] <= arr[i - 1])
        {
            ordinato = false; // se troviamo un elemento che non è maggiore del precedente, l'array non è ordinato
            break;            // possiamo uscire dal ciclo
        }
    }

    if (ordinato)
    {
        cout << "L'array è ordinato" << endl;
    }
    else
    {
        cout << "L'array non è ordinato" << endl;
    }

    return 0;
}