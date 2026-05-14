#include <iostream>
#include <cstring>

#include "contatto.h"

using namespace std;

void Contatto::setNome(char n[]) {
    strcpy(nome, n);
}

void Contatto::setCognome(char c[]) {
    strcpy(cognome, c);
}

void Contatto::setTelefono(char t[]) {
    strcpy(telefono, t);
}

char* Contatto::getNome() {
    return nome;
}

char* Contatto::getCognome() {
    return cognome;
}

char* Contatto::getTelefono() {
    return telefono;
}

void Contatto::stampa() {

    cout << nome << " "
         << cognome << " - "
         << telefono << endl;
}