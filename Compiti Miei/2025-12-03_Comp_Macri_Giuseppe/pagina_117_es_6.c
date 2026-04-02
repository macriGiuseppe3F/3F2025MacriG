/* Scrivi un Programma in C che verifichi se un carattere digitato da tastiera corrisponde a:
   - "S" o "s" e in tal caso visualizzi il messaggio "SI"
   - "N" o "n" e in tal caso visualizzi il messaggio "NO"
   - Un qualsiasi altro carattere, e in tal caso visualizzi il messaggio "ERRATO"
*/

#include <stdio.h>

int main()
{
    char carattere;

    printf("Inserisci un carattere: ");
    scanf("%c", &carattere);

    if (carattere == 'S' || carattere == 's') // Controllo  S o s
    {
        printf("SI");
    }
    else if (carattere == 'N' || carattere == 'n') // Controllo  N o n
    {
        printf("NO");
    }
    else
    {
        printf("ERRATO");
    }

    return 0;
}
