#include <stdio.h>

/* ============================================================
   Funzioni (definite una sola volta)
   ============================================================ */

void stampa_vettore(const int v[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", v[i]);
    }
    printf("\n");
}

void stampa_multipli_di_3(const int v[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (v[i] % 3 == 0)
        {
            printf("%d ", v[i]);
        }
    }
    printf("\n");
}

int ricerca_presenza(const int v[], int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        if (v[i] == x)
        {
            return 1;
        }
    }
    return 0;
}

long long fattoriale(int n)
{

    if (n <= 0)
    { // fall-off sconsigliato
        return 0;
    }
    if (n == 1)
        return 1; // senza parentesi sconsigliato!!!

    return n * fattoriale(n - 1);
}

int conta_occorrenze(const int v[], int n, int x)
{
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == x)
        {
            c++;
        }
    }
    return c;
}

void stampa_picchi(const int v[], int n)
{

    for (int i = 1; i < n - 1; i++)
    {
        if (v[i] > v[i - 1] && v[i] > v[i + 1])
        {
            printf("%d ", v[i]);
        }
    }
    printf("\n");
}

void stampa_pari(const int v[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (v[i] % 2 == 0)
        {
            printf("%d ", v[i]);
        }
    }
    printf("\n");
}

int cerca_prima_occorrenza(const int v[], int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        if (v[i] == x)
        {
            return i;
        }
    }
    return -1;
}

int conta_maggiori_di_t(const int v[], int n, int t)
{
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] > t)
        {
            c++;
        }
    }
    return c;
}

void inserisci_in_posizione(int v[], int n, int pos, int valore)
{

    if (pos < 0 || pos >= n)
    {
        return;
    }

    // shift a destra
    for (int i = n - 1; i > pos; i--)
    {
        v[i] = v[i - 1];
    }
    v[pos] = valore;
}

void stampa_vallate(const int v[], int n)
{

    for (int i = 1; i < n - 1; i++)
    {
        if (v[i] < v[i - 1] && v[i] < v[i + 1])
        {
            printf("%d ", v[i]);
        }
    }
    printf("\n");
}

int somma_primi_n_ricorsiva(int n)
{

    if (n <= 0)
    {
        return 0;
    }
    return n + somma_primi_n_ricorsiva(n - 1);
}

/* ============================================================
   Main: contiene le "celle" con domande+risposte in commento
   e, quando richiesto, chiamate a funzioni / frammenti minimi
   ============================================================ */

