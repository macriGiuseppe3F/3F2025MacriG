/*Scrivi un programma che inseriti in input N numeri interi e un numero K
determini quanti numeri sono maggiori di k, quanti sono minori di k e quanti sono uguali a k*/

#include <stdio.h>

int main()
{
    int N, K, num;
    int cont = 0;
    int c1 = 0, c2 = 0, c3 = 0;

    printf("\nQuanti numeri interi vuoi inserire: ");
    scanf("%d", &N);

    printf("\nInserisci un numero (K): ");
    scanf("%d", &K);

    do
    {
        printf("\nInserisci un numero intero: ");
        scanf("%d", &num);

        if (num > K)
            c1++;
        else if (num < K)
            c2++;
        else
            c3++;

        cont++; // incremento contatore

    } while (cont < N);

    printf("\nNumeri maggiori di K: %d", c1);
    printf("\nNumeri minori di K: %d", c2);
    printf("\nNumeri uguali a K: %d", c3);

    return 0;
}
