/*Esempio di bubble sort:
--- Meccanismo generale riassunto
1️⃣ Il primo ciclo controlla quante volte ripetere
2️⃣ Il secondo ciclo confronta elementi vicini
3️⃣ Se sono in ordine sbagliato → li scambia
4️⃣ Il numero più grande "sale" in fondo
5️⃣ Si ripete finché tutto è ordinato

*/

#include <iostream>
using namespace std;
int main()
{

    // Dichiarazione del'array (5 elementi)
    int array[] = {4, 3, 10, 1, 34};

    // Dichiariamo N ovvero quante volte ripetere il controllo (N elementi array)
    int N = 5;

    // Ciclo For con n-1 iterazioni (perché l'ultimo elemento sarà già ordinato dopo n-1 iterazioni)
    for (int i = 0; i < N - 1; i++)
    {
        // Secondo ciclo for per controllare gli elementi vicini dell'array
        for (int j = 0; j < N - 1 - i; j++)
        {
            if (array[j] > array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }

    // stampa dell array ordinato
    for (int i = 0; i < N; i++)
    {
        cout << array[i] << " ";
    }

    return 0;
}