int main(void)
{

    /*
    1) Qual è l’indice dell’ultimo elemento di un vettore di dimensione n? Perchè?

    Risposta:
     n - 1

    Spiegazione breve:
    - Gli indici partono da 0 e arrivano a n-1.
    */

    /*
    2) In una funzione che riceve un vettore v di int, si può usare sizeof(v)/sizeof(v[0])
       per calcolare il numero di elementi del vettore?
       - Si / No

    Risposta:
    - No

    Spiegazione breve:
    - In parametro di funzione v[] decade a puntatore; sizeof(v) è sizeof(int*), non la dimensione totale dell'array.
    */

    /*
    3) Se si scrive codice per controllare se un vettore è ordinato confrontando v[i] < v[i+1],
       qual è la condizione da inserire nel ciclo for?

    Risposta:
    - i < n - 1

    Spiegazione breve:
    - Si deve arrivare fino a i=n-2 per poter confrontare con v[n-1].
    */

    /*
    4) In una funzione con prototipo void f(int v[]) qual è il valore di sizeof(v)?

    Risposta:
    - sizeof(int*)

    Spiegazione breve:
    - In un parametro, un array viene trattato come puntatore al primo elemento.
    */

    /*
    5) Scrivere un ciclo for che stampi gli elementi di un vettore di interi v di dimensione n dall’ultimo al primo.

    Risposta (codice):
        for (int i = n - 1; i >= 0; i--) {
            printf("%d ", v[i]);
        }
        printf("\n");
    */

    {
        int v[] = {10, 20, 30, 40, 50};
        int n = (int)(sizeof(v) / sizeof(v[0]));
        for (int i = n - 1; i >= 0; i--)
        {
            printf("%d ", v[i]);
        }
        printf("\n");
    }

    /*
    6) Scrivere una funzione che stampi tutti gli elementi multipli di 3 di un vettore.

    Risposta (codice):
    - usare stampa_multipli_di_3(v, n)
    */

    {
        int v[] = {3, 4, 6, 7, 9, 10, 12};
        int n = (int)(sizeof(v) / sizeof(v[0]));
        stampa_multipli_di_3(v, n);
    }

    /*
    7) Scrivere una funzione di ricerca sequenziale che restituisca 1 se x è presente, 0 altrimenti.

    Risposta (codice):
    - usare ricerca_presenza(v, n, x)
    */

    {
        int v[] = {5, 2, 7, 2};
        int n = (int)(sizeof(v) / sizeof(v[0]));
        int x = 7;
        int presente = ricerca_presenza(v, n, x);
        printf("%d\n", presente);
    }

    /*
    8) Scrivere una funzione che calcoli il fattoriale di un numero passato come parametro.

    Risposta (codice):
    - usare fattoriale(n)
    */

    {
        int n = 6;
        printf("%lld\n", fattoriale(n));
    }

    /*
    9) Scrivere una funzione che ritorni le occorrenze, in un vettore, di un valore x passato come parametro.

    Risposta (codice):
    - usare conta_occorrenze(v, n, x)
    */

    {
        int v[] = {5, 2, 7, 2, 2};
        int n = (int)(sizeof(v) / sizeof(v[0]));
        int x = 2;
        printf("%d\n", conta_occorrenze(v, n, x));
    }

    /*
    10) Scrivere una funzione che, dato un vettore, stampi tutti gli elementi che sono “picchi”,
        cioè maggiori dei due vicini.

    Risposta (codice):
    - usare stampa_picchi(v, n)
    */

    {
        int v[] = {1, 5, 2, 7, 3, 3, 8, 2};
        int n = (int)(sizeof(v) / sizeof(v[0]));
        stampa_picchi(v, n);
    }

    /*
    1) I vettori del C da noi studiati possono crescere o diminuire di dimensione?
       - Si / No

    Risposta:
    - No

    Spiegazione breve:
    - Gli array hanno dimensione fissa; per variare dimensione serve memoria dinamica (malloc/realloc).
    */

    /*
    2) Se v è un vettore di float, cosa calcola sizeof(v)/sizeof(v[0])? Perchè?

    Risposta:
    - Numero di elementi del vettore.

    Spiegazione breve:
    - sizeof(v) è la dimensione totale in byte; sizeof(v[0]) è la dimensione di un elemento.
    */

    /*
    3) Qual è l’indice del penultimo elemento di un vettore di dimensione n? Perchè?

    Risposta:
    - n - 2

    Spiegazione breve:
    - Ultimo indice n-1, quindi penultimo n-2.
    */

    /*
    4) Scrivere un ciclo for che stampi gli elementi di un vettore dall’ultimo al primo.

    Risposta (codice):
        for (int i = n - 1; i >= 0; i--) {
            printf("%d ", v[i]);
        }
        printf("\n");
    */

    {
        int v[] = {9, 8, 7};
        int n = (int)(sizeof(v) / sizeof(v[0]));
        for (int i = n - 1; i >= 0; i--)
        {
            printf("%d ", v[i]);
        }
        printf("\n");
    }

    /*
    5) Se si scrive una funzione ricorsiva in modo errato e la condizione di uscita non viene mai soddisfatta cosa accade al programma? Perchè?

    Risposta:
    - Ricorsione infinita fino a crash (stack overflow).

    Spiegazione breve:
    - Ogni chiamata aggiunge un frame nello stack, che prima o poi si esaurisce.
    */

    /*
    6) Scrivere una funzione ricorsiva che calcoli la somma dei primi n interi positivi: 1+2+...+n.

    Risposta (codice):
    - usare somma_primi_n_ricorsiva(n)
    */

    {
        int n = 5;
        printf("%d\n", somma_primi_n_ricorsiva(n));
    }

    /*
    7) Scrivere una funzione che stampi tutti gli elementi pari di un vettore.

    Risposta (codice):
    - usare stampa_pari(v, n)
    */

    {
        int v[] = {1, 2, 3, 4, 6, 7};
        int n = (int)(sizeof(v) / sizeof(v[0]));
        stampa_pari(v, n);
    }

    /*
    8) Scrivere una funzione di ricerca sequenziale che restituisca l’indice della prima occorrenza di x,
       oppure -1 se non trovato.

    Risposta (codice):
    - usare cerca_prima_occorrenza(v, n, x)
    */

    {
        int v[] = {5, 2, 7, 2};
        int n = (int)(sizeof(v) / sizeof(v[0]));
        int x = 2;
        printf("%d\n", cerca_prima_occorrenza(v, n, x));
    }

    /*
    9) Scrivere una funzione che conti quanti elementi di vettore v sono maggiori di t.

    Risposta (codice):
    - usare conta_maggiori_di_t(v, n, t)
    */

    {
        int v[] = {3, 10, 2, 8, 5};
        int n = (int)(sizeof(v) / sizeof(v[0]));
        int t = 5;
        printf("%d\n", conta_maggiori_di_t(v, n, t));
    }

    /*
    10) Scrivere una funzione che inserisca un valore in posizione pos spostando a destra
        (perdendo l'ultimo elemento).

    Risposta (codice):
    - usare inserisci_in_posizione(v, n, pos, valore)
    */

    {
        int v[] = {1, 2, 3, 4, 5};
        int n = (int)(sizeof(v) / sizeof(v[0]));
        int pos = 2;
        int valore = 99;
        inserisci_in_posizione(v, n, pos, valore);
        stampa_vettore(v, n);
    }

    /*
    11) Scrivere una funzione che stampi tutti gli elementi che sono “vallate”, cioè minori dei due vicini.

    Risposta (codice):
    - usare stampa_vallate(v, n)
    */

    {
        int v[] = {5, 1, 4, 2, 7, 3, 9};
        int n = (int)(sizeof(v) / sizeof(v[0]));
        stampa_vallate(v, n);
    }

    /*
    1) char nome[11]; massimo numero di caratteri stampabili assegnabili?
       - 11 / infiniti / 2^1(2^11) / 10

    Risposta:
    - 10

    Spiegazione breve:
    - Un carattere è riservato al terminatore '\0'.
    */

    /*
    2) Cosa restituisce f(4)?
       int f(int n) {
           if(n==0) return 0;
           return n + f(n-1);
       }

    Risposta:
    - 10

    Spiegazione breve:
    - Somma 4+3+2+1+0.
    */

    /*
    3) Cosa fa il frammento?
       int c=0;
       for(int i=0;i<n;i++) {
           if(v[i]%2==0) c++;
       }

    Risposta:
    - Conta quanti elementi sono pari.

    Spiegazione breve:
    - Incrementa c per ogni v[i] divisibile per 2.
    */

    /*
    4) Con v={5,2,7,2} e x=2, cosa restituisce cerca?
       int cerca(const int v[], int n, int x) {
           for(int i=0;i<n;i++) {
               if(v[i]==x) return i;
           }
           return -1;
       }

    Risposta:
    - 1

    Spiegazione breve:
    - Restituisce il primo indice della prima occorrenza.
    */

    /*
    5) Con v={3,1,4} cosa stampa?
       for(int i=0; i<n; i++) {
           if(v[i]>2) printf("%d ", v[i]);
       }

    Risposta:
    - 3 4

    Spiegazione breve:
    - Stampa solo i valori maggiori di 2.
    */

    /*
    6) Con v={3,2,2,5}, n=4, valore finale di c?
       int c=0;
       for(int i=0;i<n;i++) {
           for(int j=i+1;j<n;j++) {
               if(v[i]==v[j]) c++;
           }
       }

    Risposta:
    - 1

    Spiegazione breve:
    - Una sola coppia uguale: i due 2.
    */

    /*
    7) Selection sort su v={4,1,3}: dopo l'esecuzione qual e' v?

    Risposta:
    - {1,3,4}

    Spiegazione breve:
    - Porta ogni volta il minimo in testa alla parte non ordinata.
    */

    /*
    8) g(5):
       int g(int n) {
           if(n<10) return 1;
           return 1 + g(n/10);
       }

    Risposta:
    - 1

    Spiegazione breve:
    - 5<10, termina subito.
    */

    /*
    9) h su v={1,2,3,4,5}:
       int h(const int v[], int n) {
           int s=0;
           for(int i=1;i<n-1;i++){
               if(v[i]>v[i-1] && v[i]>v[i+1]) s++;
           }
           return s;
       }

    Risposta:
    - 0

    Spiegazione breve:
    - Nessun elemento interno e' maggiore di entrambi i vicini in un array crescente.
    */

    /*
    1) char nome[11]; massimo numero di caratteri stampabili assegnabili?
    Risposta: 10
    Spiegazione breve: un carattere serve per '\0'.
    */

    /*
    2) f(4) con f(n)=n+f(n-1), f(0)=0
    Risposta: 10
    Spiegazione breve: 4+3+2+1+0.
    */

    /*
    3) Frammento con c++ se v[i]%2==0
    Risposta: conta quanti elementi sono pari
    Spiegazione breve: incrementa il contatore quando trova un pari.
    */

    /*
    4) cerca con v={5,2,7,2}, x=2
    Risposta: 1
    Spiegazione breve: prima occorrenza a indice 1.
    */

    /*
    5) Con v={3,1,4} stampa valori >2
    Risposta: 3 4
    Spiegazione breve: stampa solo gli elementi che soddisfano la condizione.
    */

    /*
    6) Con v={3,2,2,5,7,3}, n=4, valore finale di c?
    Risposta: 1
    Spiegazione breve: n=4 considera solo {3,2,2,5}, unica coppia uguale i due 2.
    */

    /*
    1) Indice ultimo elemento di un vettore di dimensione n?
    Risposta: n-1
    Spiegazione breve: indici da 0 a n-1.
    */

    /*
    2) Quante volte esegue:
       for(int i = 0; i <= 5; i++)
    Risposta: 6
    Spiegazione breve: i = 0,1,2,3,4,5.
    */

    /*
    3) Quante volte esegue:
       int j = 0;
       for(i = 0; i <= 5;  j++)
    Risposta: infinite
    Spiegazione breve: i resta sempre 0, la condizione i<=5 è sempre vera.
    */

    /*
    4) Valore finale di s:
       int s = 0;
       for(int i = 1; i <= 3; i++) {
           s = s + i;
       }
    Risposta: 6
    Spiegazione breve: 1+2+3.
    */

    /*
    5) Con v = {3, 1, 4} cosa stampa?
       for(int i=0; i<n; i++) {
           if(v[i]>2) printf("%d ", v[i]);
       }
    Risposta: 3 4
    Spiegazione breve: stampa solo i valori > 2.
    */

    /*
    6) Cosa stampa:
       for(int i = 5; i > 2; i--){
           printf("%d ", i);
       }
    Risposta: 5 4 3
    Spiegazione breve: stampa 5,4,3 e poi si ferma quando i diventa 2.
    */

    return 0;
}
3f - 2025_verifica3_check - studenti.cpp Visualizzazione di 3f - 2025_verifica3_check - studenti.cpp.2026 - 02 - 26 Esame domande + risposte TENTATIVE(non necessariamente esatte, controllarle) basate su 3a verifica
VIALI ENRICO
•
08:27
100 punti
Consegna: 09:40
Esaminare il file accluso con domande identiche o simili a quelle della 3a verifica,
verificare se le risposte sono corrette (NON è detto che lo siano)
identificare gli eventuali punti non chiari (della materia inclusi in ambito) e riportarli come commenti privati, MAX 3)
3f-2025_verifica3_check-studenti.cpp
Testo

Commenti sul corso
