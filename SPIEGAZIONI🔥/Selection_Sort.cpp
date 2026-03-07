/*Ordinamento con selection sort*/

#include <iostream>
using namespace std;
int main()
{

    int i, j, min, temp;
    int array[100] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = 100;
    for (i = 0; i < n - 1; i++)
    {
        min = i;
        for (j = i + 1; j < n; j++)
            if (arr[j] < arr[min])
                min = j;
        temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
    cout << "Elementi ordinati: ";
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}