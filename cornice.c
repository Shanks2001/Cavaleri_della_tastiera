#include <stdio.h>
#include <string.h>

#include <stdio.h>
#include <string.h>

void stampa_cornice(char testo[]) {
    int lunghezza_testo = strlen(testo);
    int larghezza_cornice = lunghezza_testo + 4; // Aggiungiamo 4 per i bordi della cornice

    // Stampa il bordo superiore
    printf("\t\t\t+");
    for (int i = 0; i < larghezza_cornice; i++) {
        printf("-");
    }
    printf("+\n");

    // Stampa il testo allineato al centro con i bordi
    printf("\t\t\t|  %s  |\n", testo);

    // Stampa il bordo inferiore
    printf("\t\t\t+");
    for (int i = 0; i < larghezza_cornice; i++) {
        printf("-");
    }
    printf("+\n");
}

int main() {
    // Esempi di utilizzo
    stampa_cornice("DOMANDA IN ITALIANO");
    stampa_cornice("DOMANDA IN INGLESE");

    return 0;
}