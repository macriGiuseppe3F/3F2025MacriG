#include <iostream>

using namespace std;

void mia_funzione(int per_valore, int & per_riferimento) {
    per_valore      = 99;
    per_riferimento = 99;
  cout << "nella funzione per_valore (x1) = " << per_valore << "  per_riferimento (x2) = " << per_riferimento << endl;
}

void byRef(const float &x) {
   cout << x;
}

int main(void) {
  
  int x1 = 10, x2 = 10;

  float z;
  z = x1;
  // byRef(x1);

  float y = 3;
  byRef(y);
  byRef(3.2);




  cout << "inzialmente   x1 = " << x1 << "   x2 = " << x2 << endl;
  mia_funzione(x1, x2);
  cout << "dopo chiamata x1 = " << x1 << "   x2 = " << x2 << endl;


  return 0;
}
