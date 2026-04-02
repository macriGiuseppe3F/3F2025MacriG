/*In un file di testo sono caricati N numeri
interi positivi. Stampa:
a. la media dei numeri dispari e la media dei numeri pari
b. il numero positivo maggiore e il numero negativo minore.

*/

#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int N, numero, somma_pari = 0, somma_dispari = 0, count_pari = 0, count_dispari = 0;
    int max_positivo = 0, min_negativo = 0;

    // Apriamo il file di testo per leggere i numeri
    ifstream file("numeri.txt");
    if (!file.is_open())
    {
        cout << "Errore nell'apertura del file!" << endl;
        return 1;
    }

    // Leggiamo il numero di elementi (N) dal file
    file >> N;

    // Ciclo per leggere i numeri e calcolare le somme e i contatori
    for (int i = 0; i < N; i++)
    {
        file >> numero;

        // Controlliamo se il numero è pari o dispari e aggiorniamo le somme e i contatori
        if (numero % 2 == 0)
        {
            somma_pari += numero;
            count_pari++;
        }
        else
        {
            somma_dispari += numero;
            count_dispari++;
        }

        // Aggiorniamo il massimo positivo e il minimo negativo
        if (numero > 0 && numero > max_positivo)
        {
            max_positivo = numero;
        }
        else if (numero < 0 && (min_negativo == 0 || numero < min_negativo))
        {
            min_negativo = numero;
        }
    }

    // Calcoliamo le medie dei numeri pari e dispari
    double media_pari = (count_pari > 0) ? static_cast<double>(somma_pari) / count_pari : 0;
    double media_dispari = (count_dispari > 0) ? static_cast<double>(somma_dispari) / count_dispari : 0;

    // Stampiamo i risultati
    cout << "Media dei numeri pari: " << media_pari << endl;
    cout << "Media dei numeri dispari: " << media_dispari << endl;
    cout << "Numero positivo maggiore: " << max_positivo << endl;
    cout << "Numero negativo minore: " << min_negativo << endl;

    // Chiudiamo il file
    file.close();

    return 0;
}