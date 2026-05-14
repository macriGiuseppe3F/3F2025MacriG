#ifndef CONTATTO_H
#define CONTATTO_H

class Contatto {

private:

    char nome[30];
    char cognome[30];
    char telefono[20];

public:

    void setNome(char n[]);
    void setCognome(char c[]);
    void setTelefono(char t[]);

    char* getNome();
    char* getCognome();
    char* getTelefono();

    void stampa();
};

#endif