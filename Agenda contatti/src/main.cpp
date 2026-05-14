#include <iostream>
#include <cstring>

#include "gestoreramordinata.h"

using namespace std;

int main() {

    GestoreContattiABC* gestore;

    gestore = new GestoreRAMOrdinata();

    int scelta;

    do {

        cout << endl;
        cout << "1 - Stampa contatti" << endl;
        cout << "2 - Cerca contatto" << endl;
        cout << "3 - Aggiungi contatto" << endl;
        cout << "4 - Elimina contatto" << endl;
        cout << "0 - Esci" << endl;

        cout << "Scelta: ";
        cin >> scelta;

        if(scelta == 1) {

            gestore->stampa();
        }

        else if(scelta == 2) {

            char cognome[30];

            cout << "Cognome da cercare: ";
            cin >> cognome;

            int posizione = gestore->cerca(cognome);

            if(posizione == -1) {
                cout << "Contatto non trovato" << endl;
            }
            else {
                cout << "Contatto trovato in posizione: "
                     << posizione << endl;
            }
        }

        else if(scelta == 3) {

            Contatto c;

            char nome[30];
            char cognome[30];
            char telefono[20];

            cout << "Nome: ";
            cin >> nome;

            cout << "Cognome: ";
            cin >> cognome;

            cout << "Telefono: ";
            cin >> telefono;

            c.setNome(nome);
            c.setCognome(cognome);
            c.setTelefono(telefono);

            gestore->aggiungi(c);

            cout << "Contatto aggiunto" << endl;
        }

        else if(scelta == 4) {

            char cognome[30];

            cout << "Cognome da eliminare: ";
            cin >> cognome;

            int posizione = gestore->cerca(cognome);

            if(posizione == -1) {
                cout << "Contatto non trovato" << endl;
            }
            else {

                gestore->elimina(posizione);

                cout << "Contatto eliminato" << endl;
            }
        }

    } while(scelta != 0);

    delete gestore;

    return 0;
}