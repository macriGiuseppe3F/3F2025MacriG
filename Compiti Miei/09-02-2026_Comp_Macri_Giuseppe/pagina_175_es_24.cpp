/*
Dati in input i risultati relativi a N seggi elettorali (contenuti nel file Risultati.txt),
per ogni seggio hal le seguenti informazioni:

numero iscritti;
numero votanti;
numero di schede nulle,
numero di schede bianche.
Scrivi un programma che stampi la percentuale dei votanti, la percentuale delle schede bianche e delle schede nulle.
Inserisci commenti esplicativi al codice.*/

#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int N, iscritti, votanti, schede_nulle, schede_bianche;
    double percentuale_votanti, percentuale_schede_nulle, percentuale_schede_bianche;

    // Apriamo il file di testo per leggere i risultati
    ifstream file("Risultati.txt");
    if (!file.is_open())
    {
        cout << "Errore nell'apertura del file!" << endl;
        return 1; // Termina il programma con un codice di errore
    }

    // Leggiamo il numero di seggi (N) dal file
    file >> N;

    // Ciclo per leggere i dati di ogni seggio e calcolare le percentuali
    for (int i = 0; i < N; i++)
    {
        file >> iscritti >> votanti >> schede_nulle >> schede_bianche;

        // Calcoliamo le percentuali
        percentuale_votanti = (static_cast<double>(votanti) / iscritti) * 100;
        percentuale_schede_nulle = (static_cast<double>(schede_nulle) / votanti) * 100;
        percentuale_schede_bianche = (static_cast<double>(schede_bianche) / votanti) * 100;

        // Stampiamo i risultati per il seggio corrente
        cout << "Seggio " << i + 1 << ":" << endl;
        cout << "Percentuale dei votanti: " << percentuale_votanti << "%" << endl;
        cout << "Percentuale delle schede nulle: " << percentuale_schede_nulle << "%" << endl;
        cout << "Percentuale delle schede bianche: " << percentuale_schede_bianche << "%" << endl;
        cout << endl; // Aggiungiamo una riga vuota per separare i seggi
    }

    file.close(); // Chiudiamo il file dopo aver letto tutti i dati

    return 0; // Termina il programma con successo
}