/*Codifica in C il seguente algoritmo (Pag.117 esercizio 5)*/

#include <stdio.h>
#include <math.h>
int main()
{

    float a, b, c, delta, x, x1, x2;
    printf("Inserisci il quoziente di a:");
    scanf("%f", &a); // Leggo a

    printf("Inserisci il quoziente di b:");
    scanf("%f", &b); // Leggo b

    printf("Inserisci il quoziente di c:");
    scanf("%f", &c); // Leggo c

    if (a != 0) // Controllo che l'equazione sia di secondo grado
    {
        delta = (b * b) - 4 * a * c;
        if (delta > 0) // Controllo se delta è maggiore di 0
        {
            x1 = (-b + sqrt(delta) / (2 * a));
            x2 = (-b - sqrt(delta) / (2 * a));
            printf("x1 : %f", x1);
            printf("x2 : %f", x2);
        }
        else
        {
            if (delta = 0) // Controllo se delta è uguale a 0
            {
                x = -b / (2 * a);
                printf("x: %f", x);
            }
            else
            {
                printf("L'equazione non ha soluzioni reali");
            }
        }
    }
    else
    {
        printf("L'equazione non è di secondo  grado");
    }

    return 0;
}
