/*Calcola il valore della circonferenza e quello del'area di tutti i cerchi
con raggio intero compreso tra 1 e 20*/

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    const double PI = 3.14159;

    cout << fixed << setprecision(2);
    cout << "Raggio\tCirconferenza\tArea";
    cout << "----------------------------------";

    for (int raggio = 1; raggio <= 20; ++raggio)
    {
        double circonferenza = 2 * PI * raggio;
        double area = PI * raggio * raggio;

        cout << raggio << "\t" << circonferenza << "\t\t" << area;
    }

    return 0;
}