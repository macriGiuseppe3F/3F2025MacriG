#include <iostream>
#include <cstring>

#define PIPPO 1

using namespace std;

class Date {

public:
    Date(int m, int d, int y) {
        mo = m; 
        da = d; 
        yr = y;
    }

    int mo, // (month)  mese
    da,    // day (giorno)
    yr; // year (anno)
    // friend ostream& operator<<(ostream& os, const Date& dt);
};


void descrivi(const int valore) {

    cout << valore << " ";
    
    if (valore > 10000) 
    cout << "e' un valore abbastanza alto";
    else
    cout << "non e' un valore alto";
    cout << endl;
}


void descrivi(const char * valore) {
    cout << "la lunghezza e' " << strlen(valore);
    
    cout << endl;
}

#ifdef PIPPO
ostream& operator<<(ostream& os, const Date& dt) {
    os << "data da op. overloaded: " << dt.mo << '/' << dt.da << '/' << dt.yr;
    return os;
}
#endif

void descrivi(const Date& valore) {
    
#ifdef PIPPO
    cout << valore << " ";
#else
    cout << "La data ";
#endif

    if (valore.mo > 6) 
        cout << "e' dopo meta' anno";
    else
        cout << "e' prima di meta' anno";
    cout << endl;
}



int main() {
 
    Date dt(11, 6, 93);

    descrivi(10);
    descrivi("ciao");
    descrivi(dt);
}