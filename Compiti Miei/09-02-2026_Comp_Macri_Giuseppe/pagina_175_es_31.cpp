/*
Vuoi effettuare delle statistiche sulle vendite di un quotidiano. Per ogni giorno del mese vengono forniti il numero del giorno (1, 2, 3, ecc.), il giorno della settimana (lunedi, martedi, ecc.) e il numero di copie vendute.
Determina:
il giomo che ha registrato la vendita massima di copie;
la media giomaliera delle vendite,
la media delle vendite domenicali
*/

#include <iostream>
#include <string>
using namespace std;
int main()
{
    int giorno, copie_vendute, totale_copie = 0, totale_domenica = 0, count_giorni = 0, count_domenica = 0;
    string giorno_settimana;
    int max_copie = 0, giorno_max_copie = 0;

    cout << "Inserisci i dati per ogni giorno del mese (giorno giorno_settimana copie_vendute). Inserisci 0 per terminare." << endl;

    while (true)
    {
        cout << "Giorno: ";
        cin >> giorno;
        if (giorno == 0) // Termina l'inserimento quando il giorno è 0
            break;

        cout << "Giorno della settimana: ";
        cin >> giorno_settimana;
        cout << "Copie vendute: ";
        cin >> copie_vendute;

        // Aggiorniamo il totale delle copie vendute e il conteggio dei giorni
        totale_copie += copie_vendute;
        count_giorni++;

        // Verifichiamo se è domenica e aggiorniamo il totale e il conteggio delle domeniche
        if (giorno_settimana == "domenica")
        {
            totale_domenica += copie_vendute;
            count_domenica++;
        }

        // Verifichiamo se le copie vendute sono maggiori del massimo registrato
        if (copie_vendute > max_copie)
        {
            max_copie = copie_vendute;
            giorno_max_copie = giorno;
        }
    }

    // Calcoliamo le medie
    double media_giornaliera = (count_giorni > 0) ? static_cast<double>(totale_copie) / count_giorni : 0;
    double media_domenicale = (count_domenica > 0) ? static_cast<double>(totale_domenica) / count_domenica : 0;

    // Stampiamo i risultati
    cout << "Il giorno con la vendita massima di copie è: " << giorno_max_copie << " con " << max_copie << " copie vendute." << endl;
    cout << "La media giornaliera delle vendite è: " << media_giornaliera << endl;
    cout << "La media delle vendite domenicali è: " << media_domenicale << endl;

    return 0;
}