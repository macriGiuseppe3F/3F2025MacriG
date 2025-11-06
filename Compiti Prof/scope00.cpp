#include <math.h>

#include <iostream>
using namespace std;

int var_globale = 10;

//float lunghezza_da_periodo(double p);
float f1(double p) {

    var_globale += 1; // istruzione senza senzo, didattica
    float risultato = pow((p / 6.2832), 2) * g; 

  return risultato; 
}


float f2(int n) {

    var_globale += 1; // istruzione senza senzo, didattica

    // risultato = 3;  // rimuovere il commento e verificare se compila

    {  // un "blocco" di codice definisce uno scope
        
      int block_local = 1;
        // cout << block_local;

        {   // blocco nidificato definisce scope nidificato
            int block_local = 4; // stesso nome della variabile nel block esterno
            cout << block_local;

            int block_local_nested = 4;
        }
        // cout << block_local_nested;  // provare a rimuovere commento e compilare
    }
    // cout << block_local;  // provare a rimuovere commento e compilare

    return n^2; // operazione senza senso, puramente didattica
}


int main(void) {
  
  float lunghezza = 0;
  
  f2(3);

  return 0;
}

void f3() {

    // lunghezza è definito nel mail
    // cout << lunghezza << endl; // provare a rimuovere commento
}
