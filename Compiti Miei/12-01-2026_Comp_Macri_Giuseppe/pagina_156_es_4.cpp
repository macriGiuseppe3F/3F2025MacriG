/*In un file di testo è caricata una sequenza di voti.
Scrivi un proramma che determini qual'è il voto massimo per le sufficienze e il voto minimo
per le insufficienze.*/

#include <iostream>
using namespace std;
int main()
{

    float n, maxsufficienze = 0, min_insufficienze = 10, voto;
    cout << "\nInserisci quanti voti vuoi inserire";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cout << "\nInserisci il voto #" << i;
        cin >> voto;

        if (voto > maxsufficienze && voto >= 6)
        {
            maxsufficienze = voto;
        }
        else
        {
            if (voto < 6 && voto < min_insufficienze)
                min_insufficienze = voto;
        }
    }

    if (maxsufficienze > 0)
    {
        cout << "\nIl voto più alto delle sufficienze è" << " " << maxsufficienze;
    }

    if (min_insufficienze < 10)
        cout << "\nIl voto minimo tra le insufficienze: " << min_insufficienze;
    else
        cout << "\nNon ci sono insufficienze.";

    return 0;
}