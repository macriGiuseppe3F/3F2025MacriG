/*
Letti da input i valori di N misurazioni, scrivi un programma che calcoli e stampi:

errore assoluto: e-(valoremax - valoremin)/2;
errore relativo: e_{2} = e_{2} / m_{1} dove m è la media aritmetica dei valori,
 errore percentuale: e_{p} = e_{p} * 100
*/

#include <iostream>
using namespace std;
int main()
{
    int N;
    double valore, valore_max = -1e9, valore_min = 1e9, somma = 0;

    cout << "Inserisci il numero di misurazioni (N): ";
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cout << "Inserisci la misurazione " << i + 1 << ": ";
        cin >> valore;

        // Aggiorniamo il valore massimo e minimo
        if (valore > valore_max)
            valore_max = valore;
        if (valore < valore_min)
            valore_min = valore;

        // Sommiamo i valori per calcolare la media
        somma += valore;
    }

    // Calcoliamo la media aritmetica
    double media = somma / N;

    // Calcoliamo l'errore assoluto
    double errore_assoluto = (valore_max - valore_min) / 2;

    // Calcoliamo l'errore relativo
    double errore_relativo = errore_assoluto / media;

    // Calcoliamo l'errore percentuale
    double errore_percentuale = errore_relativo * 100;

    // Stampiamo i risultati
    cout << "Errore assoluto: " << errore_assoluto << endl;
    cout << "Errore relativo: " << errore_relativo << endl;
    cout << "Errore percentuale: " << errore_percentuale << "%" << endl;

    return 0;
}
