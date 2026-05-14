#include <iostream>
#include <cstring>

#include "gestoreramordinata.h"

using namespace std;

GestoreRAMOrdinata::GestoreRAMOrdinata() {

    numeroContatti = 0;

    creaDemo();
}

void GestoreRAMOrdinata::aggiungi(Contatto c) {

    if(numeroContatti >= MAX) {
        cout << "Rubrica piena" << endl;
        return;
    }

    int posizione = 0;

    while(posizione < numeroContatti &&
          strcmp(c.getCognome(),
                 contatti[posizione].getCognome()) > 0) {

        posizione++;
    }

    for(int i = numeroContatti; i > posizione; i--) {
        contatti[i] = contatti[i - 1];
    }

    contatti[posizione] = c;

    numeroContatti++;
}

int GestoreRAMOrdinata::cerca(char cognome[]) {

    int sx = 0;
    int dx = numeroContatti - 1;

    while(sx <= dx) {

        int centro = (sx + dx) / 2;

        int confronto =
            strcmp(cognome,
                   contatti[centro].getCognome());

        if(confronto == 0) {
            return centro;
        }

        if(confronto < 0) {
            dx = centro - 1;
        }
        else {
            sx = centro + 1;
        }
    }

    return -1;
}

void GestoreRAMOrdinata::elimina(int posizione) {

    if(posizione < 0 || posizione >= numeroContatti) {
        cout << "Posizione non valida" << endl;
        return;
    }

    for(int i = posizione;
        i < numeroContatti - 1;
        i++) {

        contatti[i] = contatti[i + 1];
    }

    numeroContatti--;
}

void GestoreRAMOrdinata::stampa() {

    cout << endl;
    cout << "=== RUBRICA ===" << endl;

    for(int i = 0; i < numeroContatti; i++) {

        cout << i << " - ";

        contatti[i].stampa();
    }

    cout << endl;
}

void GestoreRAMOrdinata::creaDemo() {

    Contatto c;

    c.setNome((char*)"Mario");
    c.setCognome((char*)"Rossi");
    c.setTelefono((char*)"1111");
    aggiungi(c);

    c.setNome((char*)"Luigi");
    c.setCognome((char*)"Verdi");
    c.setTelefono((char*)"2222");
    aggiungi(c);

    c.setNome((char*)"Anna");
    c.setCognome((char*)"Bianchi");
    c.setTelefono((char*)"3333");
    aggiungi(c);

    c.setNome((char*)"Paolo");
    c.setCognome((char*)"Neri");
    c.setTelefono((char*)"4444");
    aggiungi(c);

    c.setNome((char*)"Sara");
    c.setCognome((char*)"Gialli");
    c.setTelefono((char*)"5555");
    aggiungi(c);

    c.setNome((char*)"Luca");
    c.setCognome((char*)"Blu");
    c.setTelefono((char*)"6666");
    aggiungi(c);

    c.setNome((char*)"Marco");
    c.setCognome((char*)"Rosa");
    c.setTelefono((char*)"7777");
    aggiungi(c);

    c.setNome((char*)"Elena");
    c.setCognome((char*)"Viola");
    c.setTelefono((char*)"8888");
    aggiungi(c);

    c.setNome((char*)"Giulia");
    c.setCognome((char*)"Marroni");
    c.setTelefono((char*)"9999");
    aggiungi(c);

    c.setNome((char*)"Stefano");
    c.setCognome((char*)"Ferri");
    c.setTelefono((char*)"1010");
    aggiungi(c);
}