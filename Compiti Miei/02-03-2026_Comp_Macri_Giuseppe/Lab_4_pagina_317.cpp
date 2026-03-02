#include <iostream>
#include <fstream>
using namespace std;
int main()
{

    ifstream mioFile("matrice.txt");

    if (!mioFile)
    {
        cout << "\nIl file non si è aperto correttamente";
        return 1;
    }
    else
    {
        cout << "\nIl file si è aperto correttamente";
        return 0;
    }

    int matrice[3][4];
    cout << "\nEcco la tua matrice";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            mioFile >> matrice[i][j];
            cout << matrice[i][j] << " ";
        }
        cout << "\n";
        for (int j = 0; j < 4; j++)
        {
            cout << matrice[i][j] << " ";
        }
    }
    return 0;
}