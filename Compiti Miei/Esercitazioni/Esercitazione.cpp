/*Ordinamento con selection sort*/

#include <iostream>
using namespace std;
int main()
{

    int array[] = {1, 2, 3, 4, 5};
    int N = 5;

    for (int i = 0; i < N; i++)
    {
        int min = i;
        for (int j = i + 1; i < N; i++)
        {
            if (array[j] < array[min])
            {
                min = j;
            }
            else
            {
                int temp = array[i];
                array[i] = array[min];
                array[min] = temp;
            }
        }
    }

    for (int i = 0; i < N; i++)
    {
        cout << array[i] << " ";
    }
    return 0;
}