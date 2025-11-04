#include <stdio.h>
#include <stdlib.h>

void stampa_menu() {
    printf("\n--- MENU FIGURE GEOMETRICHE ---\n");
    printf("1 TRIANGOLO\n");
    printf("2 QUADRATO\n");
    printf("3 RETTANGOLO\n");
    printf("4 ROMBO\n");
    printf("5 STAMPA\n");
    
}

int main(){
	
	int scelta;
	stampa_menu();
	
	printf("Scegli tra 1 e 5:");
	scanf("%d", &scelta);
	
	switch(scelta){
		
		case 1:
				printf("Hai scelto il triangolo\n");
				break;
				
		case 2:
				printf("Hai scelto il quadrato\n");
				break;
				
		case 3:
				printf("Hai scelto il rettangolo\N");
				break;
				
		case 4:
				printf("Hai scelto il rombo\n");
				break;
				
		case 5: 
				printf("Hai scelto la stampa\n");
				break;
				
		
	
	
	if (scelta != 5) {
                printf("Scelta non valida (seleziona 1, 2, 3, 4 o 5).\n");
            }
            break;
    }

    if (scelta == 5) {
        
        printf("L'algoritmo termina con l'opzione 5.\n");
        
    } else {
        
        printf("Il programma è completato: %d.\n", scelta);
    }
    
    return 0;
	
	
}

