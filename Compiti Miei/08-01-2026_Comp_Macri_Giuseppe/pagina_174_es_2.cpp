/*Stampa i primi N numeri pari e
successivamente i primi N numeri dispari
(N è letto in input ed è > 0)*/

#include <iostream>
using namespace std;
int main()
{

    int N;
    cout << "\nInserisci un numero positivo N";
    cin >> N;
    cout << "\nI primi " << N << " numeri pari sono:\n";
    for (int i = 1; i <= N; ++i)
    {
        cout << 2 * i << " ";
    }
    cout << "\nI primi " << N << " numeri dispari sono:\n";
    for (int i = 0; i < N; ++i)
    {
        cout << 2 * i + 1 << " ";
    }
    return 0;
}