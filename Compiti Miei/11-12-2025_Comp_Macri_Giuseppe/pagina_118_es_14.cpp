/*Un parcheggio ha tariffa 2 euro per la prima ora di sosta e 1 euro
per ogni ora successiva. Conoscendo l'orario di entrata e quello di uscita di una autovettura
(espressi in ore e minuti), emetti uno scontrino con l'ora di entrata, l'ora di uscita, la durata dela sosta
e il relativo costo. Aggiungi i commenti per specificare il funzionamento del programma*/

#include <iostream>
using namespace std;
int main()
{
    // Dichiarazione delle variabili per l'orario di entrata e uscita
    int entrata_ore, entrata_minuti;
    int uscita_ore, uscita_minuti;

    // Richiesta all'utente di inserire l'orario di entrata
    cout << "Inserisci l'orario di entrata (ore minuti): ";
    cin >> entrata_ore >> entrata_minuti;

    // Richiesta all'utente di inserire l'orario di uscita
    cout << "Inserisci l'orario di uscita (ore minuti): ";
    cin >> uscita_ore >> uscita_minuti;

    // Calcolo della durata della sosta in minuti
    int durata_minuti = (uscita_ore * 60 + uscita_minuti) - (entrata_ore * 60 + entrata_minuti);

    // Calcolo delle ore e dei minuti di sosta
    int durata_ore = durata_minuti / 60;
    int durata_resto_minuti = durata_minuti % 60;

    // Calcolo del costo della sosta
    int costo;
    if (durata_ore == 0 && durata_resto_minuti > 0)
    {
        costo = 2; // Prima ora
    }
    else
    {
        costo = 2 + (durata_ore - 1) * 1; // Prima ora + ore successive
        if (durata_resto_minuti > 0)
        {
            costo += 1; // Aggiunta di un'ora se ci sono minuti extra
        }
    }

    // Emissione dello scontrino
    cout << "Scontrino:\n";
    cout << "Orario di entrata: " << entrata_ore << ":" << (entrata_minuti < 10 ? "0" : "") << entrata_minuti << "\n";
    cout << "Orario di uscita: " << uscita_ore << ":" << (uscita_minuti < 10 ? "0" : "") << uscita_minuti << "\n";
    cout << "Durata della sosta: " << durata_ore << " ore e " << durata_resto_minuti << " minuti\n";
    cout << "Costo totale: " << costo << " euro\n";

    return 0;
}