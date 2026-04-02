/*Scrivi un Programma in C o C++ che ricevuti in input i nomi(anno e sezione per esempio terza c)
di tre classi di una scuola e il relativo numero di studenti, determini:
-il nome della classe più numerosa e il numero di allievi
-il numero medio di allievi nelle classi
-i nomi dele classi che hanno meno allievi della classe media
-quante e quali cclassi hanno meno di 20 allievi*/

#include <iostream>
#include <string>
using namespace std;
int main()
{
    // Dichiarazione delle variabili per i nomi delle classi e il numero di studenti
    string classe1, classe2, classe3;
    int studenti1, studenti2, studenti3;

    // Richiesta all'utente di inserire i nomi delle classi e il numero di studenti
    cout << "Inserisci il nome della prima classe: ";
    cin >> classe1;
    cout << "Inserisci il numero di studenti nella prima classe: ";
    cin >> studenti1;

    cout << "Inserisci il nome della seconda classe: ";
    cin >> classe2;
    cout << "Inserisci il numero di studenti nella seconda classe: ";
    cin >> studenti2;

    cout << "Inserisci il nome della terza classe: ";
    cin >> classe3;
    cout << "Inserisci il numero di studenti nella terza classe: ";
    cin >> studenti3;

    // Determinazione della classe più numerosa
    string classe_piu_numerosa;
    int max_studenti = max(studenti1, max(studenti2, studenti3));
    if (max_studenti == studenti1)
        classe_piu_numerosa = classe1;
    else if (max_studenti == studenti2)
        classe_piu_numerosa = classe2;
    else
        classe_piu_numerosa = classe3;

    // Calcolo del numero medio di allievi nelle classi
    double media_studenti = (studenti1 + studenti2 + studenti3) / 3.0;

    // Stampa dei risultati
    cout << "La classe più numerosa è " << classe_piu_numerosa << " con " << max_studenti << " studenti.\n";
    cout << "Il numero medio di allievi nelle classi è: " << media_studenti << "\n";

    // Identificazione delle classi con meno allievi della media
    cout << "Classi con meno allievi della media:\n";
    if (studenti1 < media_studenti)
        cout << "- " << classe1 << "\n";
    if (studenti2 < media_studenti)
        cout << "- " << classe2 << "\n";
    if (studenti3 < media_studenti)
        cout << "- " << classe3 << "\n";

    // Conteggio e nomina delle classi
    int count_meno_20 = 0;
    cout << "Classi con meno di 20 allievi:\n";
    if (studenti1 < 20)
    {
        cout << "- " << classe1 << "\n";
        count_meno_20++;
    }
    if (studenti2 < 20)
    {
        cout << "- " << classe2 << "\n";
        count_meno_20++;
    }
    if (studenti3 < 20)
    {
        cout << "- " << classe3 << "\n";
        count_meno_20++;
    }
    cout << "Numero di classi con meno di 20 allievi: " << count_meno_20 << "\n";
    return 0;
}