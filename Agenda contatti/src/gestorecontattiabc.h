#ifndef GESTORECONTATTIABC_H
#define GESTORECONTATTIABC_H

#include "contatto.h"

class GestoreContattiABC {

public:

    virtual void aggiungi(Contatto c) = 0;

    virtual int cerca(char cognome[]) = 0;

    virtual void elimina(int posizione) = 0;

    virtual void stampa() = 0;

    virtual ~GestoreContattiABC() {}
};

#endif