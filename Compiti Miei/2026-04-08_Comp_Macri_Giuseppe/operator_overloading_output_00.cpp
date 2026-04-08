// overload_date.cpp
// compile with: /EHsc
#include <stdio.h>
#include <iostream>
using namespace std;

class Date {

public:
    int mo, // (month)  mese
    da,    // day (giorno)
    yr; // year (anno)

    Date(int m, int d, int y) {
        mo = m; 
        da = d; 
        yr = y;
    }
    // friend ostream& operator<<(ostream& os, const Date& dt);
};

ostream& operator<<(ostream& os, const Date& dt) {
    os << "data da op. overloaded: " << dt.mo << '/' << dt.da << '/' << dt.yr;
    return os;
}


ostream& operator<<(ostream& os, const char * s) {
    printf("stringa: %s",s);
    return os;
}


int main() {

    Date dt(11, 6, 93);

    cout << dt << endl;
    cout << "hello" << endl;
}