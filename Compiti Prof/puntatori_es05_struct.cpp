#include <iostream>

using namespace std;

struct Point {
    Point(float x, float y);
    float x;
    float y;
}; // variabile globale

Point::Point(float x, float y) {
    
    this->x = x;
    this->y = y;
    // x = x;
    //y = y;
    cout << "";
}

int main() {

    Point p(10,11);
    Point * pointPtr = &p;

    // . operatore di selezione
    cout <<  "(" << p.x << ", " << p.y << " )\n";  

    // -> operatore di derefernziazione e, poi, selezione
    cout <<  "(" << pointPtr->x << ", " << pointPtr->y << " )\n";  
    pointPtr->x = 3;
    (*pointPtr).x = 33;

    // istruzione sotto non funziona per priorita' operatori
    // "message": "expression must have class type but it has type "Point *" ...
    // *pointPtr.x = 33;

    pointPtr->y = 4;
    (*pointPtr).y = 44;

    cout  <<  "(" << p.x  << ", " << p.y << " )\n";

    return 0;
}
