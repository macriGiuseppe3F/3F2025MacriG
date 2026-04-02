/*
2Scrivi un programma che determini to stipendio di un lavoratore dopo 22 giorni lavorativi,
sapendo che guadagna 10 € il primo giorno,
20 € il secondo, 40 € il terzo, 80 € il quarto, e cosi via.
*/

#include <iostream>
using namespace std;
int main()
{
    int stipendio = 0;
    int guadagno_giornaliero = 10; // Guadagno del primo giorno

    for (int giorno = 1; giorno <= 22; giorno++)
    {
        stipendio += guadagno_giornaliero; // Aggiungiamo il guadagno del giorno corrente allo stipendio totale
        guadagno_giornaliero *= 2;         // Raddoppiamo il guadagno per il giorno successivo
    }

    cout << "Lo stipendio dopo 22 giorni lavorativi è: " << stipendio << " €" << endl;

    return 0;
}