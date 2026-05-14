#ifndef GESTORERAMORDINATA_H
#define GESTORERAMORDINATA_H

#include "gestorecontattiabc.h"

class GestoreRAMOrdinata : public GestoreContattiABC {

private:

    static const int MAX = 100;

    Contatto contatti[MAX];

    int numeroContatti;

public:

    GestoreRAMOrdinata();

    void aggiungi(Contatto c);

    int cerca(char cognome[]);

    void elimina(int posizione);

    void stampa();

    void creaDemo();
};

#endif