/*Scrivi un programma che stampi N numeri (N in input e deve essere > 0)
in modo che il numero stampato sia il triplo del precedente*/

#include <stdio.h>
int main()
{
    int N, num, cont = 0;

    // input del numero di elementi da stampare
    do
    {
        printf("\nInserisci quanti numeri vuoi stampare (deve essere > 0): ");
        scanf("%d", &N);
    } while (N <= 0);

    // input del primo numero
    printf("\nInserisci il primo numero: ");
    scanf("%d", &num);

    // ciclo per stampare i numeri
    do
    {
        printf("\n%d", num);
        num = num * 3; // calcolo del triplo del numero precedente
        cont++;
    } while (cont < N);

    return 0;
}