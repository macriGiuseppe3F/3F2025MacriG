/*su alcuni voli aerei il bagaglio fino a 20kg non si paga. Oltre questo limite
si deve pagare per ogni kG IN PIù, IL 2% della tariffa del biglietto aereo.
Scrivi un programma  in c++ che, ricevuti in input la tariffa del biglietto e il peso in kg del bagaglio.
Stampi il prezzo totale del biglietto*/

#include <iostream>
using namespace std;
int main()
{
    // Dichiarazione delle variabili per la tariffa del biglietto e il peso del bagaglio
    double tariffa_biglietto;
    double peso_bagaglio;

    // Richiesta all'utente di inserire la tariffa del biglietto
    cout << "Inserisci la tariffa del biglietto aereo: ";
    cin >> tariffa_biglietto;

    // Richiesta all'utente di inserire il peso del bagaglio
    cout << "Inserisci il peso del bagaglio in kg: ";
    cin >> peso_bagaglio;

    // Calcolo del costo aggiuntivo se il peso del bagaglio supera i 20 kg
    double costo_totale = tariffa_biglietto;
    if (peso_bagaglio > 20)
    {
        double peso_extra = peso_bagaglio - 20;
        double costo_extra = peso_extra * (0.02 * tariffa_biglietto);
        costo_totale += costo_extra;
    }

    // Stampa del prezzo totale del biglietto
    cout << "Il prezzo totale del biglietto è: " << costo_totale << " euro\n";

    return 0;
}