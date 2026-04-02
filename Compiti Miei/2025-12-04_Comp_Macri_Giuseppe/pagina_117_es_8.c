/*Scrivi un Pogramma in C che legga da input 3 numeri e verifichi
se sono in progressione aritmetica.*/

#include <stdio.h>
int main()
{
    int num1, num2, num3;

    // Prendere in input 3 numeri
    printf("Inserisci tre numeri separati : ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Verifica se i numeri sono in progressione aritmetica
    if ((num2 - num1) == (num3 - num2))
    {
        printf("I numeri sono in progressione aritmetica\n");
    }
    else
    {
        printf("I numeri non sono in progressione aritmetica\n");
    }

    return 0;
}