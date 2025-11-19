// Esercizio di Lab 11, Pag del Libro 68.
/*Si deve calcolare l'importo da pagare per il noleggio di un automobile
ricevendo in input il nome utente, il numero di kilometri che l'automobile presentava al momento,
e il numero di km finali. Il costo al km è di $1,20.
*/
#include <iostream>
using namespace std;
int main()
{

    string nome_cliente;                                // Dichiarazione della stringa.
    float km_iniziali, km_finali, km_percorsi, importo; // Dichiarazioni delle variabili reali.

    cout << "\nInserisci il Nome del cliente";
    cin >> nome_cliente;
    cout << "\nInserisci i Kilometri iniziali";
    cin >> km_iniziali;
    cout << "\nInserisci i Kilometri finali";
    cin >> km_finali;

    km_percorsi = km_finali - km_iniziali;
    importo = 1.20 * km_percorsi;
    cout << "\nI km percorsi sono:" << km_percorsi;
    cout << "\nIl cliente di nome:" << nome_cliente << "\ndeve pagare" << importo;

    return 0;
}
