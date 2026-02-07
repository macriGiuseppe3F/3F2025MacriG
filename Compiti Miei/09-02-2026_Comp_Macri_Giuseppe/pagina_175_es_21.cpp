/*
21 Scrivi un programma per inserire coppie di numeri.
 L'inserimento termina quando i due numeri della coppia risultano uguali
 oppure quando il secondo numero della coppia é maggiore del primo. A quel punto,
si deve stampare quale delle due condizioni ha fatto terminare l'inserimento e quante coppie sono state inserite.*/

#include <iostream>
using namespace std;
int main()
{
    int num1, num2, count_coppie = 0;

    while (true)
    {
        cout << "Inserisci la prima coppia di numeri (num1 num2): ";
        cin >> num1 >> num2;

        // Controlliamo se i numeri sono uguali o se il secondo è maggiore del primo
        if (num1 == num2)
        {
            cout << "L'inserimento è terminato perché i numeri sono uguali." << endl;
            break; // Termina il ciclo
        }
        else if (num2 > num1)
        {
            cout << "L'inserimento è terminato perché il secondo numero è maggiore del primo." << endl;
            break; // Termina il ciclo
        }

        count_coppie++; // Incrementa il contatore delle coppie inserite
    }

    cout << "Numero di coppie inserite: " << count_coppie << endl;

    return 0;
}