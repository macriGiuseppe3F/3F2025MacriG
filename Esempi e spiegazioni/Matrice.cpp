/*Una matrice è una tabella bidimensionale di numeri. che contiene righe e colonne
°MATRICE QUADRATA: matrice con lo stesso numero di righe e colonne
°MATRICE RETTANGOLORE: matrice con un numero diverso di righe e colonne
Solitamente si caricano gli elementi della matrice da un file di testo (.txt)
Algoritmo per stampare e visualizzare una matrice:*/
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // 1. Apriamo il file
    ifstream miofile("matrice.txt");

    // 2. Controllo
    if (!miofile)
    {
        cout << "Errore: Il file non si apre!" << endl;
        return 1; // Chiude il programma se c'e' un errore
    }
    else
    {

        cout << "Il file e' stato aperto correttamente." << endl;
    }

    int matrice[3][4]; // Dichiariamo la matrice 3x4

    // 1. CARICAMENTO: Leggiamo i dati dal file e li mettiamo in memoria
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            miofile >> matrice[i][j];
        }
    }
    miofile.close(); // Abbiamo finito con il file, possiamo chiuderlo

    // 2. STAMPA: Visualizziamo la matrice a video
    cout << "\nMatrice di 3 righe e 4 colonne:" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << matrice[i][j] << "\t"; // \t aggiunge uno spazio ordinato (Tab)
        }
        cout << endl; // Va a capo alla fine di ogni riga
    }

    return 0;
}